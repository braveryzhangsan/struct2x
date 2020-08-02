#ifndef __STRUCT_MACRO_H__
#define __STRUCT_MACRO_H__


#define EXPAND(args) args

#define SERIALIZATION_0(p) convert(#p, p)
#define SERIALIZATION_1(p) SERIALIZATION_0(p)
#define SERIALIZATION_2(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_1(__VA_ARGS__))
#define SERIALIZATION_3(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_2(__VA_ARGS__))
#define SERIALIZATION_4(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_3(__VA_ARGS__))
#define SERIALIZATION_5(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_4(__VA_ARGS__))
#define SERIALIZATION_6(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_5(__VA_ARGS__))
#define SERIALIZATION_7(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_6(__VA_ARGS__))
#define SERIALIZATION_8(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_7(__VA_ARGS__))
#define SERIALIZATION_9(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_8(__VA_ARGS__))
#define SERIALIZATION_10(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_9(__VA_ARGS__))
#define SERIALIZATION_11(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_10(__VA_ARGS__))
#define SERIALIZATION_12(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_11(__VA_ARGS__))
#define SERIALIZATION_13(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_12(__VA_ARGS__))
#define SERIALIZATION_14(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_13(__VA_ARGS__))
#define SERIALIZATION_15(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_14(__VA_ARGS__))
#define SERIALIZATION_16(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_15(__VA_ARGS__))
#define SERIALIZATION_17(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_16(__VA_ARGS__))
#define SERIALIZATION_18(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_17(__VA_ARGS__))
#define SERIALIZATION_19(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_18(__VA_ARGS__))
#define SERIALIZATION_20(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_19(__VA_ARGS__))
#define SERIALIZATION_21(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_20(__VA_ARGS__))
#define SERIALIZATION_22(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_21(__VA_ARGS__))
#define SERIALIZATION_23(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_22(__VA_ARGS__))
#define SERIALIZATION_24(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_23(__VA_ARGS__))
#define SERIALIZATION_25(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_24(__VA_ARGS__))
#define SERIALIZATION_26(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_25(__VA_ARGS__))
#define SERIALIZATION_27(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_26(__VA_ARGS__))
#define SERIALIZATION_28(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_27(__VA_ARGS__))
#define SERIALIZATION_29(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_28(__VA_ARGS__))
#define SERIALIZATION_30(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_29(__VA_ARGS__))
#define SERIALIZATION_31(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_30(__VA_ARGS__))
#define SERIALIZATION_32(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_31(__VA_ARGS__))
#define SERIALIZATION_33(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_32(__VA_ARGS__))
#define SERIALIZATION_34(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_33(__VA_ARGS__))
#define SERIALIZATION_35(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_34(__VA_ARGS__))
#define SERIALIZATION_36(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_35(__VA_ARGS__))
#define SERIALIZATION_37(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_36(__VA_ARGS__))
#define SERIALIZATION_38(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_37(__VA_ARGS__))
#define SERIALIZATION_39(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_38(__VA_ARGS__))
#define SERIALIZATION_40(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_39(__VA_ARGS__))
#define SERIALIZATION_41(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_40(__VA_ARGS__))
#define SERIALIZATION_42(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_41(__VA_ARGS__))
#define SERIALIZATION_43(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_42(__VA_ARGS__))
#define SERIALIZATION_44(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_43(__VA_ARGS__))
#define SERIALIZATION_45(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_44(__VA_ARGS__))
#define SERIALIZATION_46(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_45(__VA_ARGS__))
#define SERIALIZATION_47(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_46(__VA_ARGS__))
#define SERIALIZATION_48(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_47(__VA_ARGS__))
#define SERIALIZATION_49(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_48(__VA_ARGS__))
#define SERIALIZATION_50(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_49(__VA_ARGS__))
#define SERIALIZATION_51(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_50(__VA_ARGS__))
#define SERIALIZATION_52(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_51(__VA_ARGS__))
#define SERIALIZATION_53(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_52(__VA_ARGS__))
#define SERIALIZATION_54(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_53(__VA_ARGS__))
#define SERIALIZATION_55(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_54(__VA_ARGS__))
#define SERIALIZATION_56(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_55(__VA_ARGS__))
#define SERIALIZATION_57(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_56(__VA_ARGS__))
#define SERIALIZATION_58(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_57(__VA_ARGS__))
#define SERIALIZATION_59(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_58(__VA_ARGS__))
#define SERIALIZATION_60(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_59(__VA_ARGS__))
#define SERIALIZATION_61(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_60(__VA_ARGS__))
#define SERIALIZATION_62(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_61(__VA_ARGS__))
#define SERIALIZATION_63(p, ...) SERIALIZATION_0(p) . EXPAND(SERIALIZATION_62(__VA_ARGS__))


#define MAKE_CALL(t, f) t . f

#define PARAMS_COUNT(TAG, _63,_62,_61,_60,_59,_58,_57,_56,_55,_54,_53,_52,_51,\
                        _50,_49,_48,_47,_46,_45,_44,_43,_42,_41,\
                        _40,_39,_38,_37,_36,_35,_34,_33,_32,_31,\
                        _30,_29,_28,_27,_26,_25,_24,_23,_22,_21,\
                        _20,_19,_18,_17,_16,_15,_14,_13,_12,_11,\
                        _10,_9,_8,_7,_6,_5,_4,_3,_2,_1,N,...) TAG##N

#define SERIALIZATION(t, ...) MAKE_CALL(t, EXPAND(PARAMS_COUNT(SERIALIZATION, __VA_ARGS__, \
                        _63,_62,_61,_60,_59,_58,_57,_56,_55,_54,_53,_52,_51,\
                        _50,_49,_48,_47,_46,_45,_44,_43,_42,_41,\
                        _40,_39,_38,_37,_36,_35,_34,_33,_32,_31,\
                        _30,_29,_28,_27,_26,_25,_24,_23,_22,_21,\
                        _20,_19,_18,_17,_16,_15,_14,_13,_12,_11,\
                        _10,_9,_8,_7,_6,_5,_4,_3,_2,_1))(__VA_ARGS__))


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define NI_EXPAND(args) args

#define NISERIALIZATION_0(c, p) convert(#p, c.p)
#define NISERIALIZATION_1(c, p) NISERIALIZATION_0(c, p)
#define NISERIALIZATION_2(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_1(c, __VA_ARGS__))
#define NISERIALIZATION_3(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_2(c, __VA_ARGS__))
#define NISERIALIZATION_4(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_3(c, __VA_ARGS__))
#define NISERIALIZATION_5(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_4(c, __VA_ARGS__))
#define NISERIALIZATION_6(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_5(c, __VA_ARGS__))
#define NISERIALIZATION_7(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_6(c, __VA_ARGS__))
#define NISERIALIZATION_8(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_7(c, __VA_ARGS__))
#define NISERIALIZATION_9(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_8(c, __VA_ARGS__))
#define NISERIALIZATION_10(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_9(c, __VA_ARGS__))
#define NISERIALIZATION_11(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_10(c, __VA_ARGS__))
#define NISERIALIZATION_12(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_11(c, __VA_ARGS__))
#define NISERIALIZATION_13(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_12(c, __VA_ARGS__))
#define NISERIALIZATION_14(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_13(c, __VA_ARGS__))
#define NISERIALIZATION_15(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_14(c, __VA_ARGS__))
#define NISERIALIZATION_16(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_15(c, __VA_ARGS__))
#define NISERIALIZATION_17(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_16(c, __VA_ARGS__))
#define NISERIALIZATION_18(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_17(c, __VA_ARGS__))
#define NISERIALIZATION_19(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_18(c, __VA_ARGS__))
#define NISERIALIZATION_20(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_19(c, __VA_ARGS__))
#define NISERIALIZATION_21(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_20(c, __VA_ARGS__))
#define NISERIALIZATION_22(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_21(c, __VA_ARGS__))
#define NISERIALIZATION_23(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_22(c, __VA_ARGS__))
#define NISERIALIZATION_24(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_23(c, __VA_ARGS__))
#define NISERIALIZATION_25(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_24(c, __VA_ARGS__))
#define NISERIALIZATION_26(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_25(c, __VA_ARGS__))
#define NISERIALIZATION_27(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_26(c, __VA_ARGS__))
#define NISERIALIZATION_28(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_27(c, __VA_ARGS__))
#define NISERIALIZATION_29(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_28(c, __VA_ARGS__))
#define NISERIALIZATION_30(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_29(c, __VA_ARGS__))
#define NISERIALIZATION_31(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_30(c, __VA_ARGS__))
#define NISERIALIZATION_32(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_31(c, __VA_ARGS__))
#define NISERIALIZATION_33(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_32(c, __VA_ARGS__))
#define NISERIALIZATION_34(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_33(c, __VA_ARGS__))
#define NISERIALIZATION_35(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_34(c, __VA_ARGS__))
#define NISERIALIZATION_36(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_35(c, __VA_ARGS__))
#define NISERIALIZATION_37(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_36(c, __VA_ARGS__))
#define NISERIALIZATION_38(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_37(c, __VA_ARGS__))
#define NISERIALIZATION_39(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_38(c, __VA_ARGS__))
#define NISERIALIZATION_40(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_39(c, __VA_ARGS__))
#define NISERIALIZATION_41(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_40(c, __VA_ARGS__))
#define NISERIALIZATION_42(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_41(c, __VA_ARGS__))
#define NISERIALIZATION_43(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_42(c, __VA_ARGS__))
#define NISERIALIZATION_44(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_43(c, __VA_ARGS__))
#define NISERIALIZATION_45(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_44(c, __VA_ARGS__))
#define NISERIALIZATION_46(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_45(c, __VA_ARGS__))
#define NISERIALIZATION_47(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_46(c, __VA_ARGS__))
#define NISERIALIZATION_48(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_47(c, __VA_ARGS__))
#define NISERIALIZATION_49(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_48(c, __VA_ARGS__))
#define NISERIALIZATION_50(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_49(c, __VA_ARGS__))
#define NISERIALIZATION_51(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_50(c, __VA_ARGS__))
#define NISERIALIZATION_52(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_51(c, __VA_ARGS__))
#define NISERIALIZATION_53(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_52(c, __VA_ARGS__))
#define NISERIALIZATION_54(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_53(c, __VA_ARGS__))
#define NISERIALIZATION_55(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_54(c, __VA_ARGS__))
#define NISERIALIZATION_56(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_55(c, __VA_ARGS__))
#define NISERIALIZATION_57(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_56(c, __VA_ARGS__))
#define NISERIALIZATION_58(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_57(c, __VA_ARGS__))
#define NISERIALIZATION_59(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_58(c, __VA_ARGS__))
#define NISERIALIZATION_60(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_59(c, __VA_ARGS__))
#define NISERIALIZATION_61(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_60(c, __VA_ARGS__))
#define NISERIALIZATION_62(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_61(c, __VA_ARGS__))
#define NISERIALIZATION_63(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_62(c, __VA_ARGS__))


#define NI_MAKE_CALL(t, f) t . f

#define NI_PARAMS_COUNT(TAG, _63,_62,_61,_60,_59,_58,_57,_56,_55,_54,_53,_52,_51,\
                        _50,_49,_48,_47,_46,_45,_44,_43,_42,_41,\
                        _40,_39,_38,_37,_36,_35,_34,_33,_32,_31,\
                        _30,_29,_28,_27,_26,_25,_24,_23,_22,_21,\
                        _20,_19,_18,_17,_16,_15,_14,_13,_12,_11,\
                        _10,_9,_8,_7,_6,_5,_4,_3,_2,_1,N,...) TAG##N

#define NISERIALIZATION(t, c, ...) NI_MAKE_CALL(t, NI_EXPAND(NI_PARAMS_COUNT(NISERIALIZATION, __VA_ARGS__, \
                        _63,_62,_61,_60,_59,_58,_57,_56,_55,_54,_53,_52,_51,\
                        _50,_49,_48,_47,_46,_45,_44,_43,_42,_41,\
                        _40,_39,_38,_37,_36,_35,_34,_33,_32,_31,\
                        _30,_29,_28,_27,_26,_25,_24,_23,_22,_21,\
                        _20,_19,_18,_17,_16,_15,_14,_13,_12,_11,\
                        _10,_9,_8,_7,_6,_5,_4,_3,_2,_1))(c, __VA_ARGS__))


#define VISITSTRUCT(structType, ...)        \
template<typename T>                        \
void serialize(T& t, structType& data)      \
{                                           \
    NISERIALIZATION(t, data, __VA_ARGS__);  \
}


#endif