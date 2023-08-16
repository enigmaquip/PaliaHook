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

enum class ELandscapeSetupErrors : uint8
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,
};

enum class ERTDrawingType : uint8
{
	ERTDrawingType__RTAtlas        = 0,
	ERTDrawingType__RTAtlasToNonAtlas = 1,
	ERTDrawingType__RTNonAtlasToAtlas = 2,
	ERTDrawingType__RTNonAtlas     = 3,
	ERTDrawingType__RTMips         = 4,
	ERTDrawingType__ERTDrawingType_MAX = 5,
};

enum class EHeightmapRTType : uint8
{
	EHeightmapRTType__HeightmapRT_CombinedAtlas = 0,
	EHeightmapRTType__HeightmapRT_CombinedNonAtlas = 1,
	EHeightmapRTType__HeightmapRT_Scratch1 = 2,
	EHeightmapRTType__HeightmapRT_Scratch2 = 3,
	EHeightmapRTType__HeightmapRT_Scratch3 = 4,
	EHeightmapRTType__HeightmapRT_Mip1 = 5,
	EHeightmapRTType__HeightmapRT_Mip2 = 6,
	EHeightmapRTType__HeightmapRT_Mip3 = 7,
	EHeightmapRTType__HeightmapRT_Mip4 = 8,
	EHeightmapRTType__HeightmapRT_Mip5 = 9,
	EHeightmapRTType__HeightmapRT_Mip6 = 10,
	EHeightmapRTType__HeightmapRT_Mip7 = 11,
	EHeightmapRTType__HeightmapRT_Count = 12,
	EHeightmapRTType__HeightmapRT_MAX = 13,
};

enum class EWeightmapRTType : uint8
{
	EWeightmapRTType__WeightmapRT_Scratch_RGBA = 0,
	EWeightmapRTType__WeightmapRT_Scratch1 = 1,
	EWeightmapRTType__WeightmapRT_Scratch2 = 2,
	EWeightmapRTType__WeightmapRT_Scratch3 = 3,
	EWeightmapRTType__WeightmapRT_Mip0 = 4,
	EWeightmapRTType__WeightmapRT_Mip1 = 5,
	EWeightmapRTType__WeightmapRT_Mip2 = 6,
	EWeightmapRTType__WeightmapRT_Mip3 = 7,
	EWeightmapRTType__WeightmapRT_Mip4 = 8,
	EWeightmapRTType__WeightmapRT_Mip5 = 9,
	EWeightmapRTType__WeightmapRT_Mip6 = 10,
	EWeightmapRTType__WeightmapRT_Mip7 = 11,
	EWeightmapRTType__WeightmapRT_Count = 12,
	EWeightmapRTType__WeightmapRT_MAX = 13,
};

enum class ELandscapeBlendMode : uint8
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2,
};

enum class ELandscapeClearMode : uint8
{
	Clear_Weightmap                = 1,
	Clear_Heightmap                = 2,
	Clear_All                      = 3,
	Clear_MAX                      = 4,
};

enum class ELandscapeGizmoType : uint8
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,
};

enum class EGrassScaling : uint8
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3,
};

enum class ESplineModulationColorMask : uint8
{
	ESplineModulationColorMask__Red = 0,
	ESplineModulationColorMask__Green = 1,
	ESplineModulationColorMask__Blue = 2,
	ESplineModulationColorMask__Alpha = 3,
	ESplineModulationColorMask__ESplineModulationColorMask_MAX = 4,
};

enum class ELandscapeSplineMeshOrientation : uint8
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2,
};

enum class ELandscapeLayerBlendType : uint8
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3,
};

enum class ETerrainCoordMappingType : uint8
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,
};

enum class ELandscapeCustomizedCoordType : uint8
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5,
};

enum class ELandscapeResizeMode : uint8
{
	ELandscapeResizeMode__Resample = 0,
	ELandscapeResizeMode__Clip     = 1,
	ELandscapeResizeMode__Expand   = 2,
	ELandscapeResizeMode__ELandscapeResizeMode_MAX = 3,
};

enum class ELandscapeImportAlphamapType : uint8
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2,
};

enum class ELandscapeLayerPaintingRestriction : uint8
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentAllowList = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class ELandscapeLayerDisplayMode : uint8
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3,
};

enum class ELandscapeLODFalloff : uint8
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeLayerBrush
struct FLandscapeLayerBrush
{
public:
	uint8                                        Pad_AD9[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Landscape.LandscapeLayer
struct FLandscapeLayer
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x18(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocked;                                           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeightmapAlpha;                                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightmapAlpha;                                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeBlendMode               BlendMode;                                         // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLandscapeLayerBrush>          Brushes;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;                     // 0x38(0x50)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeEditToolRenderData
struct FLandscapeEditToolRenderData
{
public:
	class UMaterialInterface*                    ToolMaterial;                                      // 0x0(0x8)(ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    GizmoMaterial;                                     // 0x8(0x8)(ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedType;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugChannelR;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugChannelG;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugChannelB;                                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DataTexture;                                       // 0x20(0x8)(ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            LayerContributionTexture;                          // 0x28(0x8)(ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DirtyTexture;                                      // 0x30(0x8)(ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.WeightmapLayerAllocationInfo
struct FWeightmapLayerAllocationInfo
{
public:
	class ULandscapeLayerInfoObject*             LayerInfo;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeightmapTextureIndex;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeightmapTextureChannel;                           // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADF[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeComponentMaterialOverride
struct FLandscapeComponentMaterialOverride
{
public:
	struct FPerPlatformInt                       LODIndex;                                          // 0x0(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapePerLODMaterialOverride
struct FLandscapePerLODMaterialOverride
{
public:
	int32                                        LODIndex;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Landscape.WeightmapData
struct FWeightmapData
{
public:
	TArray<class UTexture2D*>                    Textures;                                          // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULandscapeWeightmapUsage*>      TextureUsages;                                     // 0x20(0x10)(ZeroConstructor, Transient, NonTransactional, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.HeightmapData
struct FHeightmapData
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeLayerComponentData
struct FLandscapeLayerComponentData
{
public:
	struct FHeightmapData                        HeightmapData;                                     // 0x0(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FWeightmapData                        WeightmapData;                                     // 0x8(0x30)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Landscape.GizmoSelectData
struct FGizmoSelectData
{
public:
	uint8                                        Pad_AE3[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Landscape.GrassVariety
struct FGrassVariety
{
public:
	class UStaticMesh*                           GrassMesh;                                         // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FPerPlatformFloat                     GrassDensity;                                      // 0x18(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseGrid;                                          // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlacementJitter;                                   // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                       StartCullDistance;                                 // 0x24(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                       EndCullDistance;                                   // 0x28(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinLOD;                                            // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGrassScaling                     Scaling;                                           // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        ScaleX;                                            // 0x34(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        ScaleY;                                            // 0x3C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        ScaleZ;                                            // 0x44(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RandomRotation;                                    // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlignToSurface;                                    // 0x4D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLandscapeLightmap;                             // 0x4E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                     LightingChannels;                                  // 0x4F(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bReceivesDecals;                                   // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastDynamicShadow;                                // 0x51(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastContactShadow;                                // 0x52(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeepInstanceBufferCPUCopy;                        // 0x53(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       InstanceWorldPositionOffsetDisableDistance;        // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
struct FLandscapeMaterialTextureStreamingInfo
{
public:
	class FName                                  TextureName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TexelFactor;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeSplineConnection
struct FLandscapeSplineConnection
{
public:
	class ULandscapeSplineSegment*               Segment;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        End : 1;                                           // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignControlPointData
struct FForeignControlPointData
{
public:
	uint8                                        Pad_AEC[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignSplineSegmentData
struct FForeignSplineSegmentData
{
public:
	uint8                                        Pad_AED[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignWorldSplineData
struct FForeignWorldSplineData
{
public:
	uint8                                        Pad_AEE[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Landscape.LandscapeSplineInterpPoint
struct FLandscapeSplineInterpPoint
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Left;                                              // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Right;                                             // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FalloffLeft;                                       // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FalloffRight;                                      // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LayerLeft;                                         // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LayerRight;                                        // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LayerFalloffLeft;                                  // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LayerFalloffRight;                                 // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartEndFalloff;                                   // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Landscape.LandscapeSplineSegmentConnection
struct FLandscapeSplineSegmentConnection
{
public:
	class ULandscapeSplineControlPoint*          ControlPoint;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TangentLen;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0xC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Landscape.LandscapeSplineMeshEntry
struct FLandscapeSplineMeshEntry
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            MaterialOverrides;                                 // 0x8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bCenterH : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_85 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AF3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CenterAdjust;                                      // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleToWidth : 1;                                 // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_86 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AF4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x38(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeSplineMeshOrientation   Orientation;                                       // 0x50(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplineMeshAxis                   ForwardAxis;                                       // 0x51(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplineMeshAxis                   UpAxis;                                            // 0x52(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF5[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.GrassInput
struct FGrassInput
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULandscapeGrassType*                   GrassType;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Input;                                             // 0x10(0x28)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Landscape.LayerBlendInput
struct FLayerBlendInput
{
public:
	class FName                                  LayerName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeLayerBlendType          BlendType;                                         // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExpressionInput                      LayerInput;                                        // 0x10(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      HeightInput;                                       // 0x38(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        PreviewWeight;                                     // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ConstLayerInput;                                   // 0x68(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstHeightInput;                                  // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeInfoLayerSettings
struct FLandscapeInfoLayerSettings
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LayerName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeEditorLayerSettings
struct FLandscapeEditorLayerSettings
{
public:
	uint8                                        Pad_AFB[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.LandscapeLayerStruct
struct FLandscapeLayerStruct
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeImportLayerInfo
struct FLandscapeImportLayerInfo
{
public:
	uint8                                        Pad_AFC[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeProxyMaterialOverride
struct FLandscapeProxyMaterialOverride
{
public:
	struct FPerPlatformInt                       LODIndex;                                          // 0x0(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Landscape.PhysicalMaterialInput
struct FPhysicalMaterialInput
{
public:
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Input;                                             // 0x8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif