#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESplineType : uint8
{
	ESplineType__BSpline           = 0,
	ESplineType__Hermite           = 1,
	ESplineType__Max               = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSplineImpl
struct FControlRigSplineImpl
{
public:
	uint8                                        Pad_28A4[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSpline
struct FControlRigSpline
{
public:
	uint8                                        Pad_28A7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
struct FRigUnit_ControlRigSplineBase : public FRigUnit
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
struct FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
{
public:
	TArray<struct FVector>                       Points;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESplineType                       SplineMode;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SamplesPerSegment;                                 // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Compression;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stretch;                                           // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
struct FRigUnit_SetSplinePoints : public FRigUnitMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Tangent;                                           // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x70 - 0x40)
// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
struct FRigUnit_GetLengthControlRigSpline : public FRigUnit
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x210 - 0x40)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0xE0(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x170(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x210 - 0x40)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0xE0(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x170(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FControlRigSpline                     Spline;                                            // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Percentage;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif