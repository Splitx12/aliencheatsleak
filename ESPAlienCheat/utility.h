#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <string>
#include <emmintrin.h>
#include "struct.h"
#include <iostream>
#include <iostream>

int realkey;
int keystatus;
int aimkey;

bool showmenu;
bool box;
bool skeleton;
bool snapline;
bool name;
bool healthbar;

bool sleeper;
bool backpack;
bool playercorpse;
bool tunneldweller;
bool scientistnpc;

bool playerinfoo;
//
bool wolf;
bool bear;
bool stag;
bool chicken;
bool boar;
//
bool weapons = false;

//
bool stone;
bool sulfur;
bool metal;
bool hemp;
bool mushroom;

bool military;
bool elite;
bool loot;
bool food;
bool medical;
bool toolbox;

bool stone2;
bool sulfur2;
bool metal2;

bool airdrop;
bool minicopter;
bool cars;
bool scrapheli;
bool patrolheli;
bool rhib;
bool boat;
bool horse;
bool teamignore;
bool stash;

#define safe_read(Addr, Type) driver.read<Type>(Addr)
#define safe_write(Addr, Data, Type) driver.write<Type>(Addr, Data)

#define BaseEntity 52889792 // BaseEntity_c*
#define ConVar_Client_c 52888984 // ConVar_Client_c*
#define ConVar_Admin_c 52885072 // convar_admin_c*

#define playerflags 0x690 // public BasePlayer.PlayerFlags playerFlags;
#define groundAngle 0xC4 // groundAngle
#define groundAngleNew 0xC8 // groundAngleNew
#define oGravityMultiplier 0x84 // public float gravityMultiplier;
#define oclothingWaterSpeedBonus 0x768 // public float clothingWaterSpeedBonus;
#define clothingMoveSpeedReduction 0x764 // public float clothingMoveSpeedReduction;
#define gravityTestRadius 0x80// public float gravityTestRadius
#define capsuleHeight 0x68 // public float capsuleHeight
#define capsuleCenter 0x6C // public float capsuleCenter
#define oGameObjectManager 0x17C1F18 // GOM OFFSET

//class BasePlayer
#define oPlayerFlags 0x690 // 0x680 // public BasePlayer.PlayerFlags playerFlags;
#define oPlayerMovement 0x4F8 // 0x4E8 // public BaseMovement movement;
#define wasFalling  0x148// private bool wasFalling
#define previousVelocity  0xE4// private Vector3 previousVelocity
#define groundTime  0xCC// private float groundTime
#define oLifestate 0x224 // public BaseCombatEntity.LifeState lifestate;
#define oClientTeam 0x5A8 // public PlayerTeam clientTeam;
#define oSteamID 0x6D8 // public ulong userID;

#define oFlying 0x149 // private bool flying;
#define oPlayerDistance 0x10 //public float Distance;

//FOV ICIN
#define oFovConVarGraphics 52895712 // "Signature": "ConVar_Graphics_c" // DONE

//Patch Debug Cam
#define oConVar_Client 52888984 // "Signature": "ConVar_Client_c" // DONE

//jump shot icin //dump.cs
#define oFlagOnGround 4 // public const ModelState.Flag OnGround = 4;
#define oModelState 0x600 // 0x5C8 // public ModelState modelState;

//RECOIL ICIN
#define oPlayerActiveItem 0x5D8 // private uint clActiveItem; // 0x5C8
#define oPlayerInput 0x4F0 // public PlayerInput input;
#define bodyRotation 0x2C // private Quaternion bodyRotation; // 0x2C
#define headRotation 0x48 // private Quaternion headRotation; // 0x48

#define oPlayerModel 0x4D0 // public PlayerModel playerModel;
#define onewVelocity 0x23C // private Vector3 newVelocity



#define oItemListOffset 0x38 //public List<Item> itemList; // 0x38
#define oBeltOffset 0x28 // public List<PlayerInventoryProperties.ItemAmountSkinned> belt;
#define oBeltContaint 0x38
#define oEokaSuccessFraction 0x378 // public float successFraction;
#define oFastCompoundBow 0x390    // public float stringHoldDurationMax; // 0x378
#define oCreatedProjectile 0x370 // private List<Projectile> createdProjectiles; // 0x358
#define oFastCompoundBowMoving 0x3D8 // protected float movementPenalty; // 0x3B8
#define oAutomatic 0x290 // public bool automatic;


#define oCorpsePlayerName 0x2C8// public string _playerName; // 0x2B0

#define oSparkThisFrame 0x388 // private bool _didSparkThisFrame; // 0x370

#define oAttackready 0x378 // protected bool attackready;
#define oArrowBack 0x37C // private float arrowBack;

#define oCamSpeed 0x2C // public static float camspeed; // 0x2C
#define oCamLerp 0x20 // public static float camlerp; // 0x20

#define oAmbientMode 0x18DEF90 //// public static void set_ambientMode(AmbientMode value) { }  // 0x1857540
#define oambientIntensit 0x18DEED0 //public static void set_ambientIntensity(float value) { } // 0x1857480
#define oambientLight 0x18DEF50 //public static void set_ambientLight(Color value) { } // 0x1857500

#define oClothingMoveSpeedReduction 0x764 // public float clothingMoveSpeedReduction;
#define oClothingWaterSpeedBonus 0x768 // public float clothingWaterSpeedBonus;

#define oTodSky 0x11AFFF0 // public T GetComponent() { } public static TOD_Sky get_Instance() { }

#define oHeldEntity 0x98// private EntityRef heldEntity;



#define oClothingBlocksAiming 0x760 // public bool clothingBlocksAiming
#define oClothingAccuracyBonus 0x76C // public float clothingAccuracyBonus;

#define oPlayerEyes 0x698 // public PlayerEyes eyes; 
#define oHeld 0x98 // private EntityRef heldEntity
#define oActiveUID 0x5D8 // private uint clActiveItem;
#define oPlayerInventory 0x6A0 // public PlayerInventory inventory;
#define oContainerBelt 0x28 // public ItemContainer containerBelt
#define oBeltContentList 0x38 // public List<Item> contents   or   public List<int> availableSlots;
#define oRecoilProperties 0x2E0 // public RecoilProperties recoil;

#define oRecoilYawMin 0x18  // public float recoilYawMin;
#define oRecoilYawMax 0x1C  // public float recoilYawMax;
#define oRecoilPitchMin 0x20 // public float recoilPitchMin;
#define oRecoilPitchMax 0x24 // public float recoilPitchMax;

#define oAimconeCurveScale 0x60 // public float aimconeCurveScale;
#define oStancePenalty 0x324 //private float stancePenalty;
#define oAimCone 0x2F0 //public float aimCone;
#define oHipAimCone 0x2F4 //public float hipAimCone;
#define oAimconePenaltyPerShot 0x2F8 //public float aimconePenaltyPerShot;


#define oAttackRadius 0x29C // public float attackRadius;
#define oisAutomatic 0x2A0//public bool isAutomatic;
#define omaxDistance 0x298 //public float maxDistance;
#define oBlockSprintOnAttack 0x2A1 //public bool blockSprintOnAttack;
#define oonlyThrowAsProjectile 0x282 //public bool onlyThrowAsProjectile;
#define othrowReady 0x2D8 //private bool throwReady;




std::uint32_t get_pid(const std::string& name = "RustClient.exe")
{
	const auto snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (snap == INVALID_HANDLE_VALUE) {
		return 0;
	}

	PROCESSENTRY32 proc_entry{};
	proc_entry.dwSize = sizeof proc_entry;

	auto found_process = false;
	if (!!Process32First(snap, &proc_entry)) {
		do {
			if (name == proc_entry.szExeFile) {
				found_process = true;
				break;
			}
		} while (!!Process32Next(snap, &proc_entry));
	}

	CloseHandle(snap);
	return found_process
		? proc_entry.th32ProcessID
		: 0;
}
struct monostr
{
	char buffer[128];
};

std::string readchar(uintptr_t addr) {
	std::string str = safe_read(addr, monostr).buffer;
	if (!str.empty())
		return str;
	else
		return "31";
}
enum BoneList : int
{
	l_hip = 1,
	l_knee,
	l_foot,
	l_toe,
	l_ankle_scale,
	pelvis,
	penis,
	GenitalCensor,
	GenitalCensor_LOD0,
	Inner_LOD0,
	GenitalCensor_LOD1,
	GenitalCensor_LOD2,
	r_hip,
	r_knee,
	r_foot,
	r_toe,
	r_ankle_scale,
	spine1,
	spine1_scale,
	spine2,
	spine3,
	spine4,
	l_clavicle,
	l_upperarm,
	l_forearm,
	l_hand,
	l_index1,
	l_index2,
	l_index3,
	l_little1,
	l_little2,
	l_little3,
	l_middle1,
	l_middle2,
	l_middle3,
	l_prop,
	l_ring1,
	l_ring2,
	l_ring3,
	l_thumb1,
	l_thumb2,
	l_thumb3,
	IKtarget_righthand_min,
	IKtarget_righthand_max,
	l_ulna,
	neck,
	head,
	jaw,
	eyeTranform,
	l_eye,
	l_Eyelid,
	r_eye,
	r_Eyelid,
	r_clavicle,
	r_upperarm,
	r_forearm,
	r_hand,
	r_index1,
	r_index2,
	r_index3,
	r_little1,
	r_little2,
	r_little3,
	r_middle1,
	r_middle2,
	r_middle3,
	r_prop,
	r_ring1,
	r_ring2,
	r_ring3,
	r_thumb1,
	r_thumb2,
	r_thumb3,
	IKtarget_lefthand_min,
	IKtarget_lefthand_max,
	r_ulna,
	l_breast,
	r_breast,
	BoobCensor,
	BreastCensor_LOD0,
	BreastCensor_LOD1,
	BreastCensor_LOD2,
	collision,
	displacement
};
int length(uintptr_t addr) { return safe_read(addr + 0x10, int); }

std::string readstring(uintptr_t addr) {
	try {
		static char buff[128] = { 0 };
		buff[length(addr)] = '\0';

		for (int i = 0; i < length(addr); ++i) {
			if (buff[i] < 128) {
				buff[i] = safe_read(addr + 0x14 + (i * 2), char);
			}
			else {
				buff[i] = '?';
				if (buff[i] >= 0xD800 && buff[i] <= 0xD8FF)
					i++;
			}
		}
		return std::string(&buff[0], &buff[length(addr)]);
	}
	catch (const std::exception& exc) {}
	return "Error";
}
UINT64 GetHeldItem(UINT64 LocalPlayer)
{
	const auto base_player = LocalPlayer;
	const auto active_item_id = driver.read<UINT64>(base_player + oActiveUID);
	const auto player_inventory = driver.read<UINT64>(base_player + oPlayerInventory);
	const auto inventory_belt = driver.read<UINT64>(player_inventory + oContainerBelt);
	const auto belt_contents_list = driver.read<UINT64>(inventory_belt + oBeltContentList);
	const auto belt_contents_sz = driver.read<uint32_t>(belt_contents_list + 0x14);
	const auto belt_contents = driver.read<UINT64>(belt_contents_list + 0x10);



	for (auto i = 0u; i <= 6; i++)
	{
		if (belt_contents != 0)
		{
			const auto current_item = driver.read<UINT64>(belt_contents + (0x20 + (i * 8)));
			if (!current_item) continue;
			if (active_item_id == driver.read<uint32_t>(current_item + 0x28)) return current_item;
		}
	}
}
struct FMinimalViewInfo {
	struct Vector3 Location; // 0x00(0x0c)
	struct Vector3 Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};

#define oItemDefinition 0x20 // public ItemDefinition info;
#define oItemid 0x18 // public int itemid;

class WeaponData
{
public:
	int __fastcall GetItemID()
	{
		auto Info = driver.read<uintptr_t>((const uintptr_t)this + oItemDefinition);
		return driver.read<int>((const uintptr_t)Info + oItemid);
	}
	int __fastcall GetUID()
	{
		return driver.read<int>((const uintptr_t)this + 0x28);
	}

	std::string GetItemNameS()
	{
		auto info = driver.read<uintptr_t>((const uintptr_t)this + 0x20);

		auto display_name = driver.read<uintptr_t>(info + 0x20);

		std::wstring wide_name = driver.read_unicode(display_name + 0x14, sizeof(std::wstring));

		if (!wide_name.empty())
			return std::string(wide_name.begin(), wide_name.end()).c_str();

		return "No Item";


	}

	std::string GetAmmoType()
	{
		auto item_def = driver.read<uintptr_t>((const uintptr_t)this + 0x20);
		auto short_name = driver.read<uintptr_t>(item_def + 0x20);

		std::wstring wide_name = driver.read_unicode(short_name + 0x14, sizeof(std::wstring));

		return std::string(wide_name.begin(), wide_name.end()).c_str();

	}

};


class BasePlayer
{
public:


	Vector3 Position3()
	{
		return GetPosition(GetTransform(head)).midPoint(GetPosition(GetTransform(head)));
	}

	Vector3 Position2()
	{
		return GetPosition(GetTransform(head)).midPoint(GetPosition(GetTransform(head)));
	}

	Vector3 Position()
	{
		return GetPosition(GetTransform(15)).midPoint(GetPosition(GetTransform(3)));
	}

	uintptr_t GetName() {
		auto player_name = safe_read((uintptr_t)this + 0x6F0, UINT_PTR);
		return player_name;
	}

	bool IsSleeping()
	{
		if (!(DWORD64)this)
			return true;

		DWORD64 Flags = driver.read<DWORD64>((DWORD64)this + oPlayerFlags);
		return Flags & 16;
	}
	float Health()
	{
		return driver.read<float>((uintptr_t)this + 0x22C);
	}
	bool IsDead()
	{
		if (!(const uintptr_t)this) return true;
		return driver.read<bool>((const uintptr_t)(const uintptr_t)this + oLifestate);
	}
	int GetTeamSize()
	{
		UINT64 ClientTeam = driver.read<UINT64>((const uintptr_t)(const uintptr_t)this + oClientTeam); // valid
		UINT64 members = driver.read<UINT64>(ClientTeam + 0x30);
		return driver.read<UINT64>(members + 0x18);
	}
	uintptr_t __fastcall IsTeamMate(int Id)
	{
		auto ClientTeam = driver.read<uintptr_t>((const uintptr_t)(const uintptr_t)this + oClientTeam);
		auto members = driver.read<uintptr_t>(ClientTeam + 0x30);
		auto List = driver.read<uintptr_t>(members + 0x10);
		auto player = driver.read<uintptr_t>(List + 0x20 + (Id * 0x8));
		return driver.read<uintptr_t>(player + 0x20);
	}
	Vector3 GetBoneByID(int BoneID) {
		return GetPosition(GetTransform(BoneID));
	}

	Vector3 GetPosition(uint64_t transform)
	{
		auto transform_internal = driver.read<uint64_t>(transform + 0x10);

		if (!transform_internal)
			return Vector3(0, 0, 0);

		auto some_ptr = driver.read<uint64_t>(transform_internal + 0x38);
		auto index = driver.read<int32_t>(transform_internal + 0x38 + sizeof(uint64_t));
		if (!some_ptr)
			return Vector3();

		auto relation_array = driver.read<uint64_t>(some_ptr + 0x18);
		if (!relation_array)
			return Vector3();

		auto dependency_index_array = driver.read<uint64_t>(some_ptr + 0x20);
		if (!dependency_index_array)
			return Vector3();

		__m128i temp_0;
		__m128 xmmword_1410D1340 = { -2.f, 2.f, -2.f, 0.f };
		__m128 xmmword_1410D1350 = { 2.f, -2.f, -2.f, 0.f };
		__m128 xmmword_1410D1360 = { -2.f, -2.f, 2.f, 0.f };
		__m128 temp_1;
		__m128 temp_2;
		auto temp_main = driver.read<__m128>(relation_array + index * 48);
		auto dependency_index = driver.read<int32_t>(dependency_index_array + 4 * index);

		while (dependency_index >= 0) {
			auto relation_index = 6 * dependency_index;

			temp_0 = driver.read<__m128i>(relation_array + 8 * relation_index + 16);
			temp_1 = driver.read<__m128>(relation_array + 8 * relation_index + 32);
			temp_2 = driver.read<__m128>(relation_array + 8 * relation_index);

			__m128 v10 = _mm_mul_ps(temp_1, temp_main);
			__m128 v11 = _mm_castsi128_ps(_mm_shuffle_epi32(temp_0, 0));
			__m128 v12 = _mm_castsi128_ps(_mm_shuffle_epi32(temp_0, 85));
			__m128 v13 = _mm_castsi128_ps(_mm_shuffle_epi32(temp_0, -114));
			__m128 v14 = _mm_castsi128_ps(_mm_shuffle_epi32(temp_0, -37));
			__m128 v15 = _mm_castsi128_ps(_mm_shuffle_epi32(temp_0, -86));
			__m128 v16 = _mm_castsi128_ps(_mm_shuffle_epi32(temp_0, 113));
			__m128 v17 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(
							_mm_sub_ps(
								_mm_mul_ps(_mm_mul_ps(v11, xmmword_1410D1350), v13),
								_mm_mul_ps(_mm_mul_ps(v12, xmmword_1410D1360), v14)),
							_mm_castsi128_ps(_mm_shuffle_epi32(_mm_castps_si128(v10), -86))),
						_mm_mul_ps(
							_mm_sub_ps(
								_mm_mul_ps(_mm_mul_ps(v15, xmmword_1410D1360), v14),
								_mm_mul_ps(_mm_mul_ps(v11, xmmword_1410D1340), v16)),
							_mm_castsi128_ps(_mm_shuffle_epi32(_mm_castps_si128(v10), 85)))),
					_mm_add_ps(
						_mm_mul_ps(
							_mm_sub_ps(
								_mm_mul_ps(_mm_mul_ps(v12, xmmword_1410D1340), v16),
								_mm_mul_ps(_mm_mul_ps(v15, xmmword_1410D1350), v13)),
							_mm_castsi128_ps(_mm_shuffle_epi32(_mm_castps_si128(v10), 0))),
						v10)),
				temp_2);

			temp_main = v17;
			dependency_index = driver.read<int32_t>(dependency_index_array + 4 * dependency_index);
		}

		return *reinterpret_cast<Vector3*>(&temp_main);
	}


	uintptr_t __fastcall GetItemsList() {
		auto Inventory = driver.read<uintptr_t>((const uintptr_t)this + oPlayerInventory);
		auto Belt = driver.read <uintptr_t>(Inventory + 0x28);
		auto ItemList = driver.read<uintptr_t>(Belt + 0x38);
		return driver.read<uintptr_t>(ItemList + 0x10);
	}

	std::wstring GetItemName()
	{
		auto Info = driver.read<uintptr_t>((const uintptr_t)this + 0x20); //Item -> info.

		auto ShortName = driver.read<uintptr_t>(Info + 0x20); //ItemDefinitnion -> shortname.

		auto wname = driver.read_unicode(ShortName + 0x14, 64);
		if (!wname.empty())
		{
			return wname;
		}
	}
	std::string __fastcall GetBeltItems(uintptr_t ItemsList, int Slot) {
		uintptr_t SlotItem;
		if (Slot == 1) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x20);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 2) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x28);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 3) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x30);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 4) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x38);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 5) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x40);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 6) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x48);
			if (!SlotItem) {
				return (" ");
			}
		}

		auto Item1Info = driver.read<uintptr_t>(SlotItem + 0x20);
		if (!Item1Info) {
			return (" ");
		}

		auto ItemDisplayName = driver.read<uintptr_t>(Item1Info + 0x28);
		if (!ItemDisplayName) {
			return (" ");
		}

		auto ItemDisplayEnglish = driver.read<uintptr_t>(ItemDisplayName + 0x18);
		if (!ItemDisplayEnglish) {
			return (" ");
		}

		auto NameTest = driver.read<uintptr_t>(ItemDisplayEnglish + 0x14);

		if (!NameTest) {
			return (" ");
		}

		std::wstring Name = driver.read_unicode(ItemDisplayEnglish + 0x14, 1024);

		std::string output(Name.begin(), Name.end());

		if (output == (" ")) {
			return (" ");
		}
		return output;
	}
	bool __fastcall HasFlags(int Flg)
	{
		return driver.read<int>((const uintptr_t)(const uintptr_t)this + oPlayerFlags) & Flg;
	}
	bool __fastcall IsWounded()
	{
		if (!this) return false;
		return HasFlags(64); // wounded
	}
	UINT64 GetSteamID()
	{
		return driver.read<UINT64>((const uintptr_t)(const uintptr_t)this + oSteamID);
	}
	uintptr_t GetClothingItemsList() {
		auto Inventory = driver.read<uintptr_t>((const uintptr_t)this + oPlayerInventory);
		auto Belt = driver.read <uintptr_t>(Inventory + 0x30);
		auto ItemList = driver.read<uintptr_t>(Belt + 0x38);
		return driver.read<uintptr_t>(ItemList + 0x10);
	}
	std::string __fastcall GetClothingItems(uintptr_t ItemsList, int Slot) {
		uintptr_t SlotItem;
		if (Slot == 1) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x20);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 2) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x28);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 3) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x30);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 4) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x38);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 5) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x40);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 6) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x48);
			if (!SlotItem) {
				return (" ");
			}
		}
		else if (Slot == 7) {
			SlotItem = driver.read<uintptr_t>(ItemsList + 0x50);
			if (!SlotItem) {
				return (" ");
			}
		}

		auto Item1Info = driver.read<uintptr_t>(SlotItem + 0x20);
		if (!Item1Info) {
			return (" ");
		}

		auto ItemDisplayName = driver.read<uintptr_t>(Item1Info + 0x28);
		if (!ItemDisplayName) {
			return (" ");
		}

		auto ItemDisplayEnglish = driver.read<uintptr_t>(ItemDisplayName + 0x18);
		if (!ItemDisplayEnglish) {
			return (" ");
		}

		std::wstring Name = driver.read_unicode(ItemDisplayEnglish + 0x14, 1024);

		std::string output(Name.begin(), Name.end());
		if (output == (" ")) {
			return (" ");
		}

		return output;
	}

	uintptr_t GetTransform(int bone)
	{
		uintptr_t player_model = driver.read<uintptr_t>((uintptr_t)this + 0x130);// public Model model;_public class BaseEntity : BaseNetworkable, IProvider, ILerpTarget, IPrefabPreProcess // TypeDefIndex: 8714
		uintptr_t boneTransforms = driver.read<uintptr_t>(player_model + 0x48);//public Transform[] boneTransforms;
		uintptr_t BoneValue = driver.read<uintptr_t>((boneTransforms + (0x20 + (bone * 0x8))));
		return BoneValue;
	}

	void SetVA(const Vector2& VA)
	{
		UINT64 Input = driver.read<UINT64>(Local_Player + oPlayerInput);
		driver.write<Vector2>(Input + 0x3C, VA); //     private Vector3 bodyAngles;
	}

	Vector3 __fastcall GetVelocity()
	{
		auto PlayerModel = driver.read<uintptr_t>((const uintptr_t)this + oPlayerModel);
		return driver.read<Vector3>(PlayerModel + onewVelocity); //     private Vector3 newVelocity;
	}

	WeaponData* __fastcall GetWeaponInfo(int Id)
	{
		auto Inventory = driver.read<uintptr_t>((const uintptr_t)this + oPlayerInventory);
		auto Belt = driver.read<uintptr_t>(Inventory + 0x28);
		auto ItemList = driver.read<uintptr_t>(Belt + 0x38);
		auto Items = driver.read<uintptr_t>(ItemList + 0x10);
		return (WeaponData*)driver.read<uintptr_t>(Items + 0x20 + (Id * 0x8));
	}

	WeaponData* __fastcall GetActiveWeapon()
	{
		int ActUID = driver.read<int>((const uintptr_t)this + oActiveUID);
		if (!ActUID) return nullptr;
		WeaponData* ActiveWeapon;
		for (int i = 0; i < 6; i++)
			if (ActUID == (ActiveWeapon = GetWeaponInfo(i))->GetUID()) {
				return ActiveWeapon;
			}
		return nullptr;
	}
};


class LPlayerBase
{
public:
	BasePlayer* closestPlayer;
	BasePlayer* BasePlayer = nullptr;
	Matrix4x4* pViewMatrix = nullptr;
	bool WorldToScreen(const Vector3& EntityPos, Vector2& ScreenPos)
	{
		if (!pViewMatrix) return false;
		Vector3 TransVec = Vector3(safe_read((ULONG64)&pViewMatrix->_14, float), safe_read((ULONG64)&pViewMatrix->_24, float), safe_read((ULONG64)&pViewMatrix->_34, float));
		Vector3 RightVec = Vector3(safe_read((ULONG64)&pViewMatrix->_11, float), safe_read((ULONG64)&pViewMatrix->_21, float), safe_read((ULONG64)&pViewMatrix->_31, float));
		Vector3 UpVec = Vector3(safe_read((ULONG64)&pViewMatrix->_12, float), safe_read((ULONG64)&pViewMatrix->_22, float), safe_read((ULONG64)&pViewMatrix->_32, float));
		float w = Dot(TransVec, EntityPos) + safe_read((ULONG64)&pViewMatrix->_44, float);
		if (w < 0.098f) return false;
		float y = Dot(UpVec, EntityPos) + safe_read((ULONG64)&pViewMatrix->_42, float);
		float x = Dot(RightVec, EntityPos) + safe_read((ULONG64)&pViewMatrix->_41, float);
		ScreenPos = Vector2((1920 / 2) * (1.f + x / w), (1080 / 2) * (1.f - y / w));
		return true;
	}
};


LPlayerBase LocalPlayer;


void DrawHealthBarScientist(BasePlayer* player, float health) {
	Vector3 head = (player->GetBoneByID(BoneList::head) + Vector3(0, 0.2, 0));
	Vector3 feet = (player->GetBoneByID(BoneList::l_foot) + player->GetBoneByID(BoneList::r_foot)) / 2.f;
	Vector2 tempFeet, tempHead;
	if (LocalPlayer.WorldToScreen(head, tempHead) && LocalPlayer.WorldToScreen(feet, tempFeet)) {
		float height = (tempHead.y - tempFeet.y);
		float width = height / 4.0f;
		float Entity_x = tempFeet.x - width;
		float Entity_y = tempFeet.y;
		float flBoxes = std::ceil(health / 15.f);
		float flX = Entity_x + 4; float flY = Entity_y;
		float flHeight = height / 10.f;
		float flMultiplier = 12 / 360.f; flMultiplier *= flBoxes - 1;
		int G = (255 * health / 150);
		int R = 255 - G;
		RGBA healthcol = { R, G, 0, 255 };
		RGBA col = { 80,80,80,160 };
		DrawFilledRect(flX + 1, flY, 2, flHeight * flBoxes + 1, &healthcol);
	}
}

void DrawHealthBar(BasePlayer* player, float health) {
	Vector3 head = (player->GetBoneByID(BoneList::head) + Vector3(0, 0.2, 0));
	Vector3 feet = (player->GetBoneByID(BoneList::l_foot) + player->GetBoneByID(BoneList::r_foot)) / 2.f;
	Vector2 tempFeet, tempHead;
	if (LocalPlayer.WorldToScreen(head, tempHead) && LocalPlayer.WorldToScreen(feet, tempFeet)) {
		float height = (tempHead.y - tempFeet.y);
		float width = height / 6.0f;
		float Entity_x = tempFeet.x - width;
		float Entity_y = tempFeet.y;
		float flBoxes = std::ceil(health / 10.f);
		float flX = Entity_x + 6; float flY = Entity_y;
		float flHeight = height / 10.f;
		float flMultiplier = 12 / 360.f; flMultiplier *= flBoxes - 1;
		int G = (255 * health / 100);
		int R = 255 - G;
		RGBA healthcol = { R, G, 0, 255 };

		DrawFilledRect(flX + 1, flY, 2, flHeight * flBoxes + 1, &healthcol);
	}
}
static D3DXVECTOR2 calcmyangles(D3DXVECTOR3* LocalPos, D3DXVECTOR3* EnemyPos) {
	D3DXVECTOR2 toWrite;
	D3DXVECTOR3 relative;
	D3DXVec3Subtract(&relative, LocalPos, EnemyPos);
	float magnitude = D3DXVec3Length(&relative);
	double pitch = asin(relative[1] / magnitude);
	double yaw = -atan2(relative[0], -relative[2]);

	yaw = D3DXToDegree(yaw);
	pitch = D3DXToDegree(pitch);

	toWrite.x = pitch;
	toWrite.y = yaw;
	return toWrite;
}

static const char* snaplinee[] = { "Middle Down", "Crosshair", "Middle Top" };
static int selectedsnapline = 0;


double ToRad(double degree)
{
	double pi = 3.14159265359;
	return (degree * (pi / 180));
}
Vector4 ToQuat(Vector3 Euler) {

	double heading = ToRad(Euler.x);
	double attitude = ToRad(Euler.y);
	double bank = ToRad(Euler.z);

	double c1 = cos(heading / 2);
	double s1 = sin(heading / 2);
	double c2 = cos(attitude / 2);
	double s2 = sin(attitude / 2);
	double c3 = cos(bank / 2);
	double s3 = sin(bank / 2);
	double c1c2 = c1 * c2;
	double s1s2 = s1 * s2;
	Vector4 Quat;
	Quat.w = c1c2 * c3 - s1s2 * s3;
	Quat.x = c1c2 * s3 + s1s2 * c3;
	Quat.y = s1 * c2 * c3 + c1 * s2 * s3;
	Quat.z = c1 * s2 * c3 - s1 * c2 * s3;
	Vector4 Quat2;
	Quat2 = { Quat.y, Quat.z, (Quat.x * -1), Quat.w };
	return Quat2;
}


float Calc2D_Distt(const Vector2& Src, const Vector2& Dst) {
	return sqrt(powf(Src.x - Dst.x, 2) + powf(Src.y - Dst.y, 2));
}

float AimFov(BasePlayer* Entity)
{
	Vector2 ScreenPos;
	if (!LocalPlayer.WorldToScreen(Entity->GetBoneByID(BoneList::head), ScreenPos)) return 1000.f;
	return Calc2D_Distt(Vector2(1920 / 2, 1080 / 2), ScreenPos);
}

bool woundedignore = false;
bool sleeperignore = false;
bool teamignoree = false;

bool autoshot = false;
bool drawaimbot = false;
bool aimbot= false;
bool silent = false;
bool psilent = false;
float aimfovv = 60;
float aimsmooth = 1;
bool Predictionn = false;

static const char* Type[] = { "Head", "Body", "Leg" };
static int selectedType = 0;

int Typeee = BoneList::head;

static int ScreenWidths = GetSystemMetrics(SM_CXSCREEN);
static int ScreenHeighth = GetSystemMetrics(SM_CYSCREEN);



float ProjectileSpeed_Normal() {
	std::string held_item = LocalPlayer.BasePlayer->GetActiveWeapon()->GetItemNameS();
	if (held_item == "No Item")                 return 300.0f;
	if (held_item == "rifle.ak")                return 375.0f * 1.0f;
	if (held_item == "rifle.lr300")             return 375.0f * 1.0f;
	if (held_item == "rifle.bolt")              return 656.0f * 1.0f;
	if (held_item == "rifle.l96")               return 1125.0f * 1.0f;
	if (held_item == "rifle.m39")               return 469.0f * 1.0f;
	if (held_item == "rifle.semiauto")          return 375.0f * 1.0f;
	if (held_item == "lmg.m249")                return 488.0f * 1.0f;
	if (held_item == "smg.thompson")            return 300.0f * 1.0f;
	if (held_item == "smg.custom")              return 240.0f * 1.0f;
	if (held_item == "smg.mp5")                 return 240.0f * 1.0f;
	if (held_item == "pistol.python")           return 300.0f * 1.0f;
	if (held_item == "pistol.semi")             return 300.0f * 1.0f;
	if (held_item == "pistol.revolver")         return 300.0f * 1.0f;
	if (held_item == "pistol.m92")              return 300.0f * 1.0f;
	if (held_item == "pistol.eoka")             return 50.0f * 1.55f;
	if (held_item == "pistol.nailgun")          return 50.0f * 1.19f;
	if (held_item == "crossbow")                return 75.0f * 1.19f;
	if (held_item == "bow.compound")            return 100.0f * 1.14f;
	if (held_item == "bow.hunting")             return 50.0f * 1.19f;
	if (held_item == "shotgun.pump")            return 80.0f * 1.0f;
	if (held_item == "shotgun.spas12")          return 80.0f * 1.0f;
	if (held_item == "shotgun.waterpipe")       return 80.0f * 1.0f;
	if (held_item == "shotgun.doublebarrel")    return 80.0f * 1.0f;
	return 300.0f;
}

Vector3 Prediction(const Vector3& LP_Pos, BasePlayer* Player, BoneList Bone, Vector3 BonePos) {
	float Dist = Calc3D_Dist(LP_Pos, BonePos);
	if (Dist > 0.001f) {
		float BulletTime = Dist / ProjectileSpeed_Normal();
		Vector3 vel = Player->GetVelocity();
		Vector3 PredictVel;
		PredictVel.x = vel.x * BulletTime * 0.75f;
		PredictVel.y = vel.y * BulletTime * 0.75f;
		PredictVel.z = vel.z * BulletTime * 0.75f;

		BonePos.x += PredictVel.x;
		BonePos.y += PredictVel.y;
		BonePos.z += PredictVel.z;
		BonePos.y += (4.905f * BulletTime * BulletTime);
	} return BonePos;
}

Vector3 LocalPlayerHead;
Vector3 pLocalPlayerHead;

Vector3 TargetBonePos;
Vector3 pTargetBonePos;

void aimbott(BasePlayer* Player)
{

	if (teamignoree)
	{
		uintptr_t EntitySID = Player->GetSteamID();
		bool Skip = false;
		for (int i = 0; i < LocalPlayer.BasePlayer->GetTeamSize(); i++) {
			uintptr_t CacheSID = LocalPlayer.BasePlayer->IsTeamMate(i);
			if (EntitySID == CacheSID) {
				Skip = true;
			}
		}

		if (Skip) {
			return;
		}
	}
	if (Player->IsDead())
	{
		return;
	}
	if (sleeperignore)
	{
		if (Player->IsSleeping())
		{
			return;
		}
	}
	if (woundedignore)
	{
		if (Player->IsWounded())
		{
			return;
		}
	}

	//Vector2 TargetAngles;
	//LocalPlayer.WorldToScreen(Player->Position2(), TargetAngles);

	//if (GetAsyncKeyState(aimkey))
	//{
	//	if (AimFov(Player) < aimfovv)
	//	{
	//		//UINT64 Input = driver.read<UINT64>(Local_Player + oPlayerInput);
	//		//driver.write<Vector2>(Input + 0x3C, Vector2((TargetAngles.x - 960) / aimsmooth, (TargetAngles.y - 540) / aimsmooth)); //     private Vector3 bodyAngles;
	//		mouse_event(MOUSEEVENTF_MOVE, (TargetAngles.x - ScreenWidths / 2) / aimsmooth, (TargetAngles.y - ScreenHeighth / 2) / aimsmooth, 0, 0);
	//		if (autoshot)
	//		{
	//			Sleep(1);
	//			mouse_event(MOUSEEVENTF_LEFTDOWN, ScreenWidths / 2, ScreenHeighth / 2, 0, 0);
	//			mouse_event(MOUSEEVENTF_LEFTUP, ScreenWidths / 2, ScreenHeighth / 2, 0, 0);
	//		}
	//	}
	//}

	LocalPlayerHead = LocalPlayer.BasePlayer->Position2();
	TargetBonePos = Player->Position2();
		
	if (TargetBonePos.x == 0 || TargetBonePos.y == 0) {
		return;
	}
	if (Predictionn) {
		TargetBonePos = Prediction(LocalPlayerHead, Player, BoneList(head), TargetBonePos);
	}

	Vector3 TargetAngles = CalcAngle(LocalPlayerHead, TargetBonePos);
	Vector2 Angles; Angles.x = TargetAngles.x, Angles.y = TargetAngles.y;
	Normalize(Angles.y, Angles.x);
	if (isnan(Angles.x) || isnan(Angles.y))
	{
		return;
	}



	if (AimFov(Player) < aimfovv)
	{
		if (silent && GetAsyncKeyState(aimkey)) {
			auto eyes = driver.read<uintptr_t>((uintptr_t)LocalPlayer.BasePlayer + oPlayerEyes);
			Vector4 QuatAngles = ToQuat({ Angles.x, Angles.y, 0.0f });
			driver.write<Vector4>(eyes + 0x44, QuatAngles);
		}


		if (aimbot && GetAsyncKeyState(aimkey)) {
			LocalPlayer.BasePlayer->SetVA(Angles / aimsmooth);
		}
	}
}	

void ESP_Player(BasePlayer* Player)
{
	Vector2 tempFeetR, tempFeetL;
	Vector3 ro = Player->GetBoneByID(r_foot);
	if (ro.x == 0 && ro.y == 0 && ro.z == 0) return;
	if (LocalPlayer.WorldToScreen(ro, tempFeetR) && LocalPlayer.WorldToScreen(Player->GetBoneByID(l_foot), tempFeetL))
		Vector2 tempFeetR, tempFeetL;
	if (LocalPlayer.WorldToScreen(Player->GetBoneByID(r_foot), tempFeetR) && LocalPlayer.WorldToScreen(Player->GetBoneByID(l_foot), tempFeetL))
	{
		Vector2 tempHead;
		if (LocalPlayer.WorldToScreen(Player->GetBoneByID(jaw) + Vector3(0.f, 0.16f, 0.f), tempHead))
		{
			Vector2 tempFeet = (tempFeetR + tempFeetL) / 2.f;
			float Entity_h = tempHead.y - tempFeet.y;
			float w = Entity_h / 4;
			float Entity_x = tempFeet.x - w;
			float Entity_y = tempFeet.y;
			float Entity_w = Entity_h / 2;
			wchar_t res[90];
			if (!Player->IsWounded())
			{
				if (teamignore)
				{
					uintptr_t EntitySID = Player->GetSteamID();
					bool Skip = false;
					for (int i = 0; i < LocalPlayer.BasePlayer->GetTeamSize(); i++) {
						uintptr_t CacheSID = LocalPlayer.BasePlayer->IsTeamMate(i);
						if (EntitySID == CacheSID) {
							Skip = true;
						}
					}

					if (Skip) {
						return;
					}
				}
				if (Player->IsDead())
				{
					//Drawalien(1920 / 2, 1080 / 2, 15, true, false, "DEATH");
					return;
				}
				if (sleeper)
				{
					if (Player->IsSleeping())
					{
						return;
					}
				}
				if (box)
				{
					DrawCorneredBox(Entity_x, Entity_y, Entity_w, Entity_h, 1);

				}
				if (skeleton)
				{
					Vector2 BoneHead;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::head), BoneHead);
					Vector2 BoneNeck;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::neck), BoneNeck);
					Vector2 BoneStomach;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::spine1_scale), BoneStomach);
					Vector2 BoneLArm3;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::l_hand), BoneLArm3);
					Vector2 BoneLArm2;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::l_forearm), BoneLArm2);
					Vector2 BoneLArm1;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::l_upperarm), BoneLArm1);
					Vector2 BoneRArm3;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::r_hand), BoneRArm3);
					Vector2 BoneRArm2;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::r_forearm), BoneRArm2);
					Vector2 BoneRArm1;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::r_upperarm), BoneRArm1);
					Vector2 BoneLLeg3;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::r_foot), BoneLLeg3);
					Vector2 BoneLLeg2;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::r_knee), BoneLLeg2);
					Vector2 BoneLLeg1;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::r_hip), BoneLLeg1);
					Vector2 BoneRLeg3;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::l_foot), BoneRLeg3);
					Vector2 BoneRLeg2;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::l_knee), BoneRLeg2);
					Vector2 BoneRLeg1;
					LocalPlayer.WorldToScreen(Player->GetBoneByID(BoneList::l_hip), BoneRLeg1);
					DrawLine(ImVec2(BoneHead.x, BoneHead.y), ImVec2(BoneNeck.x, BoneNeck.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneNeck.x, BoneNeck.y), ImVec2(BoneLArm1.x, BoneLArm1.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneLArm1.x, BoneLArm1.y), ImVec2(BoneLArm2.x, BoneLArm2.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneLArm2.x, BoneLArm2.y), ImVec2(BoneLArm3.x, BoneLArm3.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneNeck.x, BoneNeck.y), ImVec2(BoneRArm1.x, BoneRArm1.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneRArm1.x, BoneRArm1.y), ImVec2(BoneRArm2.x, BoneRArm2.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneRArm2.x, BoneRArm2.y), ImVec2(BoneRArm3.x, BoneRArm3.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneNeck.x, BoneNeck.y), ImVec2(BoneStomach.x, BoneStomach.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneStomach.x, BoneStomach.y), ImVec2(BoneLLeg1.x, BoneLLeg1.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneLLeg1.x, BoneLLeg1.y), ImVec2(BoneLLeg2.x, BoneLLeg2.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneLLeg2.x, BoneLLeg2.y), ImVec2(BoneLLeg3.x, BoneLLeg3.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneStomach.x, BoneStomach.y), ImVec2(BoneRLeg1.x, BoneRLeg1.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneRLeg1.x, BoneRLeg1.y), ImVec2(BoneRLeg2.x, BoneRLeg2.y), ImColor(r, g, b), 1.5f);
					DrawLine(ImVec2(BoneRLeg2.x, BoneRLeg2.y), ImVec2(BoneRLeg3.x, BoneRLeg3.y), ImColor(r, g, b), 1.5f);
				}
				if (snapline)
				{
					if (selectedsnapline == 0)
						DrawLine(ImVec2(1920 / 2, 1080), ImVec2(tempFeet.x, tempFeet.y), ImGui::ColorConvertFloat4ToU32(ImColor(100, 100, 100)), 1.f); // ASAGIDAN
					if (selectedsnapline == 1)
						DrawLine(ImVec2(1920 / 2, 1080 / 2), ImVec2(tempFeet.x, tempFeet.y), ImGui::ColorConvertFloat4ToU32(ImColor(100, 100, 100)), 1.f); // CROSSHAIR
					if (selectedsnapline == 2)
						DrawLine(ImVec2(1920 / 2, 1080 / 1080), ImVec2(tempFeet.x, tempFeet.y), ImGui::ColorConvertFloat4ToU32(ImColor(100, 100, 100)), 1.f); // YUKARIDAN
				}
				if (name)
				{
					std::string name = readstring(Player->GetName());
					DrawString(14, tempFeet.x + 1, (tempFeet.y + 15), &Col.white, true, false, name.c_str());
				}
				if (healthbar)
				{
					DrawHealthBar(Player, Player->Health());
				}
			}
			else
			{
				DrawString(14, tempFeet.x, (tempFeet.y + 25), &Col.red, true, false, "Wounded");
			}
		}

	}
}

void playerinfo(DWORD64 ObjectClass, BasePlayer* Player)
{
	if (sleeper)
	{
		if (Player->IsSleeping())
		{
			return;
		}
	}
	if (teamignore)
	{
		uintptr_t EntitySID = Player->GetSteamID();
		bool Skip = false;
		for (int i = 0; i < LocalPlayer.BasePlayer->GetTeamSize(); i++) {
			uintptr_t CacheSID = LocalPlayer.BasePlayer->IsTeamMate(i);
			if (EntitySID == CacheSID) {
				Skip = true;
			}
		}

		if (Skip) {
			return;
		}
	}
	if (Player->IsDead())
	{
		//Drawalien(1920 / 2, 1080 / 2, 15, true, false, "DEATH");
		return;
	}


	std::string weapon = Player->GetBeltItems(Player->GetItemsList(), 1);
	std::string weapon2 = Player->GetBeltItems(Player->GetItemsList(), 2);
	std::string weapon3 = Player->GetBeltItems(Player->GetItemsList(), 3);
	std::string weapon4 = Player->GetBeltItems(Player->GetItemsList(), 4);
	std::string weapon5 = Player->GetBeltItems(Player->GetItemsList(), 5);
	std::string weapon6 = Player->GetBeltItems(Player->GetItemsList(), 6);

	std::string armor = Player->GetClothingItems(Player->GetClothingItemsList(), 1);
	std::string armor2 = Player->GetClothingItems(Player->GetClothingItemsList(), 2);
	std::string armor3 = Player->GetClothingItems(Player->GetClothingItemsList(), 3);
	std::string armor4 = Player->GetClothingItems(Player->GetClothingItemsList(), 4);
	std::string armor5 = Player->GetClothingItems(Player->GetClothingItemsList(), 5);
	std::string armor6 = Player->GetClothingItems(Player->GetClothingItemsList(), 6);
	std::string armor7 = Player->GetClothingItems(Player->GetClothingItemsList(), 7);

	std::string name = readstring(Player->GetName());
	std::string healthhh(std::to_string(Player->Health()));


	ImGui::SetNextWindowSize(ImVec2(200, 280));
	ImGui::Begin(skCrypt("PLAYERINFO"), NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);

	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text("Name:");
	ImGui::SameLine();
	ImGui::Text(name.c_str());
	ImGui::SameLine(111);
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text("Health:");
	ImGui::SameLine();
	int Ger = (255 * Player->Health() / 100);
	int Rer = 255 - Ger;
	ImGui::TextColored(ImColor(Rer, Ger, 0), (healthhh.c_str()));



	ImGui::Separator();
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(weapon.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(weapon2.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(weapon3.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(weapon4.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(weapon5.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(weapon6.c_str());
	ImGui::Separator();
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(armor.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(armor2.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(armor3.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(armor4.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(armor5.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(armor6.c_str());
	ImGui::Text(""); ImGui::SameLine();
	ImGui::Text(armor7.c_str());

	ImGui::End();
}


void ESP_Scientist(BasePlayer* Player)
{
	Vector2 tempFeetR, tempFeetL;
	Vector3 ro = Player->GetBoneByID(r_foot);
	if (ro.x == 0 && ro.y == 0 && ro.z == 0) return;
	if (LocalPlayer.WorldToScreen(ro, tempFeetR) && LocalPlayer.WorldToScreen(Player->GetBoneByID(l_foot), tempFeetL))
		Vector2 tempFeetR, tempFeetL;
	if (LocalPlayer.WorldToScreen(Player->GetBoneByID(r_foot), tempFeetR) && LocalPlayer.WorldToScreen(Player->GetBoneByID(l_foot), tempFeetL))
	{
		Vector2 tempHead;
		if (LocalPlayer.WorldToScreen(Player->GetBoneByID(jaw) + Vector3(0.f, 0.16f, 0.f), tempHead))
		{
			Vector2 tempFeet = (tempFeetR + tempFeetL) / 2.f;
			float Entity_h = tempHead.y - tempFeet.y;
			float w = Entity_h / 4;
			float Entity_x = tempFeet.x - w;
			float Entity_y = tempFeet.y;
			float Entity_w = Entity_h / 2;

			DrawCorneredBoxScientist(Entity_x, Entity_y, Entity_w, Entity_h, 1);

			DrawHealthBarScientist(Player, Player->Health());
		}
	}
}

bool showdistancee = false;
void ESP_Resource(DWORD64 ObjectClass, bool showDistance, float drawDistance, const wchar_t* targettext, RGBA* col) {
	uintptr_t gameObject = driver.read<uintptr_t>(ObjectClass + 0x30);
	uintptr_t transform = driver.read<uintptr_t>(gameObject + 0x8);
	uintptr_t vector = driver.read<uintptr_t>(transform + 0x38);
	Vector3 game_Pos = driver.read<Vector3>(vector + 0x90);
	Vector2 screen_Pos, BoxPos;
	if (LocalPlayer.WorldToScreen(game_Pos, screen_Pos) && LocalPlayer.WorldToScreen(game_Pos + Vector3(0.f, 1.f, 0.f), BoxPos)) {

		if ((int)Calc3D_Dist(LocalPlayer.BasePlayer->GetBoneByID(r_foot), game_Pos) <= drawDistance) {
			int distation = (int)Calc3D_Dist(LocalPlayer.BasePlayer->GetBoneByID(head), game_Pos);
			char text[0x100];
			sprintf(text, skCrypt("[%d m]"), distation);
			std::wstring ws(targettext);
			std::string str(ws.begin(), ws.end());
			DrawString(14, screen_Pos.x, screen_Pos.y + 15, col, true, true, str.c_str());
			if (showdistancee) {
				DrawString(14, screen_Pos.x, screen_Pos.y, col, true, true, text);
			}
		}
	}
}


bool GetKey(int key)
{
	realkey = key;
	return true;
}
void ChangeKey(void* blank)
{
	keystatus = 1;
	while (true)
	{
		for (int i = 0; i < 0x87; i++)
		{
			if (GetKeyState(i) & 0x8000)
			{
				aimkey = i;
				keystatus = 0;
				return;
			}
		}
	}
}
static const char* keyNames[] = {
	"",
	"Left Mouse",
	"Right Mouse",
	"Cancel",
	"Middle Mouse",
	"Mouse 5",
	"Mouse 4",
	"",
	"Backspace",
	"Tab",
	"",
	"",
	"Clear",
	"Enter",
	"",
	"",
	"Shift",
	"Control",
	"Alt",
	"Pause",
	"Caps",
	"",
	"",
	"",
	"",
	"",
	"",
	"Escape",
	"",
	"",
	"",
	"",
	"Space",
	"Page Up",
	"Page Down",
	"End",
	"Home",
	"Left",
	"Up",
	"Right",
	"Down",
	"",
	"",
	"",
	"Print",
	"Insert",
	"Delete",
	"",
	"0",
	"1",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"A",
	"B",
	"C",
	"D",
	"E",
	"F",
	"G",
	"H",
	"I",
	"J",
	"K",
	"L",
	"M",
	"N",
	"O",
	"P",
	"Q",
	"R",
	"S",
	"T",
	"U",
	"V",
	"W",
	"X",
	"Y",
	"Z",
	"",
	"",
	"",
	"",
	"",
	"Numpad 0",
	"Numpad 1",
	"Numpad 2",
	"Numpad 3",
	"Numpad 4",
	"Numpad 5",
	"Numpad 6",
	"Numpad 7",
	"Numpad 8",
	"Numpad 9",
	"Multiply",
	"Add",
	"",
	"Subtract",
	"Decimal",
	"Divide",
	"F1",
	"F2",
	"F3",
	"F4",
	"F5",
	"F6",
	"F7",
	"F8",
	"F9",
	"F10",
	"F11",
	"F12",
};
static bool Items_ArrayGetter(void* data, int idx, const char** out_text)
{
	const char* const* items = (const char* const*)data;
	if (out_text)
		*out_text = items[idx];
	return true;
}
void HotkeyButton(int aimkey, void* changekey, int status)
{
	const char* preview_value = NULL;
	if (aimkey >= 0 && aimkey < IM_ARRAYSIZE(keyNames))
		Items_ArrayGetter(keyNames, aimkey, &preview_value);

	std::string aimkeys;
	if (preview_value == NULL)
		aimkeys = skCrypt("Select Key");
	else
		aimkeys = preview_value;

	if (status == 1)
	{
		aimkeys = skCrypt("Press key to bind");
	}
	if (ImGui::Button(aimkeys.c_str(), ImVec2(125, 20)))
	{
		if (status == 0)
		{
			CreateThread(0, 0, (LPTHREAD_START_ROUTINE)changekey, nullptr, 0, nullptr);
		}
	}
}