#include "overlay.h"
#include "memory.h"
#include "utility.h"
#include "struct.h"
#include "protect/protectmain.h"

#include "auth.hpp"

using namespace KeyAuth;

std::string namee = "RustCheat"; // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = "GxfB3HxNgE"; // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = "c5a4115ef9e63e03883ccc8ca449a2e1dbf94f9e4db83796376e855f68e30f20"; // app secret, the blurred text on licenses tab and other tabs
std::string version = "2.1"; // leave alone unless you've changed version on website
std::string url = "https://auth.havencheats.com/api/1.1/"; // change if you're self-hosting
std::string sslPin = "ssl pin key (optional)"; // don't change unless you intend to pin public certificate key. you can get here in the "Pin SHA256" field https://www.ssllabs.com/ssltest/analyze.html?d=keyauth.win&latest. If you do this you need to be aware of when SSL key expires so you can update it
api KeyAuthApp(namee, ownerid, secret, version, url, sslPin);


static int xekran = 576, yekran = 386;
static int sayfa = 1;


static int MenuSayfasi = 6;
bool cross = false;
bool ADS_Hide = false;
bool Giris = true;

inline bool enable = false;
inline bool esp = false;
inline bool espon = false;

inline float timee = 12;
inline float light = 1;

static bool bok = false;
inline float gravity_distancee = 5;
inline bool hepsi = true;
static bool hidescript1 = true;
static bool hidescript2 = true;
static bool hidescript3 = true;
static bool hidescript4 = true;
inline bool admin_flag_checkboxx = false;
inline bool spiderman = false;
inline bool norecoil = false;
inline bool hanging = false;
inline bool thirdperson = false;
inline bool gravity = false;
inline bool fatbullet = false;
inline bool nospread = false;
inline bool alwaysday = false;
inline bool alwaysdaytog = true;
inline bool fovtamiri = false;
inline bool nightmodetamiri = false;
inline bool fakeworkbench = false;
inline bool Spectating = false;
inline bool fov = false;
inline bool WalkOnWater = false;
inline bool flyhack = false;
inline bool climb = false;
inline bool infinitejump = false;
inline bool nospread_checkbox = false;
inline bool fat_bullet_checkbox = false;
inline bool super_eoka_checkbox = false;
inline bool full_automatic_checkbox = false;
inline bool jumpshot = false;
inline bool aydinlik = false;
inline bool fastswim = false;
inline bool fastswimm = false;
inline bool SPEEDhack = false;
inline bool change_time_checkbox = false;
inline bool zoom = false;
inline bool suicide = false;
inline bool AdminEsp = false;
inline bool nighttmode = false;
inline bool cullingtamiri = false;
inline bool fatbullettamiri = false;
inline bool eokatamiri = false;
inline bool ototamiri = false;
inline bool instantCompound = false;
inline bool instabow = false;
inline bool fakelag = false;
inline bool nosway = false;
inline bool supermeele = false;
inline bool fastswitch = false;
inline bool meeletamiri = false;
inline bool noshotgunspread = false;
inline bool longneck = false;
inline bool timer = false;
inline bool chams = false;
inline bool chamstamiri = false;
inline bool spinbot = false;

static int WalkOnWaterr = 0x5A;
static int FlyHackButon = 0x46;
static int hangingg = VK_XBUTTON2;
static int speedbutton = VK_XBUTTON1;
static int zoombutton = 0;
static int climbbutton = 0x58;



float FOVV = 120.f;
float speedBonus = 0.5f;
float flyhackspeed = 0.f;
float zoomyer = 42.f;
float timervalue = 2.f;

float NeckWidgth = 0.f;
float NeckLength = 0.f;
float NeckWeigth = 0.f;

bool control = false;


std::wstring get_item_name(uintptr_t item)
{
	auto unk = driver.read<UINT64>(item + 0x20);
	unk = driver.read<UINT64>(unk + 0x20);
	return driver.read_wstring(unk + 0x14, 14);
}
bool is_weapon(uintptr_t helditem)
{
	auto ItemName = get_item_name(helditem);
	if (ItemName.find(L"rifle") != std::string::npos) return true;
	if (ItemName.find(L"pistol") != std::string::npos) return true;
	if (ItemName.find(L"bow") != std::string::npos) return true;
	if (ItemName.find(L"lmg") != std::string::npos) return true;
	if (ItemName.find(L"shotgun") != std::string::npos) return true;
	if (ItemName.find(L"smg") != std::string::npos) return true;
	else return false;
}

bool is_meele(uintptr_t helditem)
{
	auto ItemName = get_item_name(helditem);
	if (ItemName.find(L"rock") != std::string::npos) return true;
	if (ItemName.find(L"hatchet") != std::string::npos) return true;
	if (ItemName.find(L"stone.pickaxe") != std::string::npos) return true;
	if (ItemName.find(L"stonehatchet") != std::string::npos) return true;
	if (ItemName.find(L"pickaxe") != std::string::npos) return true;
	if (ItemName.find(L"hammer.salvage") != std::string::npos) return true;
	if (ItemName.find(L"icepick.salvag") != std::string::npos) return true;
	if (ItemName.find(L"axe.salvaged") != std::string::npos) return true;
	if (ItemName.find(L"pitchfork") != std::string::npos) return true;
	if (ItemName.find(L"mace") != std::string::npos) return true;
	if (ItemName.find(L"spear.stone") != std::string::npos) return true;
	if (ItemName.find(L"spear.wooden") != std::string::npos) return true;
	if (ItemName.find(L"machete") != std::string::npos) return true;
	if (ItemName.find(L"bone.club") != std::string::npos) return true;
	if (ItemName.find(L"paddle") != std::string::npos) return true;
	if (ItemName.find(L"salvaged.sword") != std::string::npos) return true;
	if (ItemName.find(L"salvaged.cleav") != std::string::npos) return true;
	if (ItemName.find(L"knife.combat") != std::string::npos) return true;
	if (ItemName.find(L"knife.butcher") != std::string::npos) return true;
	if (ItemName.find(L"jackhammer") != std::string::npos) return true;
	if (ItemName.find(L"chainsaw") != std::string::npos) return true;
	if (ItemName.find(L"knife.bone") != std::string::npos) return true;
	if (ItemName.find(L"torch") != std::string::npos) return true;
	if (ItemName.find(L"hammer") != std::string::npos) return true;
	if (ItemName.find(L"sickle") != std::string::npos) return true;
	else return false;
}
void omni()
{
	while (true)
	{
		auto baseMove = driver.read<uintptr_t>(Local_Player + oPlayerMovement); //baseplayer -> basemovement
		driver.write<float>(baseMove + 0x40, 5.f);
	}   
}

unsigned short lfsr = 0xACE1u;
unsigned int bit = 0;

unsigned my_rand()
{
	if (!lfsr) {
		lfsr = 0xACE1u; bit = 0;
	}
	bit = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5)) & 1;
	return lfsr = (lfsr >> 1) | (bit << 15);
}

uintptr_t objectList;
uintptr_t objectListSize;

void Hilee()
{
	while (true)
	{

		auto main_offsets = driver.read<uintptr_t>(g_assembly + BaseEntity);
		Local_Player = driver.read_chain(main_offsets, { 0xb8, 0x10, 0x10, 0x28, 0x18, 0x20 });
		/// 
		const auto current_item = GetHeldItem(Local_Player);
		auto base_projectile = driver.read<uintptr_t>(current_item + oHeld);
		auto recoil_prop = driver.read<uintptr_t>(base_projectile + oRecoilProperties);
		auto newRecoilOverride = driver.read<uintptr_t>(recoil_prop + 0x78);

		const auto camera_manager_offset = driver.read<uintptr_t>(g_unityplayer + 0x1762E80);
		const auto camera_manager = driver.read<uintptr_t>(camera_manager_offset);
		const auto camera = driver.read<uintptr_t>(camera_manager);
		const auto camera_object = driver.read<uintptr_t>(camera + 0x30);
		if (!camera_object)
			return;
		const auto object_class = driver.read<uintptr_t>(camera_object + 0x30);
		if (!object_class)
			return;
		const auto Entity = driver.read<uintptr_t>(object_class + 0x18);
		if (!Entity)
			return;
		LocalPlayer.pViewMatrix = (Matrix4x4*)(Entity + 0x2E4);

		//uintptr_t BaseEntity_c = driver.read<uintptr_t>(g_assembly + 0x32708C0); //BaseEntity_c*
		//uintptr_t h1 = driver.read<uintptr_t>(BaseEntity_c + 0xB8);
		//uintptr_t h2 = driver.read<uintptr_t>(h1 + 0x10);
		//uintptr_t h3 = driver.read<uintptr_t>(h2 + 0x10);
		//uintptr_t h4 = driver.read<uintptr_t>(h3 + 0x28);
		//objectList = driver.read<uintptr_t>(h4 + 0x18);
		//objectListSize = driver.read<uint32_t>(h4 + 0x10);
		//if (!objectListSize)
		//	return;

		uintptr_t buffer_list = driver.read_chain(g_assembly, { 0x32708C0, 0xB8, 0x10, 0x10, 0x28 });
		if (!buffer_list)
			buffer_list = driver.read_chain(g_assembly, { 0x32708C0, 0xB8, 0x40, 0x10, 0x28 });
		objectList = driver.read<uintptr_t>(buffer_list + 0x18);
		objectListSize = driver.read<uint32_t>(buffer_list + 0x10);
		if (!objectListSize)
			return;

		int flag = driver.read<int>(Local_Player + playerflags);
		auto Movement = driver.read<uintptr_t>(Local_Player + oPlayerMovement);
		//
		if (admin_flag_checkboxx == true) { // adminmode ve debugcamera repair
			if (driver.read<int>(Local_Player + playerflags) != 4) {
				driver.write<uintptr_t>(Local_Player + playerflags, 4); // adminflag
			}
			auto klass = driver.read<uintptr_t>(g_assembly + ConVar_Client_c);
			auto static_fields = driver.read<uintptr_t>(klass + 0xB8);
			if (driver.read<int>(static_fields + oCamSpeed) != 1.f) {
				driver.write<float>(static_fields + oCamSpeed, 1.f);
			}
			if (driver.read<int>(static_fields + oCamLerp) != 1.f) {
				driver.write<float>(static_fields + oCamLerp, 1.f);
			}

			driver.write<bool>(Movement + 0x18, false); // noclipi oto kapatýyor
		}
		if (thirdperson == true)
		{
			if (driver.read<uintptr_t>(Local_Player + playerflags) != 1024) {
				driver.write<uintptr_t>(Local_Player + playerflags, 1024);
			}
		}
		if (AdminEsp == true)
		{
			if (cullingtamiri)
			{
				auto OcclusionCulling = driver.read<uintptr_t>(g_assembly + 52894448); //       "Signature": "OcclusionCulling_c*"
				auto CullingDebugOnOff = driver.read<uintptr_t>(OcclusionCulling + 0xB8);
				auto OcclusionCullingEditted = driver.read_chain(OcclusionCulling, { 0xB8, 128, 0x18 });
				driver.write<uintptr_t>(OcclusionCullingEditted + 0x20, 131072);
				if (driver.read<uintptr_t>(CullingDebugOnOff + 0x94) != 1) {
					driver.write<uintptr_t>(CullingDebugOnOff + 0x94, 1);
				}
				cullingtamiri = false;
			}
		}
		else
		{
			if (!cullingtamiri)
			{
				auto OcclusionCulling = driver.read<uintptr_t>(g_assembly + 52894448); //       "Signature": "OcclusionCulling_c*"
				auto CullingDebugOnOff = driver.read<uintptr_t>(OcclusionCulling + 0xB8);
				if (driver.read<uintptr_t>(CullingDebugOnOff + 0x94) != 0) {
					driver.write<uintptr_t>(CullingDebugOnOff + 0x94, 0);
				}
				cullingtamiri = true;
			}
		}
		auto klass2 = driver.read<uintptr_t>(g_assembly + ConVar_Admin_c); // convar_admin_c*
		auto static_fields2 = driver.read<uintptr_t>(klass2 + 0xb8);
		if (nighttmode)
		{
			driver.write<float>(static_fields2 + 0x0, 7); // public static float admintime;
			driver.write<float>(static_fields2 + 0x4, 0); // public static float adminlight;
			driver.write<float>(static_fields2 + 0xC, 125); //	public static float adminambientmultiplier; // 0xC
		}
		else
		{
			driver.write<float>(static_fields2 + 0x0, -1); // public static float admintime;
			driver.write<float>(static_fields2 + 0x4, -1); // public static float adminlight;
			driver.write<float>(static_fields2 + 0xC, -1); //	public static float adminambientmultiplier; // 0xC
		}
		if (alwaysday)
		{
			alwaysdaytog = false;
			if (driver.read<float>(static_fields2 + 0x0) != timee) {
				driver.write<float>(static_fields2 + 0x0, timee); // public static float admintime;
			}
			if (driver.read<float>(static_fields2 + 0x4) != light) {
				driver.write<float>(static_fields2 + 0x4, light); // public static float admintime;
			}
		}
		else
		{
			if (!alwaysdaytog)
			{
				if (driver.read<float>(static_fields2 + 0x0) != -1) {
					driver.write<float>(static_fields2 + 0x0, -1); // public static float admintime;
				}
				if (driver.read<float>(static_fields2 + 0x4) != -1) {
					driver.write<float>(static_fields2 + 0x4, -1); // public static float admintime;
				}
				alwaysdaytog = true;
			}
		}
		if (spiderman == true) {
			if (driver.read<float>(Movement + groundAngle) != 0.f) {
				driver.write<float>(Movement + groundAngle, 0.f);
			}
			if (driver.read<float>(Movement + groundAngleNew) != 0.f) {
				driver.write<float>(Movement + groundAngleNew, 0.f);
			}
		}
		if (infinitejump == true) {
			if (GetAsyncKeyState(VK_SPACE))
			{
				driver.write<Vector3>(Movement + 0xc8, Vector3(0, 10000000, 0));
				driver.write<Vector3>(Movement + 0xc4, Vector3(99999999, 99999999, 99999999));
			}
		}
		if (suicide == true)
		{
			if (GetAsyncKeyState(VK_END))
			{
				driver.write<bool>(Movement + wasFalling, true);
				driver.write<Vector3>(Movement + previousVelocity, Vector3(0, -20, 0));
				driver.write<float>(Movement + groundTime, 0.f);
			}
		}
		if (gravity == true) {
			if (GetAsyncKeyState(VK_SPACE))
			{
				if (driver.read<float>(Movement + oGravityMultiplier) != gravity_distancee / 2) {
					driver.write<float>(Movement + oGravityMultiplier, gravity_distancee / 2);
				}
			}
		}
		if (fakeworkbench == true) {
			if (driver.read<int>(Local_Player + playerflags) != (flag |= 4194304)) {
				driver.write<int>(Local_Player + playerflags, (flag |= 4194304));
			}
		}
		if (WalkOnWater == true) {
			if (GetAsyncKeyState(WalkOnWaterr))
			{
				if (driver.read<float>(Movement + groundAngle) != 0.f) {
					driver.write<float>(Movement + groundAngle, 0.f);//groundAngle
					driver.write<float>(Movement + groundAngleNew, 0.f);//groundAngleNew
					driver.write<float>(Movement + oGravityMultiplier, 0.f);//gravityMultiplier
				}
			}
			else
			{
				if (driver.read<float>(Movement + oGravityMultiplier) != 2.5f) {
					driver.write<float>(Movement + oGravityMultiplier, 2.5f);//gravityMultiplier
				}
			}
		}
		if (flyhack == true) {
			if (GetAsyncKeyState(FlyHackButon))
			{

				driver.write<float>(Movement + groundAngle, flyhackspeed);//groundAngle
				driver.write<float>(Movement + groundAngleNew, flyhackspeed);//groundAngleNew
				driver.write<float>(Movement + oGravityMultiplier, flyhackspeed);//gravityMultiplier

			}
			else
			{
				if (driver.read<float>(Movement + oGravityMultiplier) != 2.5f) {
					driver.write<float>(Movement + oGravityMultiplier, 2.5f);//gravityMultiplier
				}
			}
		}
		if (climb == TRUE)
		{
			if (GetAsyncKeyState(climbbutton))
			{

				driver.write<float>(Movement + capsuleHeight, -100);
				driver.write<float>(Movement + capsuleCenter, -100);
			}
			else
			{
				if (driver.read<float>(Movement + capsuleHeight) != 1.79f) {
					driver.write<float>(Movement + capsuleHeight, 1.79f);
					driver.write<float>(Movement + capsuleCenter, 0.899f);
				}
			}
		}
		if (fov == TRUE) {
			uint64_t fov = driver.read<UINT64>(g_assembly + oFovConVarGraphics); // "Signature": "ConVar_Graphics_c"
			uint64_t instance = driver.read<UINT64>(fov + 0xB8);
			if (driver.read<float>(instance + 0X18) != FOVV) {
				driver.write<float>(instance + 0X18, FOVV); // public static float admintime;
			}
			alwaysdaytog = false;
		}
		if (!fov == TRUE)
		{
			if (!fovtamiri)
			{
				uint64_t fov = driver.read<UINT64>(g_assembly + oFovConVarGraphics); // "Signature": "ConVar_Graphics_c"
				uint64_t instance = driver.read<UINT64>(fov + 0xB8);
				if (driver.read<float>(instance + 0X18) != 90) {
					driver.write<float>(instance + 0X18, 90); // public static float admintime;
				}
				alwaysdaytog = true;
			}
		}
		if (jumpshot == TRUE) {
			auto mov_flag = driver.read<uintptr_t>(Movement + oModelState);
			driver.write<uintptr_t>(mov_flag, oFlagOnGround);
			driver.write<float>(Movement + groundAngle, 1.f);
			driver.write<float>(Movement + groundAngleNew, 1.f);
		}
		if (zoom == TRUE)
		{
			if (GetAsyncKeyState(VK_RBUTTON))
			{
				uint64_t fov = driver.read<UINT64>(g_assembly + oFovConVarGraphics); // "Signature": "ConVar_Graphics_c" // DONE
				uint64_t instance = driver.read<UINT64>(fov + 0xB8);
				if (driver.read<float>(instance + 0X18) != zoomyer) {
					driver.write<float>(instance + 0X18, zoomyer); // public static float admintime;
				}
			}
		}
		if (fastswim == TRUE)
		{
			if (driver.read<float>(Local_Player + oclothingWaterSpeedBonus) != 0.2f) {
				driver.write<float>(Local_Player + oclothingWaterSpeedBonus, 0.2f); // public static float admintime;
			}
			fastswimm == false;
		}
		if (!fastswim == TRUE)
		{
			if (!fastswimm)
			{
				if (driver.read<float>(Local_Player + oclothingWaterSpeedBonus) != 0.1) {
					driver.write<float>(Local_Player + oclothingWaterSpeedBonus, 0.1); // public static float admintime;
				}
				fastswimm == true;
			}
		}
		if (SPEEDhack == TRUE)
		{
			if (GetAsyncKeyState(speedbutton))
			{
				driver.write<float>(Local_Player + clothingMoveSpeedReduction, 0.f - speedBonus); // public static float admintime;
			}
			if (!GetAsyncKeyState(speedbutton))
			{
				driver.write<float>(Local_Player + clothingMoveSpeedReduction, 0.f - 0.f); // public static float admintime;
			}
		}






		if (longneck)
		{
			auto eyes = driver.read<uintptr_t>(Local_Player + oPlayerEyes);
			driver.write<Vector3>(eyes + 0x38, Vector3(NeckWeigth, 2.0f, NeckWidgth)); //private Vector3 viewOffset; // 0x38
		}
		if (timer)
		{
			auto time = driver.read<uintptr_t>(g_unityplayer + 0x17C1CD0 + 7 * 8);
			if (time) {
				if (GetAsyncKeyState(hangingg))
				{
					driver.write<float>(time + 0xFC, timervalue);
				}
				else {
					driver.write<float>(time + 0xFC, 1.f);
				}
			}
		}

		//auto ItemName = get_item_name(current_item);
		//std::string wsTmp(ItemName.begin(), ItemName.end());
		//std::string text = wsTmp;
		//std::cout << text << std::endl;

		bool ismeele = is_meele(current_item);
		if (ismeele) {
			if (supermeele)
			{
				if (driver.read<float>(base_projectile + omaxDistance) != 3.0f) {
					driver.write<float>(base_projectile + omaxDistance, 3.0f);
				}
				if (driver.read<float>(base_projectile + oAttackRadius) != 1.0f) {
					driver.write<float>(base_projectile + oAttackRadius, 1.0f);
				}

				if (driver.read<bool>(base_projectile + oBlockSprintOnAttack) != false) {
					driver.write<bool>(base_projectile + oBlockSprintOnAttack, false);
					driver.write<bool>(base_projectile + oonlyThrowAsProjectile, false);
					driver.write<bool>(base_projectile + othrowReady, true);
				}
			}
		}
		bool isWeapon = is_weapon(current_item);
		if (isWeapon) {
			if (norecoil) {
				if (newRecoilOverride) {
					if (driver.read<int>(newRecoilOverride + oRecoilYawMin) != 0) {
						driver.write<int>(newRecoilOverride + oRecoilYawMin, 0);
						driver.write<int>(newRecoilOverride + oRecoilYawMax, 0);
						driver.write<int>(newRecoilOverride + oRecoilPitchMin, 0);
						driver.write<int>(newRecoilOverride + oRecoilPitchMax, 0);
					}
				}
				if (!newRecoilOverride) {
					if (driver.read<int>(recoil_prop + oRecoilYawMin) != 0) {
						driver.write<int>(recoil_prop + oRecoilYawMin, 0);
						driver.write<int>(recoil_prop + oRecoilYawMax, 0);
						driver.write<int>(recoil_prop + oRecoilPitchMin, 0);
						driver.write<int>(recoil_prop + oRecoilPitchMax, 0);
					}
				}
			}
			if (noshotgunspread)
			{
				auto List = driver.read<uintptr_t>(base_projectile + 0x370); // private List<Projectile> createdProjectiles;
				int size = driver.read<int>(List + 0x18);
				auto listt = driver.read<uintptr_t>(List + 0x10);
				for (int i = 0; i < size; ++i)
				{
					auto Projectile = driver.read<uintptr_t>(listt + 0x20 + (i * 0x8));
					auto ProjectileMod = driver.read<uintptr_t>(Projectile + 0xE8);

					driver.write<float>(ProjectileMod + 0x30, 0.f); // public float initialDistance;
					driver.write<float>(ProjectileMod + 0x38, 0.f); // public float stickProbability;
				}
			}
			if (fat_bullet_checkbox)
			{

				auto List = driver.read<uintptr_t>(base_projectile + 0x370); //private List<Projectile> createdProjectiles;
				int size = driver.read<uintptr_t>(List + 0x18);
				List = driver.read<uintptr_t>(List + 0x10);
				for (int i = 0; i < size; ++i)
				{
					auto Item = driver.read<uintptr_t>(List + 0x20 + (i * 0x8));
					driver.write<float>(Item + 0x2C, 0.7f);
				}
			}
			if (nospread)
			{

				if (newRecoilOverride)
				{
					if (driver.read<int>(newRecoilOverride + oAimconeCurveScale) != -1) {
						driver.write<int>(newRecoilOverride + oAimconeCurveScale, -1);
						driver.write<int>(newRecoilOverride + oStancePenalty, -1);
						driver.write<int>(newRecoilOverride + oAimCone, -1);
						driver.write<int>(newRecoilOverride + oHipAimCone, -1);
						driver.write<int>(newRecoilOverride + oAimconePenaltyPerShot, -1);
					}
				}
				if (!newRecoilOverride)
				{
					if (driver.read<int>(recoil_prop + oAimconeCurveScale) != -1) {
						driver.write<int>(recoil_prop + oAimconeCurveScale, -1);
						driver.write<int>(recoil_prop + oStancePenalty, -1);
						driver.write<int>(recoil_prop + oAimCone, -1);
						driver.write<int>(recoil_prop + oHipAimCone, -1);
						driver.write<int>(recoil_prop + oAimconePenaltyPerShot, -1);
					}
				}
			}
		
			if (full_automatic_checkbox)
			{
				if (driver.read<bool>(base_projectile + oAutomatic) != full_automatic_checkbox) {
					driver.write<bool>(base_projectile + oAutomatic, full_automatic_checkbox);
				}
			}
			if (super_eoka_checkbox)
			{
				if (eokatamiri == false)
				{
					if (driver.read<float>(base_projectile + 0x378) != 100.f) {
						driver.write<float>(base_projectile + 0x378, 100.f); // successFraction
					}
					eokatamiri = true;
				}
				if (driver.read<bool>(base_projectile + 0x388) != true) {
					driver.write<bool>(base_projectile + 0x388, true); // didSparkThisFrame
				}
			}
			else
			{
				eokatamiri = false;
			}
			if (instantCompound == true)
			{
				if (driver.read<float>(base_projectile + 0x390) != 0) {
					driver.write<float>(base_projectile + 0x390, 0);//stringHoldDurationMax
				}
				if (driver.read<float>(base_projectile + 0x394) != 1000000) {
					driver.write<float>(base_projectile + 0x394, 1000000);//stringBonusDamage
					driver.write<float>(base_projectile + 0x3A0, 1000000);//movementPenaltyRampUpTime
				}
			}
			if (instabow == true)
			{
				if (base_projectile) {
					driver.write<bool>(base_projectile + 0x360, true); // private bool triggerReady; // 0x360
					driver.write<float>(base_projectile + 0x364, 9.f);
				}
			}
		}
		if (fakelag == true)
		{
			driver.write<float>(Local_Player + 0x658, 0.8f); // public float clientTickInterval; // 0x658
			driver.write<float>(Local_Player + 0x658, 0.10f); // public float clientTickInterval; // 0x658
		}
		if (spinbot == true) {
			auto aPlayerInput = driver.read<uintptr_t>(Local_Player + oPlayerInput);
			driver.write<Vector4>(aPlayerInput + bodyRotation, Vector4(16.0f, (0), 0, (my_rand(), (0), 0)));
			driver.write<Vector4>(aPlayerInput + bodyRotation, Vector4(-16.0f, (0), 0, (my_rand(), (0), 0)));
			auto aPlayerInput1 = driver.read<uintptr_t>(Local_Player + oPlayerInput);
			driver.write<Vector4>(aPlayerInput1 + headRotation, Vector4(-5.0f, (0), 0, (my_rand(), (0), 0)));
			driver.write<Vector4>(aPlayerInput1 + headRotation, Vector4(22.0f, (0), 0, (my_rand(), (0), 0)));
			driver.write<Vector4>(aPlayerInput + bodyRotation, Vector4(-100.0f, (0), 0, (my_rand(), (0), 0)));
			driver.write<Vector4>(aPlayerInput + bodyRotation, Vector4(60.0f, (0), 0, (my_rand(), (0), 0)));
			driver.write<Vector4>(aPlayerInput + headRotation, Vector4(-100.0f, (0), 0, (my_rand(), (0), 0)));
			driver.write<Vector4>(aPlayerInput + headRotation, Vector4(30.0f, (0), 0, (my_rand(), (0), 0)));
		}
	}
}

//struct zort {
//	uintptr_t entity;
//	BasePlayer* bp;
//};
//
//std::vector<zort> players{};
//
//void entity_loop() {
//	while (true) {
//		uintptr_t buffer_list = driver.read_chain(g_assembly, { 0x32708C0, 0xB8, 0x10, 0x10, 0x28 });
//		if (!buffer_list)
//			buffer_list = driver.read_chain(g_assembly, { 0x32708C0, 0xB8, 0x40, 0x10, 0x28 });
//		auto objectList = driver.read<uintptr_t>(buffer_list + 0x18);
//		auto objectListSize = driver.read<uint32_t>(buffer_list + 0x10);
//		if (!objectListSize)
//			return;
//
//		for (int i = 0; i < objectListSize; i++) {
//			auto curObject = driver.read<uintptr_t>(objectList + (0x20 + (i * 8)));
//			auto baseObject = driver.read<uintptr_t>(curObject + 0x10);
//			auto object = driver.read<uintptr_t>(baseObject + 0x30);
//			auto tag = driver.read<WORD>(object + 0x54);
//			auto buff = readchar(driver.read<uintptr_t>(object + 0x60));
//
//
//
//			uintptr_t Entity = driver.read<uintptr_t>(objectList + 0x20 + (i * 0x8)); if (Entity <= 100000) continue;
//			uintptr_t Object = driver.read<uintptr_t>(Entity + 0x10); if (Object <= 100000) continue;
//			uintptr_t ObjectClass = driver.read<uintptr_t>(Object + 0x30); if (ObjectClass <= 100000) continue;
//			BasePlayer* Player = (BasePlayer*)driver.read<DWORD64>(Object + 0x28); //public ulong playerID;
//
//			zort x;
//			x.bp = Player;
//			players.push_back(x);
//		}
//	}
//}
//
//void draw() {
//	while (true) {
//		for (int i = 0; i < players.size(); i++) {
//			BasePlayer* player = players[i].bp;
//			uintptr_t entity = players[i].entity;
//
//			uintptr_t player_model = driver.read<uintptr_t>(entity + 0x4D0); // public PlayerModel playerModel;
//			auto player_skin_component = NULL;
//
//			int SkinType = driver.read<int>(player_model + 0x1CC); // public int skinType; // 0x1CC
//			if (SkinType == 1) player_skin_component = driver.read<uintptr_t>(player_model + 0x1A0); // public SkinSetCollection MaleSkin; // 0x1A0
//			else player_skin_component = driver.read<uintptr_t>(player_model + 0x1A8); // public SkinSetCollection FemaleSkin; // 0x1A8
//
//			//auto player_skin_component = driver.read<uintptr_t>(player_model + 0x1A0); // public SkinSetCollection MaleSkin; // 0x1A0
//			//if (player_skin_component == NULL)
//			//{
//			//	player_skin_component = driver.read<uintptr_t>(player_model + 0x1A8); // public SkinSetCollection FemaleSkin; // 0x1A8
//			//}
//			//printf("%p\n", player_skin_component);
//
//			auto skins = driver.read<uintptr_t>(player_skin_component + 0x18);
//			auto skins_sz = driver.read<int32_t>(skins + 0x18);
//
//			if (chams)
//			{
//				for (int i = NULL; i <= (int)skins_sz; i++)
//				{
//					auto current_skin = driver.read<uintptr_t>(skins + 0x20 + (i * 0x8));
//
//					driver.write<uintptr_t>(current_skin + 0x68, NULL);
//					driver.write<uintptr_t>(current_skin + 0x70, NULL);
//					driver.write<uintptr_t>(current_skin + 0x78, NULL);
//				}
//			}
//		}
//	}
//}




bool homee = true;

void cheat()
{
	bool LP_isValid = false;


	for (int i = 0; i < objectListSize; i++) {
		auto curObject = driver.read<uintptr_t>(objectList + (0x20 + (i * 8)));
		auto baseObject = driver.read<uintptr_t>(curObject + 0x10);
		auto object = driver.read<uintptr_t>(baseObject + 0x30);
		auto tag = driver.read<WORD>(object + 0x54);
		auto buff = readchar(driver.read<uintptr_t>(object + 0x60));
		uintptr_t Entity = driver.read<uintptr_t>(objectList + 0x20 + (i * 0x8)); if (Entity <= 100000) continue;
		uintptr_t Object = driver.read<uintptr_t>(Entity + 0x10); if (Object <= 100000) continue;
		uintptr_t ObjectClass = driver.read<uintptr_t>(Object + 0x30); if (ObjectClass <= 100000) continue;
		BasePlayer* Player = (BasePlayer*)driver.read<DWORD64>(Object + 0x28); //public ulong playerID;

		if (buff.find(skCrypt("Local")) != std::string::npos) {
			BasePlayer* Player = driver.read<BasePlayer*>(baseObject + 0x28);
			if (Player != LocalPlayer.BasePlayer) {}
			LocalPlayer.BasePlayer = Player;
			LP_isValid = true;	
		}
		else if (buff.find(skCrypt("player.prefab")) != std::string::npos)
		{
			if (chams)
			{

				if (!chamstamiri)
				{
					//auto SKY_C = driver.read<uintptr_t>(g_assembly + 52750248);
					//auto SKYINSTANCE = driver.read<uintptr_t>(SKY_C + 0xB8);
					//auto SKYINSTANCELIST = driver.read<uintptr_t>(SKYINSTANCE + 0x0);
					//auto INSTANCES = driver.read<uintptr_t>(SKYINSTANCELIST + 0x10);
					//auto Dome = driver.read<uintptr_t>(INSTANCES + 0x20);

					uintptr_t player_model = driver.read<uintptr_t>(Entity + 0x4D0); // public PlayerModel playerModel;

					auto player_skin_component = driver.read<uintptr_t>(player_model + 0x1A0); // public SkinSetCollection MaleSkin; // 0x1A0

					//auto player_skin_component = driver.read<uintptr_t>(player_model + 0x1A0); // public SkinSetCollection MaleSkin; // 0x1A0
					//if (player_skin_component == NULL)
					//{
					//	player_skin_component = driver.read<uintptr_t>(player_model + 0x1A8); // public SkinSetCollection FemaleSkin; // 0x1A8
					//}
					//printf("%p\n", player_skin_component);

					auto skins = driver.read<uintptr_t>(player_skin_component + 0x18);
					auto skins_sz = driver.read<int32_t>(skins + 0x18);


					//auto components = driver.read<uintptr_t>(Dome + 0xA8);
					//if (!components)
					//	continue;

					//auto scattering = driver.read<uintptr_t>(components + 0x150); // AtmosphereMaterial
					//if (!scattering)
					//	continue;

					//auto material = driver.read<uintptr_t>(scattering + 0x78);
					//if (!material)
					//	continue;

					for (int i = NULL; i <= (int)skins_sz; i++)
					{
						auto current_skin = driver.read<uintptr_t>(skins + 0x20 + (i * 0x8));

						driver.write<uintptr_t>(current_skin + 0x68, NULL);
						driver.write<uintptr_t>(current_skin + 0x70, NULL);
						driver.write<uintptr_t>(current_skin + 0x78, NULL);
					}

					auto player_skin_component2 = driver.read<uintptr_t>(player_model + 0x1A8); // public SkinSetCollection MaleSkin; // 0x1A0
					auto skins2 = driver.read<uintptr_t>(player_skin_component2 + 0x18);
					auto skins_sz2 = driver.read<int32_t>(skins2 + 0x18);
					for (int i = NULL; i <= (int)skins_sz2; i++)
					{
						auto current_skin2 = driver.read<uintptr_t>(skins2 + 0x20 + (i * 0x8));

						driver.write<uintptr_t>(current_skin2 + 0x68, NULL);
						driver.write<uintptr_t>(current_skin2 + 0x70, NULL);
						driver.write<uintptr_t>(current_skin2 + 0x78, NULL);
					}


					chamstamiri = true;
				}
			}
			else
			{
				chamstamiri = false;
			}

			if (playerinfoo)
			{
				if (AimFov(Player) < 30)
				{
					playerinfo(ObjectClass, Player);
				}
			}
			ESP_Player(Player);
			aimbott(Player);
		}
		else if (buff.find(skCrypt("tunneldweller.prefab")) != std::string::npos)
		{
			if (tunneldweller)
			{
				ESP_Scientist(Player);
				ESP_Resource(ObjectClass, true, 300, L"Tunel Dweller", &Col.white);
			}
		}
		else if (buff.find(skCrypt("scientistnpc")) != std::string::npos)
		{
			if (scientistnpc)
			{
				ESP_Scientist(Player);
				ESP_Resource(ObjectClass, true, 300, L"Scientist", &Col.white);
			}
		}
		else if (buff.find(skCrypt("item_drop_backpack")) != std::string::npos)
		{
			if (backpack)
			{
				ESP_Resource(ObjectClass, true, 300, L"Backpack", &Col.white);
			}
		}
		else if (buff.find(skCrypt("player_corpse")) != std::string::npos)
		{
			if (playercorpse)
			{
				ESP_Resource(ObjectClass, true, 300, L"Corpse", &Col.white);
			}
		}
		else if (buff.find(skCrypt("stone-ore.prefab")) != std::string::npos)
		{
			if (stone)
			{
				ESP_Resource(ObjectClass, true, 300, L"Stone Ore", &Col.white);
			}
		}
		else if (buff.find(skCrypt("sulfur-ore.prefab")) != std::string::npos)
		{
			if (sulfur)
			{
				ESP_Resource(ObjectClass, true, 300, L"Sulfur Ore", &Col.darkyellow_);
			}
		}
		else if (buff.find(skCrypt("metal-ore.prefab")) != std::string::npos)
		{
			if (metal)
			{
				ESP_Resource(ObjectClass, true, 300, L"Metal Ore", &Col.gray_);
			}
		}
		else if (buff.find(skCrypt("stone-collectable.prefab")) != std::string::npos)
		{
			if (stone2)
			{
				ESP_Resource(ObjectClass, true, 300, L"Stone", &Col.white);
			}
		}
		else if (buff.find(skCrypt("sulfur-collectable.prefab")) != std::string::npos)
		{
			if (sulfur2)
			{
				ESP_Resource(ObjectClass, true, 300, L"Sulfur", &Col.darkyellow_);
			}
		}
		else if (buff.find(skCrypt("metal-collectable.prefab")) != std::string::npos)
		{
			if (metal2)
			{
				ESP_Resource(ObjectClass, true, 300, L"Metal", &Col.gray_);
			}
		}
		else if (buff.find(skCrypt("hemp-collectable.prefab")) != std::string::npos)
		{
			if (hemp)
			{
				ESP_Resource(ObjectClass, true, 300, L"Hemp", &Col.greens);
			}
		}
		else if (buff.find(skCrypt("mushroom-cluster-5.prefab")) != std::string::npos)
		{
			if (mushroom)
			{
				ESP_Resource(ObjectClass, true, 300, L"Mushroom", &Col.orange_);
			}
		}
		else if (buff.find(skCrypt("mushroom-cluster-6.prefab")) != std::string::npos)
		{
			if (mushroom)
			{
				ESP_Resource(ObjectClass, true, 300, L"Mushroom", &Col.orange_);
			}
		}
		else if (buff.find(skCrypt("supply_drop.prefab")) != std::string::npos)
		{
			if (airdrop)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Airdrop", &Col.purple_);
			}
		}
		else if (buff.find(skCrypt("minicopter.entity.prefab")) != std::string::npos)
		{
			if (minicopter)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Minicopter", &Col.silverwhite_);
			}
		}
		else if (buff.find(skCrypt("car_")) != std::string::npos)
		{
			if (cars)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Car", &Col.silverwhite_);
			}
		}
		else if (buff.find(skCrypt("scraptransporthelicopter")) != std::string::npos)
		{
			if (scrapheli)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Scrap Heli", &Col.silverwhite_);
			}
		}
		else if (buff.find(skCrypt("patrolhelicopter")) != std::string::npos)
		{
			if (patrolheli)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Patrol Heli", &Col.silverwhite_);
			}
			if (psilent)
			{
				pLocalPlayerHead = LocalPlayer.BasePlayer->Position2();
				pTargetBonePos = Player->Position3();
				Vector3 pTargetAngles = CalcAngle(pLocalPlayerHead, pTargetBonePos);
				Vector2 pAngles; pAngles.x = pTargetAngles.x, pAngles.y = pTargetAngles.y;

				if (Predictionn) {
					pTargetBonePos = Prediction(pLocalPlayerHead, Player, BoneList(head), pTargetBonePos);
				}

				if (AimFov(Player) < aimfovv)
				{
					if (psilent && GetAsyncKeyState(VK_LBUTTON)) {
						auto eyes = driver.read<uintptr_t>((uintptr_t)LocalPlayer.BasePlayer + oPlayerEyes);
						Vector4 pQuatAngles = ToQuat({ pAngles.x, pAngles.y, 0.0f });
						driver.write<Vector4>(eyes + 0x44, pQuatAngles);
					}
				}
			}
		}
		else if (buff.find(skCrypt("rowboat.prefab")) != std::string::npos)
		{
			if (boat)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Boat", &Col.silverwhite_);
			}
		}
		else if (buff.find(skCrypt("rhib.prefab")) != std::string::npos)
		{
			if (rhib)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Rhib", &Col.silverwhite_);
			}
		}
		else if (buff.find(skCrypt("testridablehorse.prefab")) != std::string::npos)
		{
			if (horse)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Horse", &Col.neger);
			}
		}
		else if (buff.find(skCrypt("small_stash_deployed.prefab")) != std::string::npos)
		{
			if (stash)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Stash", &Col.purplered_);
			}
		}
		else if (buff.find(skCrypt("crate_normal.prefab")) != std::string::npos)
		{
			if (military)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Military Crate", &Col.SilverWhite);
			}
		}
		else if (buff.find(skCrypt("crate_elite.prefab")) != std::string::npos)
		{
			if (elite)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Elite Crate", &Col.SilverWhite);
			}
		}
		else if (buff.find(skCrypt("crate_normal_2.prefab")) != std::string::npos)
		{
			if (loot)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Loot Crate", &Col.SilverWhite);
			}
		}
		else if (buff.find(skCrypt("crate_normal_2_food.prefab")) != std::string::npos)
		{
			if (food)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Food Crate", &Col.SilverWhite);
			}
		}
		else if (buff.find(skCrypt("crate_normal_2_medical.prefab")) != std::string::npos)
		{
			if (medical)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Medical Crate", &Col.SilverWhite);
			}
		}
		else if (buff.find(skCrypt("crate_tools.prefab")) != std::string::npos)
		{
			if (toolbox)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Tool Crate", &Col.SilverWhite);
			}
		}
		else if (buff.find(skCrypt("wolf.prefab")) != std::string::npos)
		{
			if (wolf)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Wolf", &Col.neger);
			}
		}
		else if (buff.find(skCrypt("bear.prefab")) != std::string::npos)
		{
			if (bear)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Bear", &Col.neger);
			}
		}
		else if (buff.find(skCrypt("stag.prefab")) != std::string::npos)
		{
			if (stag)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Stag", &Col.neger);
			}
		}
		else if (buff.find(skCrypt("chicken.prefab")) != std::string::npos)
		{
			if (chicken)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Chicken", &Col.neger);
			}
		}
		else if (buff.find(skCrypt("boar.prefab")) != std::string::npos)
		{
			if (boar)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Boar", &Col.neger);
			}
		}
		else if (buff.find(skCrypt("rifle.ak")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"AK-47", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("rifle.ak.ice")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"AK-47", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("pistol.revolve")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Revolver", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("pistol.python")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Python", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("bow.hunting")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Hunting Bow", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("bow.compound")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Compound Bow", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("shotgun.double")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Double Barrel", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("pistol.nailgun")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Nailgun", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("smg.thompson")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Thompson", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("pistol.semiaut")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Pistol Semiauto", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("rifle.semiauto")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Rifle Semiauto", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("shotgun.waterp")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Waterpipe Shotgun", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("shotgun.spas12")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Spas12 Shotgun", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("shotgun.spas12")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Spas12 Shotgun", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("rifle.m39")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"M39", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("pistol.m92")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"M92 Pistol", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("smg.mp5")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"MP5A4", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("smg.2")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"SMG", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("shotgun.pump")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Pump Shotgun", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("lmg.m249")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"M249", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("rifle.l96")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"L96 Rifle", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("rifle.bolt")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Bolt Rifle", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("hmlmg")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"HMLMG", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("pistol.eoka")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Eoka", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("multiplegrenad")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Granade Launcher", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("rocket.launche")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Rocket Launcher", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("rifle.lr300")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"LR300 Rifle", &Col.pinks_);
			}
		}
		else if (buff.find(skCrypt("crossbow")) != std::string::npos)
		{
			if (weapons)
			{
				ESP_Resource(ObjectClass, true, 50000, L"Crossbow", &Col.pinks_);
			}
		}
	}
}


int g_menuKeyBind = VK_INSERT;
void stylemenu()
{
	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.10f, 0.10f, 0.10f, 0.95f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.03f, 0.03f, 0.03f, 0.95f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.19f, 0.19f, 0.19f, 1.00f);
	colors[ImGuiCol_Border] = ImVec4(0.19f, 0.19f, 0.19f, 1.00f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.95f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.95f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.20f, 0.22f, 0.23f, 0.95f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.34f, 0.34f, 0.34f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40f, 0.40f, 0.40f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.34f, 0.34f, 0.34f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.19f, 0.19f, 0.19f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
	colors[ImGuiCol_Header] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
	colors[ImGuiCol_Separator] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.44f, 0.44f, 0.44f, 1.00f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.28f, 0.28f, 0.28f, 1.00f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.44f, 0.44f, 0.44f, 1.00f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
	colors[ImGuiCol_Tab] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
	colors[ImGuiCol_NavHighlight] = ImVec4(0.10f, 0.10f, 0.10f, 0.80f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
}

void stylemenu2()
{
	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowRounding = 5.0f;
	style.WindowBorderSize = 2.0f;

	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.10f, 0.10f, 0.10f, 0.85f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.17f, 0.17f, 0.17f, 0.85f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.19f, 0.19f, 0.19f, 0.92f);
	colors[ImGuiCol_Border] = ImVec4(0.19f, 0.19f, 0.19f, 0.29f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.24f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40f, 0.40f, 0.40f, 0.54f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
	colors[ImGuiCol_Button] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
	colors[ImGuiCol_Header] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 0.00f, 0.00f, 0.36f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.20f, 0.22f, 0.23f, 0.33f);
	colors[ImGuiCol_Separator] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
	colors[ImGuiCol_Tab] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.20f, 0.20f, 0.36f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_TableHeaderBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
	colors[ImGuiCol_TableBorderStrong] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
	colors[ImGuiCol_TableBorderLight] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
	colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
	colors[ImGuiCol_NavHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.35f);
}

D3DCOLOR FLOAT4TOD3DCOLOR(float Col[])
{
	ImU32 col32_no_alpha = ImGui::ColorConvertFloat4ToU32(ImVec4(Col[0], Col[1], Col[2], Col[3]));
	float a = (col32_no_alpha >> 24) & 255;
	float r = (col32_no_alpha >> 16) & 255;
	float g = (col32_no_alpha >> 8) & 255;
	float b = col32_no_alpha & 255;
	return D3DCOLOR_ARGB((int)a, (int)r, (int)g, (int)b);
}

namespace Screen
{
	static int Width = GetSystemMetrics(SM_CXSCREEN);
	static int Height = GetSystemMetrics(SM_CYSCREEN);
}

namespace Colors
{
	float CrosshairColors[] = { 255.f, 55.f, 55.f, 255.f };
}

ImVec2 GetWindowSize() {
	return { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };
}
namespace crosshair
{
	namespace sizes
	{

		namespace cross
		{
			float length = 4.0f;
			float gap = 1.0f;
		}


	}
}
void Crosshair()
{
	auto RGB = ImGui::GetColorU32({ 255, 255, 255, 255 });
	ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(GetWindowSize().x / 2 + crosshair::sizes::cross::gap + 1, GetWindowSize().y / 2 - 1), ImVec2(GetWindowSize().x / 2 + crosshair::sizes::cross::length + crosshair::sizes::cross::gap + 1, GetWindowSize().y / 2 + 1), RGB);
	ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(GetWindowSize().x / 2 - crosshair::sizes::cross::gap - 1, GetWindowSize().y / 2 + 1), ImVec2(GetWindowSize().x / 2 - crosshair::sizes::cross::length - crosshair::sizes::cross::gap - 1, GetWindowSize().y / 2 - 1), RGB);
	ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(GetWindowSize().x / 2 - 1, GetWindowSize().y / 2 + crosshair::sizes::cross::gap + 1), ImVec2(GetWindowSize().x / 2 + 1, GetWindowSize().y / 2 + crosshair::sizes::cross::length + crosshair::sizes::cross::gap + 1), RGB);
	ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(GetWindowSize().x / 2 + 1, GetWindowSize().y / 2 - crosshair::sizes::cross::gap - 1), ImVec2(GetWindowSize().x / 2 - 1, GetWindowSize().y / 2 - crosshair::sizes::cross::length - crosshair::sizes::cross::gap - 1), RGB);
}

void draw_menu()
{

	stylemenu2();



	ImGui::SetNextWindowSize(ImVec2(xekran, yekran));

	ImGui::Begin(skCrypt("ALIENCHEATS"), NULL ,ImGuiWindowFlags_NoResize);
	ImVec2 curPos = ImGui::GetCursorPos();
	ImVec2 curWindowPos = ImGui::GetWindowPos();
	curPos.x += curWindowPos.x;
	curPos.y += curWindowPos.y;
	ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(curPos.x, 0), ImVec2(curPos.x + xekran, curPos.y - 4), ImColor(255, 0, 0)); // kýrmýzý bar
	//static float flRainbow;
	//float flSpeed = 0.0025f;
	//flRainbow += flSpeed;
	//if (flRainbow > 1.f) flRainbow = 0.f;
	//for (int i = 0; i < xekran; i++)
	//{
	//	float hue = (1.f / (float)xekran) * i;
	//	hue -= flRainbow;
	//	if (hue < 0.f) hue += 1.f;

	//	ImColor cRainbow = ImColor::HSV(hue, 1.f, 1.f);
	//	ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(curPos.x + i, 0), ImVec2(curPos.x + xekran, curPos.y - 7), cRainbow);
	//}
	ImGui::SetCursorPos(ImVec2(55, 22));
	ImGui::BeginChild(skCrypt("Sayfa 0"), ImVec2(470.0f, 30.0f));
	ImGui::SetCursorPos({ 10.f,5.f });
	if (ImGui::Button(skCrypt("Aimbot"), { 70.f,19.f }))
	{
		MenuSayfasi = 6;
	}
	ImGui::SetCursorPos({ 85.f,5.f });
	if (ImGui::Button(skCrypt("Esp"), { 70.f,19.f }))
	{
		MenuSayfasi = 4;
	}
	ImGui::SetCursorPos({ 160.f,5.f });
	if (ImGui::Button(skCrypt("Misc Esp"), { 70.f,19.f }))
	{
		MenuSayfasi = 5;
	}
	ImGui::SetCursorPos({ 235.f,5.f });
	if (ImGui::Button(skCrypt("Main"), { 70.f,19.f }))
	{
		MenuSayfasi = 1;
	}
	ImGui::SetCursorPos({ 310.f,5.f });
	if (ImGui::Button(skCrypt("Misc"), { 70.f,19.f }))
	{
		MenuSayfasi = 2;
	}
	ImGui::SetCursorPos({ 385.f,5.f });
	if (ImGui::Button(skCrypt("Settings"), { 70.f,19.f }))
	{
		MenuSayfasi = 3;
	}
	ImGui::EndChild();
	if (MenuSayfasi == 6)
	{
		if (ImGui::CollapsingHeader(skCrypt("Aim")))
		{
			ImGui::Checkbox(skCrypt("Aim Bot"), &aimbot); ImGui::SameLine(); HotkeyButton(aimkey, ChangeKey, keystatus); ImGui::SameLine(); ImGui::Text("Aimbot Key");
			ImGui::Checkbox(skCrypt("Silent"), &silent);
			ImGui::Checkbox(skCrypt("PatrolHeli Silent"), &psilent);
			ImGui::Checkbox(skCrypt("Prediction"), &Predictionn);
			ImGui::Checkbox(skCrypt("Draw Fov"), &drawaimbot); 
			ImGui::SliderFloat(skCrypt("Fov"), &aimfovv, 1, 360, "% .2f");
			ImGui::SliderFloat(skCrypt("Smooth"), &aimsmooth, 1, 10, "% .2f");
			ImGui::Checkbox(skCrypt("Sleeper Ignore"), &sleeperignore);
			ImGui::Checkbox(skCrypt("Team Ignore"), &teamignoree);
			ImGui::Checkbox(skCrypt("Wounded Ignore"), &woundedignore);
		}
	}
	if (MenuSayfasi == 4)
	{
		if (ImGui::CollapsingHeader(skCrypt("Player ESP")))
		{
			ImGui::Checkbox(skCrypt("Corner Box"), &box); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Snapline"), &snapline); ImGui::SameLine(); ImGui::PushItemWidth(65); ImGui::Combo((""), &selectedsnapline, snaplinee, IM_ARRAYSIZE(snaplinee)); ImGui::SameLine(300);
			ImGui::Checkbox(skCrypt("Team Ignore"), &teamignore);
			ImGui::Checkbox(skCrypt("Name Tag"), &name); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Health Bar"), &healthbar); ImGui::SameLine(300);
			ImGui::Checkbox(skCrypt("Chams"), &chams);
			ImGui::Checkbox(skCrypt("Skeleton"), &skeleton); ImGui::SameLine(150);

			ImGui::Checkbox(skCrypt("Corpse"), &playercorpse);
			ImGui::Checkbox(skCrypt("Backpack"), &backpack); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Sleep Ignore"), &sleeper);
			ImGui::Checkbox(skCrypt("Player info"), &playerinfoo); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Paint Inside"), &paintinside);
		}
		if (ImGui::CollapsingHeader(skCrypt("Animal ESP")))
		{
			ImGui::Checkbox(skCrypt("Wolf"), &wolf); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("bear"), &bear);
			ImGui::Checkbox(skCrypt("stag"), &stag); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("chicken"), &chicken);
			ImGui::Checkbox(skCrypt("boar"), &boar); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Horse"), &horse);
		}
		if (ImGui::CollapsingHeader(skCrypt("Weapon & Distance ESP")))
		{
			ImGui::Checkbox(skCrypt("Weapons"), &weapons); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Show Distance"), &showdistancee);
		}
		if (ImGui::CollapsingHeader(skCrypt("Scientist ESP")))
		{
			ImGui::Checkbox(skCrypt("Tunnel Dweller"), &tunneldweller); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Scientist NPC"), &scientistnpc);
			
		}
	}
	if (MenuSayfasi == 5)
	{
		if (ImGui::CollapsingHeader(skCrypt("Resource ESP")))
		{
			ImGui::Checkbox(skCrypt("Stone Ore"), &stone); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Stone"), &stone2);
			ImGui::Checkbox(skCrypt("Sulfur Ore"), &sulfur); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Sulfur"), &sulfur2);
			ImGui::Checkbox(skCrypt("Metal Ore"), &metal); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Metal"), &metal2);
			ImGui::Checkbox(skCrypt("Mushroom"), &mushroom); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Hemp"), &hemp);
		}
		if (ImGui::CollapsingHeader(skCrypt("Loot Crates")))
		{
			ImGui::Checkbox(skCrypt("military crate"), &military); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("elite crate"), &elite);
			ImGui::Checkbox(skCrypt("loot crate"), &loot); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("food crate"), &food);
			ImGui::Checkbox(skCrypt("medical crate"), &medical); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("toolbox crate"), &toolbox);
			ImGui::Checkbox(skCrypt("Airdrop"), &airdrop); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Stash"), &stash);
		}
		if (ImGui::CollapsingHeader(skCrypt("Rideable ESP")))
		{
			ImGui::Checkbox(skCrypt("Minicopter"), &minicopter); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Scrap Heli"), &scrapheli);
			ImGui::Checkbox(skCrypt("Patrol Heli"), &patrolheli); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Boat"), &boat);
			ImGui::Checkbox(skCrypt("Rhib"), &rhib); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Cars"), &cars);
		}
	}
	if (MenuSayfasi == 1)
	{
		if (ImGui::CollapsingHeader(skCrypt("Weapon")))
		{
			ImGui::Checkbox(skCrypt("No Recoil"), &norecoil); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("No Spread"), &nospread);
			ImGui::Checkbox(skCrypt("Fat Bullet"), &fat_bullet_checkbox); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Automatic"), &full_automatic_checkbox);
			ImGui::Checkbox(skCrypt("No Sway"), &nosway); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Super Eoka"), &super_eoka_checkbox);
			ImGui::Checkbox(skCrypt("Super Meele"), &supermeele); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Shotgun No Spread"), &noshotgunspread);
			ImGui::Checkbox(skCrypt("Super Compound Bow"), &instantCompound); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Zoom"), &zoom);
			ImGui::Checkbox(skCrypt("ADS Hide"), &ADS_Hide); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Crosshair"), &cross);
			ImGui::Checkbox(skCrypt("InstaBow"), &instabow);
		}
		if (ImGui::CollapsingHeader(skCrypt("Movement")))
		{
			ImGui::Checkbox(skCrypt("Spiderman"), &spiderman); ImGui::SameLine(150);
			ImGui::Checkbox(("Fly Hack"), &flyhack); ImGui::SameLine(270); 	ImGui::KeyBind(("##FlyHackButon"), FlyHackButon, ImVec2(32, 0));
			ImGui::Checkbox(skCrypt("Infinity Jump"), &infinitejump); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Timer"), &timer); ImGui::SameLine(270); 	ImGui::KeyBind(("##timer"), hangingg, ImVec2(32, 0));
			ImGui::Checkbox(skCrypt("Gravity"), &gravity); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Walk On Water"), &WalkOnWater); ImGui::SameLine(270); ImGui::KeyBind(("##WalkWater"), WalkOnWaterr, ImVec2(32, 0));
			ImGui::Checkbox(skCrypt("Jump Shot"), &jumpshot); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Fly Bypass"), &climb); ImGui::SameLine(270); 		ImGui::KeyBind(("##ClimbButon"), climbbutton, ImVec2(32, 0));
			ImGui::Checkbox(skCrypt("Long Neck"), &longneck); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Speed Hack"), &SPEEDhack); ImGui::SameLine(270); 			ImGui::KeyBind(("##SpeedHax"), speedbutton, ImVec2(32, 0));
		}
	}
	if (MenuSayfasi == 2)
	{
		if (ImGui::CollapsingHeader(skCrypt("Misc")))
		{
			ImGui::Checkbox(skCrypt("Admin Flag"), &admin_flag_checkboxx); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Fov"), &fov);
			ImGui::Checkbox(skCrypt("FakeWorkbench"), &fakeworkbench); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("ThirdPerson"), &thirdperson);
			ImGui::Checkbox(skCrypt("Instantly Suicide"), &suicide);
		}
		if (ImGui::CollapsingHeader(skCrypt("Client")))
		{
			ImGui::Checkbox(skCrypt("Time Changer"), &alwaysday); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Night Mode"), &nighttmode);
			ImGui::Checkbox(skCrypt("Old Box ESP"), &AdminEsp); ImGui::SameLine(150);
			ImGui::Checkbox(skCrypt("Fake Lag"), &fakelag);
			ImGui::Checkbox(skCrypt("Spin Bot"), &spinbot);
		}
	}
	if (MenuSayfasi == 3)
	{
		ImGui::SetCursorPos(ImVec2(94, 60));
		ImGui::SliderFloat(skCrypt("Gravity Distance"), &gravity_distancee, 1, 5, "% .2f");
		ImGui::SetCursorPos(ImVec2(94, 100));
		ImGui::SliderFloat(skCrypt("Fov Value"), &FOVV, 90, 150, "% .2f");
		ImGui::SetCursorPos(ImVec2(94, 140));
		ImGui::SliderFloat(skCrypt("Speed Value"), &speedBonus, 0, 1, "% .3f");
		ImGui::SetCursorPos(ImVec2(94, 180));
		ImGui::SliderFloat(skCrypt("FlyHack Speed Value"), &flyhackspeed, 0, 1, "% .3f");
		ImGui::SetCursorPos(ImVec2(94, 220));
		ImGui::SliderFloat(skCrypt("Timer Value"), &timervalue, 1, 8, "% .2f");
		ImGui::SetCursorPos(ImVec2(94, 260));
		ImGui::SliderFloat(skCrypt("Time Value"), &timee, 0, 24, "% .2f");
		ImGui::SetCursorPos(ImVec2(94, 300));
		ImGui::SliderFloat(skCrypt("Light Value"), &light, 0, 5, "% .2f");
		ImGui::SetCursorPos(ImVec2(94, 340));
		ImGui::SliderFloat(skCrypt("Crosshair Length"), &crosshair::sizes::cross::length, 1, 15, "% .2f");
		//ImGui::SetCursorPos(ImVec2(94, 380));
		//ImGui::SliderFloat(skCrypt("Crosshair Gap"), &crosshair::sizes::cross::gap, 1, 15, "% .2f");
	}
	ImGui::End();


	//ImGui::SetNextWindowSize(ImVec2(xekran, yekran));
	//ImGui::Begin(skCrypt("www.aliencheats.com"), NULL, ImGuiWindowFlags_NoResize);
	//{
	//	if (r == 255 && g >= 0 && b == 0) {
	//		g++;
	//	}
	//	if (r <= 255 && g == 255 && b == 0) {
	//		r--;
	//	}
	//	if (r == 0 && g == 255 && b >= 0) {
	//		b++;
	//	}
	//	if (r == 0 && g <= 255 && b == 255) {
	//		g--;
	//	}
	//	if (r >= 0 && g == 0 && b == 255) {
	//		r++;
	//	}
	//	if (r == 255 && g == 0 && b <= 255) {
	//		b--;
	//	}
	//	ImGui::SetCursorPos(ImVec2(10, 30));
	//	if (ImGui::Button(("Esp"), ImVec2(85, 27))) MenuSayfasi = 4;
	//	ImGui::SetCursorPos(ImVec2(10, 60));
	//	if (ImGui::Button(("Main"), ImVec2(85, 27))) MenuSayfasi = 1;
	//	ImGui::SetCursorPos(ImVec2(10, 90));
	//	if (ImGui::Button(("Misc"), ImVec2(85, 27))) MenuSayfasi = 2;
	//	ImGui::SetCursorPos(ImVec2(10, 120));
	//	if (ImGui::Button(("Settings"), ImVec2(85, 27))) MenuSayfasi = 3;
	//	ImGui::SetCursorPos(ImVec2(10, 150));
	//	if (ImGui::Button(("Exit"), ImVec2(85, 27))) exit(0);
	//	ImGui::SetCursorPos(ImVec2(10, 180));
	//	ImGui::KeyBind(("Menu##Menu Key"), g_menuKeyBind, ImVec2(50, 0));

	//	if (MenuSayfasi == 4)
	//	{
	//		ImGui::SetCursorPos(ImVec2(100, 30));
	//		ImGui::BeginChild(("Sayfa 0"), ImVec2(150.0f, 170.0f));
	//		//sayfa 1 - 1. kýsým
	//		ImGui::SetCursorPos(ImVec2(10, 10));
	//		ImGui::Checkbox(skCrypt("Player Esp", &esp_enable);
	//		if (esp_enable)
	//		{
	//			ImGui::SetCursorPos(ImVec2(10, 30));
	//			ImGui::Checkbox(skCrypt("CornerBox", &box);
	//			ImGui::SetCursorPos(ImVec2(10, 50));
	//			ImGui::Checkbox(skCrypt("Skeleton", &skeleton);
	//			ImGui::SetCursorPos(ImVec2(10, 70));
	//			ImGui::Checkbox(skCrypt("NameTag", &name);
	//			ImGui::SetCursorPos(ImVec2(10, 90));
	//			ImGui::Checkbox(skCrypt("HealthBar", &healthbar);

	//			ImGui::SetCursorPos(ImVec2(90, 30));
	//			ImGui::Checkbox(skCrypt("Snapline", &snapline);
	//			ImGui::SetCursorPos(ImVec2(90, 50));
	//			ImGui::Checkbox(skCrypt("Corpse", &playercorpse);
	//			ImGui::SetCursorPos(ImVec2(90, 70));
	//			ImGui::Checkbox(skCrypt("Backpack", &backpack);
	//			ImGui::SetCursorPos(ImVec2(90, 90));
	//			ImGui::Checkbox(skCrypt("SleepIgnore", &sleeper);

	//		}
	//		ImGui::SetCursorPos(ImVec2(1, 109));
	//		ImGui::Separator();
	//		ImGui::SetCursorPos(ImVec2(10, 110));
	//		ImGui::Checkbox(skCrypt("Animals", &animals);
	//		ImGui::SetCursorPos(ImVec2(10, 130));
	//		ImGui::Checkbox(skCrypt("Loot-Boxes", &lootboxes);
	//		ImGui::SetCursorPos(ImVec2(10, 150));
	//		ImGui::Checkbox(skCrypt("ShowDistance", &showdistancee);
	//		
	//		ImGui::SetCursorPos(ImVec2(90, 110));
	//		ImGui::Checkbox(skCrypt("Scientist", &scientist);

	//		ImGui::EndChild();
	//		ImGui::SetCursorPos(ImVec2(255, 30));
	//		ImGui::BeginChild(("Sayfa 0#"), ImVec2(150.0f, 170.0f));
	//		//sayfa 1 - 2. kýsým
	//		ImGui::SetCursorPos(ImVec2(10, 10));
	//		ImGui::Checkbox(skCrypt("Resources ESP", &esp_resource);
	//		if (esp_resource)
	//		{
	//			ImGui::SetCursorPos(ImVec2(10, 30));
	//			ImGui::Checkbox(skCrypt("Stone-Ore", &stone);
	//			ImGui::SetCursorPos(ImVec2(90, 30));
	//			ImGui::Checkbox(skCrypt("Stone", &stone2);

	//			ImGui::SetCursorPos(ImVec2(10, 50));
	//			ImGui::Checkbox(skCrypt("Sulfur-Ore", &sulfur);
	//			ImGui::SetCursorPos(ImVec2(90, 50));
	//			ImGui::Checkbox(skCrypt("Sulfur", &sulfur2);

	//			ImGui::SetCursorPos(ImVec2(10, 70));
	//			ImGui::Checkbox(skCrypt("Metal-Ore", &metal);
	//			ImGui::SetCursorPos(ImVec2(90, 70));
	//			ImGui::Checkbox(skCrypt("Metal", &metal2);

	//			ImGui::SetCursorPos(ImVec2(10, 90));
	//			ImGui::Checkbox(skCrypt("Mushroom", &mushroom);
	//			ImGui::SetCursorPos(ImVec2(90, 90));
	//			ImGui::Checkbox(skCrypt("Hemp", &hemp);
	//		}
	//		ImGui::SetCursorPos(ImVec2(1, 109));
	//		ImGui::Separator();
	//		ImGui::SetCursorPos(ImVec2(10, 110));
	//		ImGui::Checkbox(skCrypt("Airdrop", &airdrop);
	//		ImGui::SetCursorPos(ImVec2(10, 130));
	//		ImGui::Checkbox(skCrypt("Rideable", &rideable);
	//		ImGui::SetCursorPos(ImVec2(10, 150));
	//		ImGui::Checkbox(skCrypt("Stash", &stash);

	//

	//		ImGui::EndChild();
	//	}

	//	if (MenuSayfasi == 1)
	//	{
	//		ImGui::SetCursorPos(ImVec2(100, 30));
	//		ImGui::BeginChild(("Sayfa 1"), ImVec2(150.0f, 170.0f));
	//		//sayfa 1 - 1. kýsým
	//		ImGui::SetCursorPos(ImVec2(10, 10));
	//		ImGui::Checkbox(skCrypt("Old-Box-ESP", &AdminEsp);
	//		ImGui::SetCursorPos(ImVec2(10, 30));
	//		ImGui::Checkbox(skCrypt("No-Recoil", &norecoil);
	//		ImGui::SetCursorPos(ImVec2(10, 50));
	//		ImGui::Checkbox(skCrypt("Admin-Flag", &admin_flag_checkboxx);
	//		ImGui::SetCursorPos(ImVec2(10, 70));
	//		ImGui::Checkbox(skCrypt("Fov", &fov);
	//		ImGui::SetCursorPos(ImVec2(10, 90));
	//		ImGui::Checkbox(skCrypt("No-Spread", &nospread);
	//		ImGui::SetCursorPos(ImVec2(10, 110));
	//		ImGui::Checkbox(skCrypt("Long-Neck", &longneck);
	//		ImGui::SetCursorPos(ImVec2(10, 130));
	//		ImGui::Checkbox(skCrypt("No-Sway", &nosway);
	//		ImGui::SetCursorPos(ImVec2(10, 150));
	//		ImGui::Checkbox(skCrypt("Jump-Shot", &jumpshot);
	//		ImGui::EndChild();
	//		ImGui::SetCursorPos(ImVec2(255, 30));
	//		ImGui::BeginChild(("Sayfa 1#"), ImVec2(150.0f, 170.0f));
	//		//sayfa 1 - 2. kýsým
	//		ImGui::SetCursorPos(ImVec2(10, 10));
	//		ImGui::Checkbox(skCrypt("Spiderman", &spiderman);
	//		ImGui::SetCursorPos(ImVec2(10, 30));
	//		ImGui::Checkbox(skCrypt("Fat-Bullet", &fat_bullet_checkbox);
	//		ImGui::SetCursorPos(ImVec2(10, 50));
	//		ImGui::Checkbox(skCrypt("Automatic", &full_automatic_checkbox);
	//		ImGui::SetCursorPos(ImVec2(10, 70));
	//		ImGui::Checkbox(skCrypt("Super-Eoka", &super_eoka_checkbox);
	//		ImGui::SetCursorPos(ImVec2(10, 90));
	//		ImGui::Checkbox(skCrypt("Super-Meele", &supermeele);
	//		ImGui::SetCursorPos(ImVec2(10, 110));
	//		ImGui::Checkbox(skCrypt("Shotgun-No-Spread", &noshotgunspread);
	//		ImGui::SetCursorPos(ImVec2(10, 130));
	//		ImGui::Checkbox(skCrypt("Super-Compound-Bow", &instantCompound);


	//		ImGui::EndChild();
	//	}
	//	if (MenuSayfasi == 2)
	//	{
	//		ImGui::SetCursorPos(ImVec2(100, 30));
	//		ImGui::BeginChild(("Sayfa 2"), ImVec2(150.0f, 170.0f));
	//		//sayfa 2 - 2. kýsým
	//		ImGui::SetCursorPos(ImVec2(10, 10));
	//		ImGui::Checkbox(skCrypt("Infinity-Jump", &infinitejump);
	//		ImGui::SetCursorPos(ImVec2(10, 30));
	//		ImGui::Checkbox(skCrypt("Gravity", &gravity);
	//		ImGui::SetCursorPos(ImVec2(10, 50));
	//		ImGui::Checkbox(skCrypt("Timer", &timer);
	//		ImGui::SetCursorPos(ImVec2(108, 50));
	//		ImGui::KeyBind(("##timer"), hangingg, ImVec2(32, 0));
	//		ImGui::SetCursorPos(ImVec2(10, 70));
	//		ImGui::Checkbox(skCrypt("Walk-On-Water", &WalkOnWater);
	//		ImGui::SetCursorPos(ImVec2(108, 70));
	//		ImGui::KeyBind(("##WalkWater"), WalkOnWaterr, ImVec2(32, 0));
	//		ImGui::SetCursorPos(ImVec2(10, 90));
	//		ImGui::Checkbox(("Fly-Hack"), &flyhack);
	//		ImGui::SetCursorPos(ImVec2(108, 90));
	//		ImGui::KeyBind(("##FlyHackButon"), FlyHackButon, ImVec2(32, 0));
	//		ImGui::SetCursorPos(ImVec2(10, 110));
	//		ImGui::Checkbox(skCrypt("Fly-Bypass", &climb);
	//		ImGui::SetCursorPos(ImVec2(108, 110));
	//		ImGui::KeyBind(("##ClimbButon"), climbbutton, ImVec2(32, 0));
	//		ImGui::SetCursorPos(ImVec2(10, 130));
	//		ImGui::Checkbox(skCrypt("Speed-Hack", &SPEEDhack);
	//		ImGui::SetCursorPos(ImVec2(108, 130));
	//		ImGui::KeyBind(("##SpeedHax"), speedbutton, ImVec2(32, 0));
	//		ImGui::SetCursorPos(ImVec2(10, 150));
	//		ImGui::Checkbox(skCrypt("Crosshair", &cross);
	//		ImGui::SetCursorPos(ImVec2(108, 150));
	//		ImGui::SetColorEditOptions(ImGuiColorEditFlags_Float | ImGuiColorEditFlags_NoInputs);
	//		//ImGui::ColorEdit4(("##Crosshairs Color").c_str(), Color::CrosshairColors);
	//		ImGui::EndChild();
	//		ImGui::SetCursorPos(ImVec2(255, 30));
	//		ImGui::BeginChild(("Sayfa 2#"), ImVec2(150.0f, 170.0f));
	//		//sayfa 2 - 2. kýsým
	//		ImGui::SetCursorPos(ImVec2(10, 10));
	//		ImGui::Checkbox(skCrypt("Instantly-Suicide", &suicide);
	//		ImGui::SetCursorPos(ImVec2(10, 30));
	//		ImGui::Checkbox(skCrypt("Time-Changer", &alwaysday);
	//		ImGui::SetCursorPos(ImVec2(10, 50));
	//		ImGui::Checkbox(skCrypt("Night-Mode", &nighttmode);
	//		ImGui::SetCursorPos(ImVec2(10, 70));
	//		ImGui::Checkbox(skCrypt("ThirdPerson", &thirdperson);
	//		ImGui::SetCursorPos(ImVec2(10, 90));
	//		ImGui::Checkbox(skCrypt("FakeWorkbench", &fakeworkbench);
	//		ImGui::SetCursorPos(ImVec2(10, 110));
	//		ImGui::Checkbox(skCrypt("Zoom", &zoom);
	//		ImGui::SetCursorPos(ImVec2(10, 130));
	//		ImGui::Checkbox(skCrypt("Chams", &chams);
	//		ImGui::SetCursorPos(ImVec2(10, 150));
	//		ImGui::Checkbox(skCrypt("ADS-Hide", &ADS_Hide);
	//		ImGui::EndChild();
	//	}
	//	if (MenuSayfasi == 3)
	//	{
	//		ImGui::SetCursorPos(ImVec2(100, 30));
	//		ImGui::BeginChild(("Sayfa 3"), ImVec2(310.0f, 170.0f));
	//		//sayfa 3
	//		ImGui::SetCursorPos(ImVec2(10, 0));
	//		ImGui::SliderFloat(("\n                                 Gravity Distance"), &gravity_distancee, 1, 5, "% .2f");
	//		ImGui::SetCursorPos(ImVec2(10, 20));
	//		ImGui::SliderFloat(("\n                                 Fov Value"), &FOVV, 90, 150, "% .2f");
	//		ImGui::SetCursorPos(ImVec2(10, 40));
	//		ImGui::SliderFloat(("\n                                 Speed Value"), &speedBonus, 0, 1, "% .3f");
	//		ImGui::SetCursorPos(ImVec2(10, 60));
	//		ImGui::SliderFloat(("\n                                 FlyHack Speed Value"), &flyhackspeed, 0, 1, "% .3f");
	//		ImGui::SetCursorPos(ImVec2(10, 80));
	//		ImGui::SliderFloat(("\n                                 Timer Value"), &timervalue, 1, 8, "% .2f");
	//		ImGui::SetCursorPos(ImVec2(10, 100));
	//		ImGui::SliderFloat(("\n                                 Time Value"), &timee, 0, 24, "% .2f");
	//		ImGui::SetCursorPos(ImVec2(10, 120));
	//		ImGui::SliderFloat(("\n                                 Light Value"), &light, 0, 5, "% .2f");

	//		ImGui::EndChild();
	//	}
	//}
	//ImGui::End();
}
void render()
{
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (drawaimbot)
	{
		ImGui::GetOverlayDrawList()->AddCircle(ImVec2(ScreenCenterX, ScreenCenterY), aimfovv, IM_COL32_WHITE, 10000, 1);
	}
	if (cross)
	{
		Crosshair();
	}
	if (ADS_Hide == true) {
		if (!GetAsyncKeyState(VK_RBUTTON))
		{
			cross = true;
		}
		else {
			cross = false;
		}
	}

	if (GetAsyncKeyState(g_menuKeyBind) & 1) { showmenu = !showmenu; }
	cheat();

	if (GetAsyncKeyState(VK_END) & 1) { exit(0); }


	if (showmenu) { draw_menu(); }
	ImGui::EndFrame();
	p_Device->SetRenderState(D3DRS_ZENABLE, false);
	p_Device->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
	p_Device->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
	p_Device->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 1.0f, 0);

	if (p_Device->BeginScene() >= 0)
	{
		ImGui::Render();
		ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
		p_Device->EndScene();
	}

	HRESULT result = p_Device->Present(NULL, NULL, NULL, NULL);

	if (result == D3DERR_DEVICELOST && p_Device->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
	{
		ImGui_ImplDX9_InvalidateDeviceObjects();
		p_Device->Reset(&d3dpp);
		ImGui_ImplDX9_CreateDeviceObjects();
	}
}

static std::string random_string(int length)
{
	std::string str(("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	std::random_device rd;
	std::mt19937 generator(rd());
	std::shuffle(str.begin(), str.end(), generator);
	return str.substr(0, length);    // assumes 32 < number of characters in str         
}

static DWORDLONG random_number(DWORDLONG min, DWORDLONG max)
{
	srand(time(0));
	DWORDLONG out = min + rand() % (max - min + 1);
	return out;
}
static std::string randomclassname = "Alien Rust-Cheat                                                                                          " + random_string(random_number(4, 16));

namespace Util
{
	std::string RandomString(const int len);
	bool RenameFile(std::string& path);

}
std::string Util::RandomString(const int len)
{
	const std::string alpha_numeric("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890");

	std::default_random_engine generator{ std::random_device{}() };
	const std::uniform_int_distribution< std::string::size_type > distribution{ 0, alpha_numeric.size() - 1 };

	std::string str(len, 0);
	for (auto& it : str)
		it = alpha_numeric[distribution(generator)];

	return str;
}

bool Util::RenameFile(std::string& path)
{
	std::string newPath = ("AlienCheat - " + Util::RandomString(16) + ".exe"); // generate a random string
	SetConsoleTitleA(Util::RandomString(16).c_str()); // set the console title to another random string

	if (std::rename(path.c_str(), newPath.c_str())) return false; // rename the file and return false if it failed

	path = newPath; // set the value of the path argument to the new path

	return true;
}


int main(int argCount, char** argVector)
{
	////std::string filePath = argVector[0];
	////if (!Util::RenameFile(filePath))
	////{
	////	Sleep(5000);
	////	return -1;
	////}

	////SetConsoleTitle(randomclassname.c_str());
	////HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	////CONSOLE_SCREEN_BUFFER_INFO info;
	////GetConsoleScreenBufferInfo(handle, &info);
	////COORD new_size =
	////{
	////	info.srWindow.Right - info.srWindow.Left + 1,
	////	info.srWindow.Bottom - info.srWindow.Top + 1
	////};
	////SetConsoleScreenBufferSize(handle, new_size);

	////HWND hwnd = GetConsoleWindow();
	////if (hwnd != NULL) { MoveWindow(hwnd, 200, 100, 320, 550, TRUE); }
	////SetLayeredWindowAttributes(hwnd, 1000, 1000, LWA_ALPHA);

	////HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	////CONSOLE_CURSOR_INFO     cursorInfo;

	////GetConsoleCursorInfo(out, &cursorInfo);
	////cursorInfo.bVisible = false;
	////SetConsoleCursorInfo(out, &cursorInfo);

	////SetWindowLong(hwnd, GWL_STYLE, GetWindowLong(hwnd, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);

	////SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS);
	//////SetConsole();

	////SetConsoleTitleA(randomclassname.c_str());
	////mainprotect();

	////
	////KeyAuthApp.init();

	////SetConsoleTitleA(skCrypt("  "));

	////KeyAuthApp.init();
	////std::string key;
	////system(skCrypt("cls"));
	////std::cout << skCrypt("\n\n  [+] Connecting..");
	////std::cout << skCrypt("\n\n  [+] License: ");
	////std::cin >> key;
	////KeyAuthApp.license(key);
	////if (!KeyAuthApp.data.success)
	////{
	////	std::cout << _xor_("\n Status: ").c_str() + KeyAuthApp.data.message;
	////	Sleep(1500);
	////	exit(0);
	////}


r8:
	if (!driver.init())
	{
	r7:
		if (FindWindowA(skCrypt("UnityWndClass"), NULL))
		{
			printf(skCrypt("[>] close game please...\n"));
			Sleep(1000);
			goto r7;
		}
		if (LoadDriver())
		{
			printf(skCrypt("[>] driver loaded!\n"));
			Sleep(1000);
			system("cls");
			goto r8;
		}
	}
	HWND Entryhwnd = NULL;
	while (Entryhwnd == NULL)
	{
		printf(skCrypt("[>] waiting for game\n"));
		Sleep(1);
		system("cls");
		g_pid = get_pid(	);
		printf(skCrypt("[>] pid: %d\n"), g_pid);
		Entryhwnd = get_process_wnd(g_pid);
		Sleep(1);
	}
	driver.attach(g_pid);
	setup_window();
	init_wndparams(MyWnd);
	g_assembly = driver.get_process_module("GameAssembly.dll");
	g_unityplayer = driver.get_process_module("UnityPlayer.dll");
	driver.VirtualAddress = driver.get_guarded_base();
	if (!g_assembly) { printf(skCrypt("[>] GameAssembly can't found!\n")); return 0; }
	if (!g_unityplayer) { printf(skCrypt("[>] UnityPlayer can't found\n")); return 0; }
	printf("[>] GameAssembly: 0x%p\n[>] Unityplayer: 0x%p\n", g_assembly, g_unityplayer);
	::SetWindowPos(GetConsoleWindow(), HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_HIDEWINDOW);
	//std::thread(omni).detach();
	std::thread(Hilee).detach();
	static RECT old_rc;
	ZeroMemory(&Message, sizeof(MSG));
	while (Message.message != WM_QUIT)
	{
		if (PeekMessage(&Message, MyWnd, 0, 0, PM_REMOVE)) {
			TranslateMessage(&Message);
			DispatchMessage(&Message);
		}

		HWND hwnd_active = GetForegroundWindow();


		if (hwnd_active == GameWnd) {
			HWND hwndtest = GetWindow(hwnd_active, GW_HWNDPREV);
			SetWindowPos(MyWnd, hwndtest, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
		}
		RECT rc;
		POINT xy;

		ZeroMemory(&rc, sizeof(RECT));
		ZeroMemory(&xy, sizeof(POINT));
		GetClientRect(GameWnd, &rc);
		ClientToScreen(GameWnd, &xy);
		rc.left = xy.x;
		rc.top = xy.y;

		ImGuiIO& io = ImGui::GetIO();
		io.ImeWindowHandle = GameWnd;
		io.DeltaTime = 1.0f / 60.0f;

		POINT p;
		GetCursorPos(&p);
		io.MousePos.x = p.x - xy.x;
		io.MousePos.y = p.y - xy.y;
		if (GetAsyncKeyState(0x1)) {
			io.MouseDown[0] = true;
			io.MouseClicked[0] = true;
			io.MouseClickedPos[0].x = io.MousePos.x;
			io.MouseClickedPos[0].x = io.MousePos.y;
		}
		else io.MouseDown[0] = false;

		if (rc.left != old_rc.left || rc.right != old_rc.right || rc.top != old_rc.top || rc.bottom != old_rc.bottom) {

			old_rc = rc;

			Width = rc.right;
			Height = rc.bottom;

			p_Params.BackBufferWidth = Width;
			p_Params.BackBufferHeight = Height;
			SetWindowPos(MyWnd, (HWND)0, xy.x, xy.y, Width, Height, SWP_NOREDRAW);
			p_Device->Reset(&p_Params);
		}
		render();
		//Sleep(5);
	}

	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();
	cleanup_d3d();
	DestroyWindow(MyWnd);
	return Message.wParam;
}