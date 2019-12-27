#pragma once

#include "../deps/alt-math/alt-math.h"
#include "../entities/IPlayer.h"
#include "../Ref.h"

#include "CEvent.h"

namespace alt
{
	class IPlayer;

	class CExplosionEvent : public CEvent
	{
	public:
		enum class ExplosionType : int8_t
		{
			GRENADE,
			GRENADELAUNCHER,
			STICKYBOMB,
			MOLOTOV,
			ROCKET,
			TANKSHELL,
			HI_OCTANE,
			CAR,
			PLANE,
			PETROL_PUMP,
			BIKE,
			DIR_STEAM,
			DIR_FLAME,
			DIR_WATER_HYDRANT,
			DIR_GAS_CANISTER,
			BOAT,
			SHIP_DESTROY,
			TRUCK,
			BULLET,
			SMOKEGRENADELAUNCHER,
			SMOKEGRENADE,
			BZGAS,
			FLARE,
			GAS_CANISTER,
			EXTINGUISHER,
			PROGRAMMABLEAR,
			TRAIN,
			BARREL,
			PROPANE,
			BLIMP,
			DIR_FLAME_EXPLODE,
			TANKER,
			PLANE_ROCKET,
			VEHICLE_BULLET,
			GAS_TANK,
			FIREWORK,
			SNOWBALL,
			PROXMINE,
			VALKYRIE_CANNON,

			UNKNOWN = -1
		};

		CExplosionEvent(Ref<IPlayer> _source, ExplosionType _explosionType, Position _position, uint32_t _explosionFX) :
			CEvent(Type::EXPLOSION_EVENT),
			source(_source),
			explosionType(_explosionType),
			position(_position),
			explosionFX(_explosionFX)
		{

		}

		Ref<IPlayer> GetSource() const { return source; }
		ExplosionType GetExplosionType() const { return explosionType; }
		Position GetPosition() const { return position; }
		uint32_t GetExplosionFX() const { return explosionFX; }

	private:
		Ref<IPlayer> source;
		ExplosionType explosionType;
		Position position;
		uint32_t explosionFX;
	};
}