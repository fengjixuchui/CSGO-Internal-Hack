﻿// CTHackFramework 														      
//	A framework for general game hacking								      
// Copyright © 2019 Celestial Tech All rights reserved.
//
// The MIT License (MIT)
// Copyright (c) 2019 Celestial Tech
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this softwareand associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
// 
// The above copyright noticeand this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once
#include <cstdint>

// 2019-05-17 09:28:31.378496100 UTC

namespace hazedumper {
	constexpr ::std::int64_t timestamp = 1558085311;
	namespace netvars {
		constexpr ::std::ptrdiff_t cs_gamerules_data = 0x0;
		constexpr ::std::ptrdiff_t m_ArmorValue = 0xB340;
		constexpr ::std::ptrdiff_t m_Collision = 0x31C;
		constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
		constexpr ::std::ptrdiff_t m_Local = 0x2FBC;
		constexpr ::std::ptrdiff_t m_MoveType = 0x25C;
		constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31B4;
		constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31B0;
		constexpr ::std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1320;
		constexpr ::std::ptrdiff_t m_SurvivalRules = 0xCF8;
		constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x302C;
		constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3038;
		constexpr ::std::ptrdiff_t m_angEyeAnglesX = 0xB344;
		constexpr ::std::ptrdiff_t m_angEyeAnglesY = 0xB348;
		constexpr ::std::ptrdiff_t m_bBombPlanted = 0x99D;
		constexpr ::std::ptrdiff_t m_bFreezePeriod = 0x20;
		constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x392C;
		constexpr ::std::ptrdiff_t m_bHasDefuser = 0xB350;
		constexpr ::std::ptrdiff_t m_bHasHelmet = 0xB334;
		constexpr ::std::ptrdiff_t m_bInReload = 0x3285;
		constexpr ::std::ptrdiff_t m_bIsDefusing = 0x3918;
		constexpr ::std::ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
		constexpr ::std::ptrdiff_t m_bIsScoped = 0x3910;
		constexpr ::std::ptrdiff_t m_bIsValveDS = 0x75;
		constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
		constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
		constexpr ::std::ptrdiff_t m_bStartedArming = 0x33D0;
		constexpr ::std::ptrdiff_t m_clrRender = 0x70;
		constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
		constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3310;
		constexpr ::std::ptrdiff_t m_fFlags = 0x104;
		constexpr ::std::ptrdiff_t m_flC4Blow = 0x2990;
		constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x29AC;
		constexpr ::std::ptrdiff_t m_flDefuseLength = 0x29A8;
		constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31C0;
		constexpr ::std::ptrdiff_t m_flFlashDuration = 0xA3F4;
		constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0xA3F0;
		constexpr ::std::ptrdiff_t m_flLastBoneSetupTime = 0x2924;
		constexpr ::std::ptrdiff_t m_flLowerBodyYawTarget = 0x3A78;
		constexpr ::std::ptrdiff_t m_flNextAttack = 0x2D70;
		constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3218;
		constexpr ::std::ptrdiff_t m_flSimulationTime = 0x268;
		constexpr ::std::ptrdiff_t m_flTimerLength = 0x2994;
		constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2EF8;
		constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2DF8;
		constexpr ::std::ptrdiff_t m_hObserverTarget = 0x3388;
		constexpr ::std::ptrdiff_t m_hOwner = 0x29CC;
		constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
		constexpr ::std::ptrdiff_t m_iAccountID = 0x2FC8;
		constexpr ::std::ptrdiff_t m_iClip1 = 0x3244;
		constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
		constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
		constexpr ::std::ptrdiff_t m_iCrosshairId = 0xB3AC;
		constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FAC;
		constexpr ::std::ptrdiff_t m_iFOV = 0x31E4;
		constexpr ::std::ptrdiff_t m_iFOVStart = 0x31E8;
		constexpr ::std::ptrdiff_t m_iGlowIndex = 0xA40C;
		constexpr ::std::ptrdiff_t m_iHealth = 0x100;
		constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FAA;
		constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FC0;
		constexpr ::std::ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
		constexpr ::std::ptrdiff_t m_iObserverMode = 0x3374;
		constexpr ::std::ptrdiff_t m_iShotsFired = 0xA380;
		constexpr ::std::ptrdiff_t m_iState = 0x3238;
		constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
		constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
		constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31B8;
		constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31BC;
		constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31C4;
		constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
		constexpr ::std::ptrdiff_t m_nTickBase = 0x342C;
		constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
		constexpr ::std::ptrdiff_t m_szCustomName = 0x303C;
		constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35B0;
		constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31D8;
		constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
		constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
		constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
		constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3020;
	} // namespace netvars
	namespace signatures {
		constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D28;
		constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
		constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D24;
		constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
		constexpr ::std::ptrdiff_t convar_name_hash_table = 0x2F0F8;
		constexpr ::std::ptrdiff_t dwClientState = 0x58BCFC;
		constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
		constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D40;
		constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
		constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
		constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
		constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52B8;
		constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
		constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D88;
		constexpr ::std::ptrdiff_t dwEntityList = 0x4D03AE4;
		constexpr ::std::ptrdiff_t dwForceAttack = 0x31351DC;
		constexpr ::std::ptrdiff_t dwForceAttack2 = 0x31351E8;
		constexpr ::std::ptrdiff_t dwForceBackward = 0x3135194;
		constexpr ::std::ptrdiff_t dwForceForward = 0x3135200;
		constexpr ::std::ptrdiff_t dwForceJump = 0x51A7050;
		constexpr ::std::ptrdiff_t dwForceLeft = 0x3135188;
		constexpr ::std::ptrdiff_t dwForceRight = 0x31351AC;
		constexpr ::std::ptrdiff_t dwGameDir = 0x631F70;
		constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x521939C;
		constexpr ::std::ptrdiff_t dwGetAllClasses = 0xD1698C;
		constexpr ::std::ptrdiff_t dwGlobalVars = 0x58BA00;
		constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x5243EB0;
		constexpr ::std::ptrdiff_t dwInput = 0x514EB30;
		constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x8C7DE4;
		constexpr ::std::ptrdiff_t dwLocalPlayer = 0xCF1A3C;
		constexpr ::std::ptrdiff_t dwMouseEnable = 0xCF7588;
		constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xCF7558;
		constexpr ::std::ptrdiff_t dwPlayerResource = 0x313352C;
		constexpr ::std::ptrdiff_t dwRadarBase = 0x5138844;
		constexpr ::std::ptrdiff_t dwSensitivity = 0xCF7424;
		constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xCF73F8;
		constexpr ::std::ptrdiff_t dwSetClanTag = 0x896A0;
		constexpr ::std::ptrdiff_t dwViewMatrix = 0x4CF5514;
		constexpr ::std::ptrdiff_t dwWeaponTable = 0x514F5F4;
		constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x323C;
		constexpr ::std::ptrdiff_t dwYawPtr = 0xCF71E8;
		constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xCFC428;
		constexpr ::std::ptrdiff_t dwbSendPackets = 0xD277A;
		constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA6030;
		constexpr ::std::ptrdiff_t force_update_spectator_glow = 0x393652;
		constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3E9EC;
		constexpr ::std::ptrdiff_t is_c4_owner = 0x39F980;
		constexpr ::std::ptrdiff_t m_bDormant = 0xED;
		constexpr ::std::ptrdiff_t m_pStudioHdr = 0x294C;
		constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x5138AF0;
		constexpr ::std::ptrdiff_t m_yawClassPtr = 0xCF71E8;
		constexpr ::std::ptrdiff_t model_ambient_min = 0x58ED1C;
		constexpr ::std::ptrdiff_t set_abs_angles = 0x1CA9B0;
		constexpr ::std::ptrdiff_t set_abs_origin = 0x1CA7F0;
	} // namespace signatures
} // namespace hazedumper


// 所有武器的物品ID
namespace WeaponID
{
	const INT DesertEagle = 1;
	const INT DualBarettas = 2;
	const INT FiveSeven = 3;
	const INT Glock = 4;
	const INT AK47 = 7;
	const INT AUG = 8;
	const INT AWP = 9;
	const INT FAMAS = 10;
	const INT G3SG1 = 11;
	const INT GailAR = 13;
	const INT M249 = 14;
	const INT M4A4 = 16;
	const INT MAC10 = 17;
	const INT P90 = 19;
	const INT MPSSD = 23;
	const INT UMP45 = 24;
	const INT XM1014 = 25;
	const INT PPBizon = 26;
	const INT MAG7 = 27;
	const INT Negev = 28;
	const INT SawedOff = 29;
	const INT Tec9 = 30;
	const INT Zeus = 31;
	const INT P2000 = 32;
	const INT MP7 = 33;
	const INT MP9 = 34;
	const INT Nova = 35;
	const INT P250 = 36;
	const INT SCAR20 = 38;
	const INT SG553 = 39;
	const INT SSG08 = 40;
	const INT Knife1 = 41;
	const INT Knife2 = 42;
	const INT Flashbang = 43;
	const INT HE = 44;
	const INT SG = 45;
	const INT Molotov = 46;
	const INT Decoy = 47;
	const INT IG = 48;
	const INT C4 = 49;
	const INT Knife3 = 59;
	const INT M4A1S = 60;
	const INT USPS = 61;
	const INT CZ75Auto = 63;
	const INT R8Revolver = 64;
}
