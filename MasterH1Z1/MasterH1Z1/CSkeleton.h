#pragma once
#include "Vector3.h"

#include <d3d9.h>
#include <d3dx9.h>
#include <d3dx9math.h>
#pragma comment(lib, "d3dx9.lib")

class CBone
{
public:
	char pad_0000[528]; //0x0000
	D3DXVECTOR3 m_headBone; //0x0210
	char pad_021C[48]; //0x021C
}; //Size: 0x024C

class CSkeleton
{
public:
	char pad_0000[40]; //0x0000
	class CBone* cBone; //0x0028
}; //Size: 0x0030

class CStart
{
public:
	char pad_0000[80]; //0x0000
	class CSkeleton* cSkeleton; //0x0050
}; //Size: 0x0058


enum Bone
{
	CharacterWorldSpaceTM = 0,
	Male = 1,
	worldRoot = 2,
	trajectory = 3,
	COG = 4,
	L_hip = 5,
	L_knee = 6,
	L_ankle = 7,
	L_ball = 8,
	L_toe = 9,
	L_kneeArmor = 10,
	L_shinHolster = 11,
	L_hipHolster = 12,
	spineLower = 13,
	spineMiddle = 14,
	spineUpper = 15,
	neck = 16,
	head = 17,
	jaw = 18,
	tongue = 19,
	L_lip_lower = 20,
	L_lip_corner = 21,
	R_lip_corner = 22,
	R_lip_lower = 23,
	L_lip_upper = 24,
	L_cheek = 25,
	L_brow = 26,
	L_eye = 27,
	L_eyelid_lower = 28,
	L_eyelid_upper = 29,
	R_eyelid_upper = 30,
	R_eyelid_lower = 31,
	R_eye = 32,
	R_brow = 33,
	R_cheek = 34,
	R_lip_upper = 35,
	hat = 36,
	glasses = 37,
	headset = 38,
	ponytailA_1 = 39,
	ponytailA_2 = 40,
	ponytailB_1 = 41,
	ponytailB_2 = 42,
	L_clavicle = 43,
	L_shoulder = 44,
	L_shoulderRoll = 45,
	L_elbow = 46,
	L_forearm = 47,
	L_wristAttachment = 48,
	L_wrist = 49,
	L_thumbA = 50,
	L_thumbB = 51,
	L_thumbC = 52,
	L_indexA = 53,
	L_indexB = 54,
	L_indexC = 55,
	L_middleA = 56,
	L_middleB = 57,
	L_middleC = 58,
	L_ringA = 59,
	L_ringB = 60,
	L_ringC = 61,
	L_pinkyA = 62,
	L_pinkyB = 63,
	L_pinkyC = 64,
	L_weapon = 65,
	L_shoulderArmor = 66,
	R_clavicle = 67,
	R_shoulder = 68,
	R_shoulderRoll = 69,
	R_elbow = 70,
	R_forearm = 71,
	R_wristAttachment = 72,
	R_wrist = 73,
	R_thumbA = 74,
	R_thumbB = 75,
	R_thumbC = 76,
	R_indexA = 77,
	R_indexB = 78,
	R_indexC = 79,
	R_middleA = 80,
	R_middleB = 81,
	R_middleC = 82,
	R_ringA = 83,
	R_ringB = 84,
	R_ringC = 85,
	R_pinkyA = 86,
	R_pinkyB = 87,
	R_pinkyC = 88,
	R_weapon = 89,
	R_shoulderArmor = 90,
	R_longWeapon_2 = 91,
	R_longWeapon_1 = 92,
	R_longWeapon_3 = 93,
	backpackUpper = 94,
	bedroll_top = 95,
	backpackLower = 96,
	bedroll_bottom = 97,
	chestPack_Armor = 98,
	L_breast = 99,
	R_breast = 100,
	stomachFat = 101,
	R_hip = 102,
	R_knee = 103,
	R_ankle = 104,
	R_ball = 105,
	R_toe = 106,
	R_kneeArmor = 107,
	R_shinHolster = 108,
	R_hipHolster = 109,
	R_shortWeapon_1 = 110,
	R_shortWeapon_2 = 111,
	R_shortWeapon_3 = 112,
	L_shortWeapon_1 = 113,
	L_shortWeapon_2 = 114,
	L_shortWeapon_3 = 115,
	L_longCoat_main = 116,
	L_longCoat_midRear = 117,
	L_longCoat_bottomRear = 118,
};
