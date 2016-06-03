#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t1972007546 * ___rb_2;
	// UnityEngine.UI.Text PlayerController::scoreTxt
	Text_t3286458198 * ___scoreTxt_3;
	// UnityEngine.UI.Text PlayerController::winTxt
	Text_t3286458198 * ___winTxt_4;
	// System.Single PlayerController::speed
	float ___speed_5;
	// System.Int32 PlayerController::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_2)); }
	inline Rigidbody_t1972007546 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t1972007546 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_scoreTxt_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___scoreTxt_3)); }
	inline Text_t3286458198 * get_scoreTxt_3() const { return ___scoreTxt_3; }
	inline Text_t3286458198 ** get_address_of_scoreTxt_3() { return &___scoreTxt_3; }
	inline void set_scoreTxt_3(Text_t3286458198 * value)
	{
		___scoreTxt_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreTxt_3, value);
	}

	inline static int32_t get_offset_of_winTxt_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___winTxt_4)); }
	inline Text_t3286458198 * get_winTxt_4() const { return ___winTxt_4; }
	inline Text_t3286458198 ** get_address_of_winTxt_4() { return &___winTxt_4; }
	inline void set_winTxt_4(Text_t3286458198 * value)
	{
		___winTxt_4 = value;
		Il2CppCodeGenWriteBarrier(&___winTxt_4, value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
