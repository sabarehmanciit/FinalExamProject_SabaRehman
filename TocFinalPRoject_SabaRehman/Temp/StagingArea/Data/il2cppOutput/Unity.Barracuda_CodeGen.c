#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 Unity.Barracuda.Tensor Unity.Barracuda.IOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
// 0x00000002 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
// 0x00000003 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
// 0x00000004 Unity.Barracuda.Tensor Unity.Barracuda.IOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
// 0x00000005 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
// 0x00000006 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x00000007 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
// 0x00000008 Unity.Barracuda.Tensor Unity.Barracuda.IOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
// 0x00000009 Unity.Barracuda.Tensor Unity.Barracuda.IOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
// 0x0000000A Unity.Barracuda.Tensor Unity.Barracuda.IOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000000B Unity.Barracuda.Tensor Unity.Barracuda.IOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000000C Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
// 0x0000000D Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
// 0x0000000E Unity.Barracuda.Tensor Unity.Barracuda.IOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
// 0x0000000F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
// 0x00000010 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000011 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000012 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
// 0x00000013 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000014 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
// 0x00000015 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
// 0x00000016 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Dropout(Unity.Barracuda.Tensor,System.Single)
// 0x00000017 Unity.Barracuda.Tensor Unity.Barracuda.IOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
// 0x00000018 Unity.Barracuda.Tensor Unity.Barracuda.IOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
// 0x00000019 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
// 0x0000001A Unity.Barracuda.Tensor Unity.Barracuda.IOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
// 0x0000001B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Relu(Unity.Barracuda.Tensor)
// 0x0000001C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Softmax(Unity.Barracuda.Tensor)
// 0x0000001D Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogSoftmax(Unity.Barracuda.Tensor)
// 0x0000001E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tanh(Unity.Barracuda.Tensor)
// 0x0000001F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sigmoid(Unity.Barracuda.Tensor)
// 0x00000020 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Elu(Unity.Barracuda.Tensor,System.Single)
// 0x00000021 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Relu6(Unity.Barracuda.Tensor)
// 0x00000022 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
// 0x00000023 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
// 0x00000024 Unity.Barracuda.Tensor Unity.Barracuda.IOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000025 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Swish(Unity.Barracuda.Tensor)
// 0x00000026 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Abs(Unity.Barracuda.Tensor)
// 0x00000027 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Neg(Unity.Barracuda.Tensor)
// 0x00000028 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Ceil(Unity.Barracuda.Tensor)
// 0x00000029 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
// 0x0000002A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Floor(Unity.Barracuda.Tensor)
// 0x0000002B Unity.Barracuda.Tensor Unity.Barracuda.IOps::Reciprocal(Unity.Barracuda.Tensor)
// 0x0000002C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pow(Unity.Barracuda.Tensor,System.Single)
// 0x0000002D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Exp(Unity.Barracuda.Tensor)
// 0x0000002E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Log(Unity.Barracuda.Tensor)
// 0x0000002F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sqrt(Unity.Barracuda.Tensor)
// 0x00000030 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Add(Unity.Barracuda.Tensor[])
// 0x00000031 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Sub(Unity.Barracuda.Tensor[])
// 0x00000032 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Mul(Unity.Barracuda.Tensor[])
// 0x00000033 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Div(Unity.Barracuda.Tensor[])
// 0x00000034 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Pow(Unity.Barracuda.Tensor[])
// 0x00000035 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Min(Unity.Barracuda.Tensor[])
// 0x00000036 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Max(Unity.Barracuda.Tensor[])
// 0x00000037 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Mean(Unity.Barracuda.Tensor[])
// 0x00000038 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
// 0x00000039 Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
// 0x0000003A Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
// 0x0000003B Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
// 0x0000003C Unity.Barracuda.Tensor Unity.Barracuda.IOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
// 0x0000003D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000003E Unity.Barracuda.Tensor Unity.Barracuda.IOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x0000003F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000040 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000041 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000042 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000043 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000044 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
// 0x00000045 Unity.Barracuda.Tensor Unity.Barracuda.IOps::LogicalNot(Unity.Barracuda.Tensor)
// 0x00000046 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Flatten(Unity.Barracuda.Tensor)
// 0x00000047 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
// 0x00000048 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
// 0x00000049 Unity.Barracuda.Tensor Unity.Barracuda.IOps::Transpose(Unity.Barracuda.Tensor)
// 0x0000004A Unity.Barracuda.Tensor Unity.Barracuda.IOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
// 0x0000004B Unity.Barracuda.Tensor Unity.Barracuda.IOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
// 0x0000004C Unity.Barracuda.Tensor Unity.Barracuda.IOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
// 0x0000004D Unity.Barracuda.Tensor Unity.Barracuda.IOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
// 0x0000004E Unity.Barracuda.Tensor Unity.Barracuda.IOps::Copy(Unity.Barracuda.Tensor)
// 0x0000004F Unity.Barracuda.Tensor Unity.Barracuda.IOps::Prepare(Unity.Barracuda.Tensor)
// 0x00000050 System.Void Unity.Barracuda.IOps::ResetAllocator(System.Boolean)
// 0x00000051 System.Void Unity.Barracuda.IModelCompiler::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000052 System.Void Unity.Barracuda.IModelCompiler::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
// 0x00000053 System.Void Unity.Barracuda.IVars::SetInput(System.String,Unity.Barracuda.Tensor)
// 0x00000054 System.Void Unity.Barracuda.IVars::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000055 Unity.Barracuda.Tensor[] Unity.Barracuda.IVars::GatherInputs(Unity.Barracuda.Layer)
// 0x00000056 System.Void Unity.Barracuda.IVars::PrepareStorage(Unity.Barracuda.Layer)
// 0x00000057 System.Void Unity.Barracuda.IVars::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
// 0x00000058 Unity.Barracuda.Tensor Unity.Barracuda.IVars::PeekOutput(System.String)
// 0x00000059 Unity.Barracuda.Tensor[] Unity.Barracuda.IVars::PeekConstants(System.String)
// 0x0000005A Unity.Barracuda.ITensorAllocator Unity.Barracuda.IVars::GetAllocator()
// 0x0000005B Unity.Barracuda.Tensor Unity.Barracuda.ITensorAllocator::Alloc(Unity.Barracuda.TensorShape)
// 0x0000005C Unity.Barracuda.Tensor Unity.Barracuda.ITensorAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
// 0x0000005D System.Void Unity.Barracuda.ITensorAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
// 0x0000005E System.Void Unity.Barracuda.ITensorAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
// 0x0000005F System.Void Unity.Barracuda.ITensorAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
// 0x00000060 System.Void Unity.Barracuda.ITensorAllocator::Reset(System.Boolean)
// 0x00000061 Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.BarracudaBackendsFactory::ResolveAutoType(Unity.Barracuda.WorkerFactory_Type)
extern void BarracudaBackendsFactory_ResolveAutoType_m6330F6A994BAF98556AF57DCB19862FF7F2B3233 ();
// 0x00000062 Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.BarracudaBackendsFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory_Device)
extern void BarracudaBackendsFactory_GetBestTypeForDevice_m8FD9451309406BB2AFD8A158EBF6A3794A5D8689 ();
// 0x00000063 Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.BarracudaBackendsFactory::ValidateType(Unity.Barracuda.WorkerFactory_Type)
extern void BarracudaBackendsFactory_ValidateType_m2CBFC1545CE27DB8F0534FE6FF644D02EBDCE35E ();
// 0x00000064 Unity.Barracuda.IOps Unity.Barracuda.BarracudaBackendsFactory::CreateOps(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void BarracudaBackendsFactory_CreateOps_m4C64232979B8D99C9AAE1FC9E7BC09D0725890C8 ();
// 0x00000065 Unity.Barracuda.IWorker Unity.Barracuda.BarracudaBackendsFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory_WorkerConfiguration)
extern void BarracudaBackendsFactory_CreateWorker_m91A8F0E25FF5200C4A922D6DCFBA38E6430940C1 ();
// 0x00000066 Unity.Barracuda.Model Unity.Barracuda.BarracudaBackendsFactory::PatchModel(Unity.Barracuda.Model,System.String[],System.String[])
extern void BarracudaBackendsFactory_PatchModel_m4AD49D85A46F944C311E922AA7D808F54DFC2A76 ();
// 0x00000067 Unity.Barracuda.Model Unity.Barracuda.BarracudaBackendsFactory::ValidateModel(Unity.Barracuda.Model)
extern void BarracudaBackendsFactory_ValidateModel_m1C954A295C15C21A6A0BEF3FBF3C0FAF4C87E086 ();
// 0x00000068 System.Void Unity.Barracuda.BarracudaBackendsFactory::.ctor()
extern void BarracudaBackendsFactory__ctor_mB157991999008205E23B08F202CB8BA5315CB72C ();
// 0x00000069 Unity.Jobs.JobHandle Unity.Barracuda.BurstTensorData::get_fence()
extern void BurstTensorData_get_fence_m63FA7C13B9AE95A94BF1F82DAA79563FFD4D908F ();
// 0x0000006A System.Void Unity.Barracuda.BurstTensorData::set_fence(Unity.Jobs.JobHandle)
extern void BurstTensorData_set_fence_m5C04CA6E44F8D96090B33221DCB85BF7F84A42C1 ();
// 0x0000006B Unity.Jobs.JobHandle Unity.Barracuda.BurstTensorData::get_reuse()
extern void BurstTensorData_get_reuse_m39F51882133211D133E9DB4A7D47350D76A9A713 ();
// 0x0000006C System.Void Unity.Barracuda.BurstTensorData::set_reuse(Unity.Jobs.JobHandle)
extern void BurstTensorData_set_reuse_mF43FDE403E66BF3B267270BC60FDD73BC131B435 ();
// 0x0000006D System.Void Unity.Barracuda.BurstTensorData::.ctor(System.Int32)
extern void BurstTensorData__ctor_mA57B9286FEB32582BEC345CF26D54A0CE614A1A1 ();
// 0x0000006E System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void BurstTensorData__ctor_mFA350C800C6D7B270A6905AA4C3DE0022ED35C59 ();
// 0x0000006F System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.ArrayTensorData)
extern void BurstTensorData__ctor_m001F3656268A1F91BBB059F016E809FD42F8E6DF ();
// 0x00000070 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.SharedArrayTensorData)
extern void BurstTensorData__ctor_mA2933FD030205F5CEADD74C6711DEA1642A13A22 ();
// 0x00000071 System.Void Unity.Barracuda.BurstTensorData::.ctor(Unity.Barracuda.UnsafeArrayTensorData)
extern void BurstTensorData__ctor_m2CBC80FD12F73711663D68E0CF31BACA900E355D ();
// 0x00000072 System.Void Unity.Barracuda.BurstTensorData::Finalize()
extern void BurstTensorData_Finalize_mFFCBA7B4E50E40FF773DD53E5C0330F474B547AD ();
// 0x00000073 System.Void Unity.Barracuda.BurstTensorData::Dispose()
extern void BurstTensorData_Dispose_m70E96C18BB1665E4CED8312EB588DD1A10DB74C0 ();
// 0x00000074 System.Void Unity.Barracuda.BurstTensorData::CompleteAllPendingOperations()
extern void BurstTensorData_CompleteAllPendingOperations_m776DC90EBD1796E4F69E47A9B855F7AE1BF54A3E ();
// 0x00000075 System.Void Unity.Barracuda.BurstTensorData::Reserve(System.Int32)
extern void BurstTensorData_Reserve_m9D0D1A05BCD302EC8013DD1DC1F00DF3CD0ECA80 ();
// 0x00000076 System.Void Unity.Barracuda.BurstTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void BurstTensorData_Upload_m8521D7BFE2FBD0D8E2F28D4C44D895F3A4118B4D ();
// 0x00000077 System.Single[] Unity.Barracuda.BurstTensorData::Download(Unity.Barracuda.TensorShape)
extern void BurstTensorData_Download_mB126B1426A5DFBD116DE67C05F2431031416216F ();
// 0x00000078 System.Single[] Unity.Barracuda.BurstTensorData::SharedAccess(System.Int32&)
extern void BurstTensorData_SharedAccess_m6B0D887CE75C0B21402CE4D2763636A274AC2E05 ();
// 0x00000079 System.Boolean Unity.Barracuda.BurstTensorData::ScheduleAsyncDownload(System.Int32)
extern void BurstTensorData_ScheduleAsyncDownload_mBC1F5C84C607BD92025840F4323BA8260C1733A9 ();
// 0x0000007A System.String Unity.Barracuda.BurstTensorData::ToString()
extern void BurstTensorData_ToString_mE5C243236BC949647DBE97DA7AB1DC69918BE0EA ();
// 0x0000007B System.Void Unity.Barracuda.BurstCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void BurstCPUOps__ctor_m020AC23C6FDBCFF8582A59FD4FF7BF806749C2D8 ();
// 0x0000007C Unity.Barracuda.BurstTensorData Unity.Barracuda.BurstCPUOps::Pin(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Pin_mD6A9F1C832C6382C9F67A36C380707BDE7935167 ();
// 0x0000007D Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Prepare_m203135F8250D9A7F411E2F67584914DDBC55CCA2 ();
// 0x0000007E Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_m13E111F886BAFC9D4E045C56F0DE35F38955633C ();
// 0x0000007F Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps::Dependencies(Unity.Jobs.JobHandle,Unity.Jobs.JobHandle,Unity.Jobs.JobHandle)
extern void BurstCPUOps_Dependencies_m79384517A4A93BD0715D970C7C65A5D5C0AEFBBD ();
// 0x00000080 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void BurstCPUOps_MatMul_m58A6DBEE2EFC31962938637F7357353E7E95C892 ();
// 0x00000081 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void BurstCPUOps_Dense_mA938B657EC5982CE005FD2B6927BC87E32372AA6 ();
// 0x00000082 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void BurstCPUOps_Conv2D_m5F277E4BAD4225957B50EE94CE9B2FA09BBAF6F0 ();
// 0x00000083 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Conv2DUsingIm2ColSliced(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void BurstCPUOps_Conv2DUsingIm2ColSliced_mAB49F1B39D96B319186C189F52B7908AC3FFC402 ();
// 0x00000084 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_MaxPool2D_m7E984090F957FF37B3FCC082DF392E9DB0D9F8EB ();
// 0x00000085 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void BurstCPUOps_AvgPool2D_m11B98716AB2C34F230D129E241F33CA917F3CEFB ();
// 0x00000086 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void BurstCPUOps_GlobalMaxPool2D_m2C26A5F02B3CFD3D8D7749680E2C4548C9FCD0F8 ();
// 0x00000087 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void BurstCPUOps_GlobalAvgPool2D_m84691125E4E8A87B046650087A735C6857D50DAE ();
// 0x00000088 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void BurstCPUOps_DepthwiseConv2D_m4E5323691622220F73B5C5AA907BACCE35F2E4A5 ();
// 0x00000089 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_ScaleBias_mAC4A670FC4264AC98CB02ABEABECF7370296C2A9 ();
// 0x0000008A Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Relu(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Relu_m554E0D88C242AC7214083F78FDFE8946CEEDE593 ();
// 0x0000008B Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Relu6_m9B2F915392ACB2EE26BAE03576E014F396905B80 ();
// 0x0000008C Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_LeakyRelu_m9D01C5BD8C1FA0515AE917151380D44D174440CB ();
// 0x0000008D Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Tanh_m5F6F3A88BEF2FF4376EC7FACF705A8467D63B15D ();
// 0x0000008E Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sigmoid_m16B743FA0AC719B93D7C8F91B884CCDB1079E115 ();
// 0x0000008F Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_Elu_m1090A600C38C62D4FC79BA1608432063EFE10B9F ();
// 0x00000090 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void BurstCPUOps_Selu_mCD5F27B7B5AD036690CF9EE6B53D16836D2FCBF4 ();
// 0x00000091 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Swish(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Swish_mE2E5FE6D17783F6F03D0FD650B676EF2020CF594 ();
// 0x00000092 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_PRelu_m7F7BBAE50A782F251D636646A24E59EB4E94BFF0 ();
// 0x00000093 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Softmax(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Softmax_m27603EE7AFAC073309230C695089482AA5FFB3FA ();
// 0x00000094 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void BurstCPUOps_LogSoftmax_m67918B810F524497A974D080140895BA76A63ED2 ();
// 0x00000095 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Abs(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Abs_m6ED18EF7BAC77CC87FD9C9305CB40612667F401D ();
// 0x00000096 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Neg(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Neg_mC26307E65BAA3E8814C642000CC314950CDEDF84 ();
// 0x00000097 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Ceil(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Ceil_m1E4ADC91C9664AC2B1AA65E3EF6F4A7032806D16 ();
// 0x00000098 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void BurstCPUOps_Clip_mA3398C4740706DE09EFD14E0914477B0BF731624 ();
// 0x00000099 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Floor(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Floor_m96498F9D86730D8B90F0B5132166E741E2D598CC ();
// 0x0000009A Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Reciprocal(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Reciprocal_m229778FE1B9029E794D8BCE49EA74358A0A27AAC ();
// 0x0000009B Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_Pow_m898F891A21E63E530E6A1B75D05C35B6D1AD22C0 ();
// 0x0000009C Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Exp(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Exp_mD2525A1DA423E8501CFADDDF1FBF8DA850F31BA7 ();
// 0x0000009D Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Log(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Log_m932BB82C37DBFF457C21E1C9DC60CFE4EAB91ACA ();
// 0x0000009E Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void BurstCPUOps_Sqrt_m2AAE8F9306F1DCD4127FCF79C392DB097E9DFA17 ();
// 0x0000009F Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::GenericBroadcast(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void BurstCPUOps_GenericBroadcast_m67E44392FE6F4BFE9F0D0B6FAD09619053CE0F30 ();
// 0x000000A0 System.Void Unity.Barracuda.BurstCPUOps::BroadcastAdd(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single)
extern void BurstCPUOps_BroadcastAdd_m72B9FD3AFE8827B2C171CC91F6FCD32FE117F66A ();
// 0x000000A1 System.Void Unity.Barracuda.BurstCPUOps::BroadcastSub(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastSub_m980BBA34DC028DD9F6933027F2643B5CB9E17384 ();
// 0x000000A2 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMul(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMul_mBB4DC8680C83670C974D2C277CCFC39F3F69204C ();
// 0x000000A3 System.Void Unity.Barracuda.BurstCPUOps::BroadcastDiv(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastDiv_mADAF2D0F9A1763A12B90956A35DD4A6B63557849 ();
// 0x000000A4 System.Void Unity.Barracuda.BurstCPUOps::BroadcastPow(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastPow_m8AD755132AF093E69964F3EC4A4E5B68D8D6D105 ();
// 0x000000A5 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMin(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMin_mF74456F6D86AAE876567E692040FEFAFF572D6BF ();
// 0x000000A6 System.Void Unity.Barracuda.BurstCPUOps::BroadcastMax(Unity.Barracuda.Tensor&,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void BurstCPUOps_BroadcastMax_m6E53CF2E4B2D15627D71A622E333D4F929AB2216 ();
// 0x000000A7 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Add(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Add_m56D7EFECC28D3C8AAA5430A147052B702B9B9A28 ();
// 0x000000A8 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Sub_m3DD02DC13ECE00235E5F4F37655479FC851ECAA9 ();
// 0x000000A9 Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Mul_m829797A6ACE4F840135E4C5CAA78F6EAC906D32D ();
// 0x000000AA Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Div(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Div_mD0EB88A8B7FF8B53E78EE67430F65220592A08AE ();
// 0x000000AB Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Pow(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Pow_m155D6B4861FB759C5C675A3687E2334C03DEA788 ();
// 0x000000AC Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Min(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Min_m9C8E1D198A0E647377A2560C4FDA8A07DD0103DB ();
// 0x000000AD Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::Max(Unity.Barracuda.Tensor[])
extern void BurstCPUOps_Max_m81C9C9E8B5B66D6965206E2F700C333460A19CAD ();
// 0x000000AE Unity.Barracuda.Tensor Unity.Barracuda.BurstCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void BurstCPUOps_CopyAndReshape_m95940C3CBE6BEA65CCEFDCF050E02D087F988ECD ();
// 0x000000AF System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Dense(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32)
extern void ComputeKernelLibrary_Dense_m99D2205E1D9DCA5216660F051FE8C37A3EFA6432 ();
// 0x000000B0 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsT8x8_R8x8KernelValid(Unity.Barracuda.ComputeKernelLibrary_ChannelMode,Unity.Barracuda.ComputeKernelLibrary_KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsT8x8_R8x8KernelValid_mC258E258DA344DF4AACAC1FDB701845987CE043A ();
// 0x000000B1 System.Boolean Unity.Barracuda.ComputeKernelLibrary::IsT2x32_R8x8KernelValid(Unity.Barracuda.ComputeKernelLibrary_ChannelMode,Unity.Barracuda.ComputeKernelLibrary_KernelMode,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_IsT2x32_R8x8KernelValid_m610B3A3E62E18786BFCC74570135A93D9754CB19 ();
// 0x000000B2 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Conv2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void ComputeKernelLibrary_Conv2D_m7A9017F110677C43F27ED46110486A3DFA68C32E ();
// 0x000000B3 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::DepthwiseConv2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_DepthwiseConv2D_m27F4BD0A80145E28FFCE60E521F8B62E43200E51 ();
// 0x000000B4 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Conv2DTrans(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Conv2DTrans_m79F1AD3949DDA21B39B9D8DF62300B4E6C28F288 ();
// 0x000000B5 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Activation(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Activation_m42C07606B6E6994E283051EAB2CFB8A267015619 ();
// 0x000000B6 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::PRelu(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_PRelu_m1219573359E197B1D66EF6D98BBB40A27478469D ();
// 0x000000B7 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Softmax(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Softmax_m4E91C696087F44DCC037AE44E736DDB61EA94F3C ();
// 0x000000B8 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::LogSoftmax(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_LogSoftmax_m1A76F5008D6A41212271B29D9B1DBEC025C8499E ();
// 0x000000B9 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::ScaleBias(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_ScaleBias_m7D1EF63BC835C0653581996C6EE71293D3039A44 ();
// 0x000000BA System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Upsample2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Boolean)
extern void ComputeKernelLibrary_Upsample2D_m8472F9C4B14CAA5D65EC8C99DF947AC9A200412C ();
// 0x000000BB System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Pool2DReduce(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Pool2DReduce_m725A906C898424982BD37A3B81A387B797BD60CB ();
// 0x000000BC System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Pool2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Pool2D_m8F1B93D5B10FF9F4049667668F30C6538E7FCCE7 ();
// 0x000000BD System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::PoolAvgVar2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_PoolAvgVar2D_mA08DB345D9061D9614EA1DF0A6640F554E50DF59 ();
// 0x000000BE System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::GlobalPool2D(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_GlobalPool2D_mCFAB95DE1D56E6E4EDD11A950D4F92ABB4CA9493 ();
// 0x000000BF System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::NormalizationTail(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_NormalizationTail_mA8C28576BFDC8541B72D99C5FBBD2ACC1F1BC207 ();
// 0x000000C0 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Copy(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_Copy_mE038C080C9B7C64F86E758AE1DF7F897F09A887F ();
// 0x000000C1 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::ReshapeFromNHWCModel(Unity.Barracuda.TensorShape)
extern void ComputeKernelLibrary_ReshapeFromNHWCModel_m12EE85C427EB828D2C2F3DB3DA2FD96D86998D4C ();
// 0x000000C2 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Padding(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Padding_m69DE7CFE84589FAFCC73070663A7E51B719F3E44 ();
// 0x000000C3 System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry> Unity.Barracuda.ComputeKernelLibrary::Broadcast(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.String)
extern void ComputeKernelLibrary_Broadcast_m7DE240290C169B28F87A2CD85875D9DF0613E358 ();
// 0x000000C4 System.ValueTuple`3<System.Int32,System.Int32,System.Int32> Unity.Barracuda.ComputeKernelLibrary::Int3(System.Int32,System.Int32,System.Int32)
extern void ComputeKernelLibrary_Int3_m44A2A3B250962403C33957A19A8FCE646EF06863 ();
// 0x000000C5 System.Single Unity.Barracuda.ComputeKernelLibrary::BigO(System.Int32)
extern void ComputeKernelLibrary_BigO_m1DE8D9FCE295F86BEF1A6040CB0C9788D0C6BBDD ();
// 0x000000C6 Unity.Barracuda.ComputeKernelLibrary_StrictDimensions Unity.Barracuda.ComputeKernelLibrary::StrictAnd(System.Boolean)
extern void ComputeKernelLibrary_StrictAnd_m553EBE633A8336686DFC1628203C548D768AEB71 ();
// 0x000000C7 Unity.Barracuda.ComputeKernelLibrary_StrictDimensions Unity.Barracuda.ComputeKernelLibrary::Strict()
extern void ComputeKernelLibrary_Strict_m66550BA2D4D1A364FEF85DD17BD2B0183347012C ();
// 0x000000C8 System.Void Unity.Barracuda.ComputeKernelLibrary::.ctor()
extern void ComputeKernelLibrary__ctor_mEB06FBD8784B47208A05869FAED2748B184AAE1A ();
// 0x000000C9 System.Void Unity.Barracuda.ComputeKernelLibrary::.cctor()
extern void ComputeKernelLibrary__cctor_m2C02AB9039675A88199219A9E5557EE05A7C7570 ();
// 0x000000CA UnityEngine.ComputeShader Unity.Barracuda.ComputeKernel::get_shader()
extern void ComputeKernel_get_shader_mE390432CB7F5C680303E413AD59A80D5A1131450_AdjustorThunk ();
// 0x000000CB System.Void Unity.Barracuda.ComputeKernel::.ctor(Unity.Barracuda.ComputeFunc,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>)
extern void ComputeKernel__ctor_m1906D71A4B14C5AEA32BBE952C8D52D03FE76096_AdjustorThunk ();
// 0x000000CC System.Void Unity.Barracuda.ComputeKernel::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeKernel_SetTensor_mFC6EB464BE5B6D5E51BD30953F2C279E6ADEC2B3_AdjustorThunk ();
// 0x000000CD System.Void Unity.Barracuda.ComputeKernel::SetTensor(Unity.Barracuda.ComputeFunc_TensorDecl,System.Int32,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeKernel_SetTensor_m0C63A6A07F15DA93D93DB034BCE5EB453DABBEF7_AdjustorThunk ();
// 0x000000CE System.Void Unity.Barracuda.ComputeKernel::SetTensorDecl(System.String,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeKernel_SetTensorDecl_m315056AC698EE19EE43717F4853A469F9824CB7C_AdjustorThunk ();
// 0x000000CF System.Void Unity.Barracuda.ComputeKernel::SetTensorDecl(Unity.Barracuda.ComputeFunc_TensorDecl,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeKernel_SetTensorDecl_m27ECEDE7036A50A33ACB5155110035D9AAE896E3_AdjustorThunk ();
// 0x000000D0 System.Void Unity.Barracuda.ComputeKernel::SetTensorBuffer(System.String,UnityEngine.ComputeBuffer)
extern void ComputeKernel_SetTensorBuffer_m8CF53145BD1F73D49D22246058E59E314142332B_AdjustorThunk ();
// 0x000000D1 System.Void Unity.Barracuda.ComputeKernel::SetTensorBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern void ComputeKernel_SetTensorBuffer_mA19F9F6C1AEB0E230A0B55C69A03B725E5C97275_AdjustorThunk ();
// 0x000000D2 System.Void Unity.Barracuda.ComputeKernel::Dispatch()
extern void ComputeKernel_Dispatch_m1EF6B1340E5B17727F59C0E512CF9E05DBEF64AE_AdjustorThunk ();
// 0x000000D3 System.Int64 Unity.Barracuda.ComputeKernel::CalculateEntryScore(UnityEngine.ComputeShader[],Unity.Barracuda.ComputeKernelLibrary_Entry,System.Boolean)
extern void ComputeKernel_CalculateEntryScore_m4347B32A011DACA09BF5E1C3CEB83E82B7005C1A ();
// 0x000000D4 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeKernel::BestKernel(UnityEngine.ComputeShader[],System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry>,System.Boolean)
extern void ComputeKernel_BestKernel_mE06B961723093BCD09DEA6A73A079EB46DFBEBDD ();
// 0x000000D5 System.Void Unity.Barracuda.ComputeOps::.ctor(UnityEngine.ComputeShader[],UnityEngine.ComputeShader,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void ComputeOps__ctor_mB38C17E7CAA0BA2BFE8C2016395185974A09F403 ();
// 0x000000D6 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeOps::BestKernel(System.Collections.Generic.List`1<Unity.Barracuda.ComputeKernelLibrary_Entry>)
extern void ComputeOps_BestKernel_m7B0B08466DC0AF8E619B8EC0E9D623C8DE1B11F4 ();
// 0x000000D7 Unity.Barracuda.ComputeKernel Unity.Barracuda.ComputeOps::CompileKernel(Unity.Barracuda.ComputeKernelLibrary_Entry)
extern void ComputeOps_CompileKernel_m8D140C96DEDD6E417F7099C30A8B84214DBFF64F ();
// 0x000000D8 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_Dense_m16EB96F66DBED4C44690064780FB9C8D85CE2914 ();
// 0x000000D9 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2DWinograd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_Conv2DWinograd_m4D554F5A933859C10488ADF0AB33987A39FDA006 ();
// 0x000000DA Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_Conv2D_mF02DEB0769A7479BE99DFC42F6AA587E031F96C1 ();
// 0x000000DB Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_DepthwiseConv2D_mA4A4B6B967DCFE64D140B1FEAB2CE0300E73D959 ();
// 0x000000DC Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_Conv2DTrans_mB7C7EF39F3172873106DCAD6E22045FF3BE5F187 ();
// 0x000000DD Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ComputeOps_Upsample2D_mA42EFF27492C3A534A190AAA5751702DE36010B8 ();
// 0x000000DE Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ComputeOps_Pool2D_mE8FD61AB63DAADC9C2DA519B280A73C61B08468B ();
// 0x000000DF Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalMaxPool2D_m81F9339B5A60A48483994F2AEB62657A3ACE1907 ();
// 0x000000E0 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalAvgPool2D_m70782D359D69EFE574E3A127EE2263D091D659F9 ();
// 0x000000E1 System.Tuple`2<Unity.Barracuda.Tensor,Unity.Barracuda.Tensor> Unity.Barracuda.ComputeOps::GlobalAvgVariancePool2DReduce(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Boolean)
extern void ComputeOps_GlobalAvgVariancePool2DReduce_mF9529C10E2FF0B26AF0B5BCA66B005D01EB60FD6 ();
// 0x000000E2 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalAvgVariancePool2D_m03A82B565AE2EE9B6BBC66220E3DAA1C7415B4BD ();
// 0x000000E3 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalPool2DReduce(System.String,Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalPool2DReduce_m145F57DFBBD8777EF6D56A3B9FB24B39A4A73E14 ();
// 0x000000E4 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::GlobalPool2D(System.String,System.String,Unity.Barracuda.Tensor)
extern void ComputeOps_GlobalPool2D_m9B7BD2306C0E6378BB9B3A7C2A0EC0505E0769EE ();
// 0x000000E5 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_ScaleBias_mFDE06679B6E58098AE06EBE011673D05F6EBBB31 ();
// 0x000000E6 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void ComputeOps_Normalization_m902025D75DF028C08FB888C439ADD8A41D51A898 ();
// 0x000000E7 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ComputeOps_Activation_m6027F4C1427B69C1270B91BE8102A8E33F141C5E ();
// 0x000000E8 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ComputeOps_PRelu_m6DD31E9F7999E4D5F126E21CA1527CD897BB2CA3 ();
// 0x000000E9 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Softmax(Unity.Barracuda.Tensor)
extern void ComputeOps_Softmax_m412B8B64BFF295F63AED1F1B57501E737F2DE11F ();
// 0x000000EA Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ComputeOps_LogSoftmax_mADFD0583121ED3653211C87FC225C436BEE13E68 ();
// 0x000000EB Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ComputeOps_RandomNormal_m077DD2CB48C6CE30DC13594D9B6D170C7FC07C18 ();
// 0x000000EC Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ComputeOps_RandomUniform_m60047E4F0ED97714638ACA1B0A41BDAD0A39629A ();
// 0x000000ED Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ComputeOps_Concat_mFB1F84F4B7E042C4042780CF84A7E9DB70CF3A14 ();
// 0x000000EE System.Int32[] Unity.Barracuda.ComputeOps::GetInputTensorStridesOnDevice(Unity.Barracuda.TensorShape)
extern void ComputeOps_GetInputTensorStridesOnDevice_mA7BC21B78CC6E096EEB032452EB95ED2123977A1 ();
// 0x000000EF Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void ComputeOps_ElementwiseWithBroadcast_mD73A3C7A2070A96BE1CA95DE676F995E036DC198 ();
// 0x000000F0 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ComputeOps_ApplyPadding_m4833811751E0BE337991E30C7ADA15B29E3A2031 ();
// 0x000000F1 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ComputeOps_LogicalNot_m814B8119D2E78D97884A94F74FE34E4F07846C6D ();
// 0x000000F2 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::CopyAndReshape_NCHW(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ComputeOps_CopyAndReshape_NCHW_m72820E0DD15D45C01A8A108C76C173171341062C ();
// 0x000000F3 Unity.Barracuda.Tensor Unity.Barracuda.ComputeOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ComputeOps_CopyAndReshape_m95A2251FA98AD70CECE3759FA26EB2A15BA62E7D ();
// 0x000000F4 System.Void Unity.Barracuda.ComputeVarsWithSharedModel::Dispose()
extern void ComputeVarsWithSharedModel_Dispose_mC2599EE186D894951E6F4A92936904E2A79D0F22 ();
// 0x000000F5 Unity.Barracuda.Tensor[] Unity.Barracuda.ComputeVarsWithSharedModel::PrepareLayerInputTensors(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.IOps)
extern void ComputeVarsWithSharedModel_PrepareLayerInputTensors_mC330648370B536334E45303E12C06F7D960054FD ();
// 0x000000F6 UnityEngine.ComputeBuffer Unity.Barracuda.ComputeVarsWithSharedModel::CreateComputeBufferForModelTensors(Unity.Barracuda.Layer,System.Int64&)
extern void ComputeVarsWithSharedModel_CreateComputeBufferForModelTensors_m088D8018EF04666E71154729CEF4778D3F3A53D4 ();
// 0x000000F7 System.Void Unity.Barracuda.ComputeVarsWithSharedModel::.ctor()
extern void ComputeVarsWithSharedModel__ctor_m53AC08AFD81B74D59F266DD90DF88BD03B45D7C3 ();
// 0x000000F8 System.Void Unity.Barracuda.ComputeDebugUtils::LogAssertion(Unity.Barracuda.ComputeDebugUtils_KernelAssertInfo,System.String)
extern void ComputeDebugUtils_LogAssertion_mDFDFAA676479E961F61250F42DE0AF3DD37AF38C ();
// 0x000000F9 System.Void Unity.Barracuda.ComputeDebugUtils::PrepareDispatch()
extern void ComputeDebugUtils_PrepareDispatch_mA9046DDE4C6FC78395F21DB842C8B317CD616996 ();
// 0x000000FA System.Void Unity.Barracuda.ComputeDebugUtils::VerifyDispatch(System.String)
extern void ComputeDebugUtils_VerifyDispatch_m4A3747A7778A8F94D524686771D719D31F5583DC ();
// 0x000000FB System.Void Unity.Barracuda.ComputeDebugUtils::.ctor()
extern void ComputeDebugUtils__ctor_m81317CA097C9D97C6EB1580BB8C7471EF7201CB8 ();
// 0x000000FC System.Void Unity.Barracuda.ComputeDebugUtils::.cctor()
extern void ComputeDebugUtils__cctor_mEDAD1A4114938722A93C68B2B7E1702892E47073 ();
// 0x000000FD System.Void Unity.Barracuda.PrecompiledComputeOps::.ctor(UnityEngine.ComputeShader[],UnityEngine.ComputeShader,Unity.Barracuda.ITensorAllocator,System.Boolean)
extern void PrecompiledComputeOps__ctor_m6B360274F10A0A0F3A0531EFAF670FBB5702090C ();
// 0x000000FE UnityEngine.ComputeBuffer Unity.Barracuda.PrecompiledComputeOps::NewComputeBuffer(System.String,System.Int32,System.Int32)
extern void PrecompiledComputeOps_NewComputeBuffer_m8F005EC3ABD484F8816DA2D82B41F9B92531DC1E ();
// 0x000000FF System.Void Unity.Barracuda.PrecompiledComputeOps::ResetAllocator(System.Boolean)
extern void PrecompiledComputeOps_ResetAllocator_mDB5145372A046761367B4ECCA0A5475AE12B5D1B ();
// 0x00000100 System.Int32 Unity.Barracuda.PrecompiledComputeOps::CalcModelWithInputsHashCode(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void PrecompiledComputeOps_CalcModelWithInputsHashCode_mAC00A1B2B4488438964045B8A10A16225907FAB7 ();
// 0x00000101 Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps::PrepareConv2dWinograd(Unity.Barracuda.Model,Unity.Barracuda.Layer)
extern void PrecompiledComputeOps_PrepareConv2dWinograd_m677FB541206DD6EF6A2A018DE1B6A931AD571D37 ();
// 0x00000102 Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps::PrepareConv2DTrans(Unity.Barracuda.Model,Unity.Barracuda.Layer)
extern void PrecompiledComputeOps_PrepareConv2DTrans_m39706D915109A9987F689017AEA93BC4FD090550 ();
// 0x00000103 System.Void Unity.Barracuda.PrecompiledComputeOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void PrecompiledComputeOps_PrepareModel_mC380642E4BCCAA26729D89157893A02B6D1B05BB ();
// 0x00000104 System.Void Unity.Barracuda.PrecompiledComputeOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void PrecompiledComputeOps_PreExecuteLayer_m34F7D5D01FE5EC93C41F1DC28D705B5450D120DC ();
// 0x00000105 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ApplyUnsupportedFusedActivationIfNeeded(Unity.Barracuda.Layer_FusedActivation,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_ApplyUnsupportedFusedActivationIfNeeded_mAFE332CFCE072047A44C013B07BCFC5C45513935 ();
// 0x00000106 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void PrecompiledComputeOps_Dense_m4021BED5D315D58DC48A852AE15EE842EB692D32 ();
// 0x00000107 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void PrecompiledComputeOps_Conv2D_m51EAF92F31CE79816B0F40E22D4E146A71D17669 ();
// 0x00000108 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void PrecompiledComputeOps_DepthwiseConv2D_mC756BEAC4B33A3801F530AA7577606A4D222B255 ();
// 0x00000109 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void PrecompiledComputeOps_Conv2DTrans_m2CD651728FB2E7A438DB932148FAA8C1C3B105DE ();
// 0x0000010A Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void PrecompiledComputeOps_Upsample2D_m262C3CB82D2E0DADD60CC1EE7740F5C9F13429B2 ();
// 0x0000010B Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void PrecompiledComputeOps_Pool2D_mB390E278C5E653A36509B0D8F5419874010A256C ();
// 0x0000010C Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_ScaleBias_m63078CEF76E452BB5199DB856168BAEB1DD6D669 ();
// 0x0000010D Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalPool2D_m53864565B7DB76E7822B68CF00B130AA8A27C2AB ();
// 0x0000010E Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalMaxPool2D_m4C2F3B62C8C14EB026FC54F1853203BD628B0CD6 ();
// 0x0000010F Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_GlobalAvgPool2D_mDC2CB50D2CC329C7BDDAC65267D780249EC71D49 ();
// 0x00000110 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void PrecompiledComputeOps_Normalization_mC2684C843282C64A73539B03B8FB48C218415EC4 ();
// 0x00000111 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void PrecompiledComputeOps_Activation_m95F3150B2DAF5290148A413CA19202CA2FE454EA ();
// 0x00000112 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_PRelu_mB31E22FC5042C123082D493B7F5DC3B649629A96 ();
// 0x00000113 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Softmax(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_Softmax_m85498CE7E7CD74758908D65F1EAA2DB56FBC824F ();
// 0x00000114 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void PrecompiledComputeOps_LogSoftmax_mAF9FA1788146A5B134B9E206EB2430EEC9B3378E ();
// 0x00000115 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void PrecompiledComputeOps_ElementwiseWithBroadcast_m1EB14692AA2CE33FDC07B41F1C0D080DBD4442D9 ();
// 0x00000116 Unity.Barracuda.Tensor Unity.Barracuda.PrecompiledComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void PrecompiledComputeOps_Concat_mAE5A82B79EDB97A8A8989E527B7568ADE1A09C1B ();
// 0x00000117 System.Void Unity.Barracuda.PrecompiledComputeOps::.cctor()
extern void PrecompiledComputeOps__cctor_m5FFB5BA2AF49669AAFEBF6F709260E806C0F1564 ();
// 0x00000118 System.Single[] Unity.Barracuda.ArrayTensorData::get_array()
extern void ArrayTensorData_get_array_m425EC1AAC3517996F08F8D7FD0FF45ED8DAEFBCF ();
// 0x00000119 System.Void Unity.Barracuda.ArrayTensorData::.ctor(System.Int32)
extern void ArrayTensorData__ctor_m3BAEAEA76F3BD0926C10EEA11EB0BBB0C513F505 ();
// 0x0000011A System.Void Unity.Barracuda.ArrayTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void ArrayTensorData__ctor_m0394B4998667B55315AE38EBE4140C852872EB00 ();
// 0x0000011B System.Void Unity.Barracuda.ArrayTensorData::Finalize()
extern void ArrayTensorData_Finalize_mC5B382A68793DBF18AE149141FACF20D5A55BE90 ();
// 0x0000011C System.Void Unity.Barracuda.ArrayTensorData::Dispose()
extern void ArrayTensorData_Dispose_mC11092A3252B4E5F2826F34EF6C3AE598B9BC8DC ();
// 0x0000011D System.Void Unity.Barracuda.ArrayTensorData::Reserve(System.Int32)
extern void ArrayTensorData_Reserve_m562860AFDBA9FAA54E383FAB44E9038D8FA64A91 ();
// 0x0000011E System.Void Unity.Barracuda.ArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void ArrayTensorData_Upload_mF9E752C7AE4A9A8CF8B68241BC43FA4610808567 ();
// 0x0000011F System.Boolean Unity.Barracuda.ArrayTensorData::ScheduleAsyncDownload(System.Int32)
extern void ArrayTensorData_ScheduleAsyncDownload_mE43073F7001162DE9AC9B9BCC87A39D0E7D55F2A ();
// 0x00000120 System.Single[] Unity.Barracuda.ArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void ArrayTensorData_Download_m618B778A3D5477E82D97F0A8C43D910C4BC86C81 ();
// 0x00000121 System.Single[] Unity.Barracuda.ArrayTensorData::SharedAccess(System.Int32&)
extern void ArrayTensorData_SharedAccess_m5FA0296A8DD4196DA519C1D13BD04A7BC620ACAD ();
// 0x00000122 System.Int32 Unity.Barracuda.ArrayTensorData::get_maxCapacity()
extern void ArrayTensorData_get_maxCapacity_m63BF03F2CFE9308AA8305C0F4031DF19B1A82CE4 ();
// 0x00000123 System.String Unity.Barracuda.ArrayTensorData::ToString()
extern void ArrayTensorData_ToString_mD843ED3FD11D926683488E4EA61B89B4EEF6F80B ();
// 0x00000124 System.Single[] Unity.Barracuda.SharedArrayTensorData::get_array()
extern void SharedArrayTensorData_get_array_m6A1713255C7F9F530000934E023FAAA1DA531600 ();
// 0x00000125 System.Int32 Unity.Barracuda.SharedArrayTensorData::get_offset()
extern void SharedArrayTensorData_get_offset_mDF1319535521E4794F0405DB8CC411C19DC36757 ();
// 0x00000126 System.Int32 Unity.Barracuda.SharedArrayTensorData::get_count()
extern void SharedArrayTensorData_get_count_mB18D421A20BD58279AF630AAD41BE33CF355EB18 ();
// 0x00000127 System.Void Unity.Barracuda.SharedArrayTensorData::.ctor(System.Single[],System.Int32,System.Int32)
extern void SharedArrayTensorData__ctor_m061B3E158FF768356CEDE5717AA8A81AB03D46EE ();
// 0x00000128 System.Void Unity.Barracuda.SharedArrayTensorData::Finalize()
extern void SharedArrayTensorData_Finalize_m1F123F5587D44E5C0FB1DA58776ECFB20B7A019C ();
// 0x00000129 System.Void Unity.Barracuda.SharedArrayTensorData::Dispose()
extern void SharedArrayTensorData_Dispose_mB8775E336F0A065F8E4D9A24E41F1A52A6C7C938 ();
// 0x0000012A System.Void Unity.Barracuda.SharedArrayTensorData::Reserve(System.Int32)
extern void SharedArrayTensorData_Reserve_m8088182776B5F9F1F6B4688010F68910E0BF0DCB ();
// 0x0000012B System.Void Unity.Barracuda.SharedArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void SharedArrayTensorData_Upload_m335C32EF165A3404752607CEDBB93DC7F654905D ();
// 0x0000012C System.Boolean Unity.Barracuda.SharedArrayTensorData::ScheduleAsyncDownload(System.Int32)
extern void SharedArrayTensorData_ScheduleAsyncDownload_m37E7CCCE07306292F260F26D45FD14929ADD70AE ();
// 0x0000012D System.Single[] Unity.Barracuda.SharedArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void SharedArrayTensorData_Download_mE0983C259A0E2AFE40C31ACDA361B89BAA0A8339 ();
// 0x0000012E System.Single[] Unity.Barracuda.SharedArrayTensorData::SharedAccess(System.Int32&)
extern void SharedArrayTensorData_SharedAccess_mC3864C6F17132D4AB24F810AF0E6C09A53365C50 ();
// 0x0000012F System.Int32 Unity.Barracuda.SharedArrayTensorData::get_maxCapacity()
extern void SharedArrayTensorData_get_maxCapacity_m8B0E26E4E4D1997CCE21C3E5CE72D8F38B08C078 ();
// 0x00000130 System.String Unity.Barracuda.SharedArrayTensorData::ToString()
extern void SharedArrayTensorData_ToString_m4393A3BC86D6C7D5DF1FAFE4A1B6E7FA9727D6AD ();
// 0x00000131 System.Void Unity.Barracuda.ReferenceCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void ReferenceCPUOps__ctor_mDD68313AA0AD0E4B3ECB362546DB874526A68483 ();
// 0x00000132 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(Unity.Barracuda.TensorShape,System.String)
extern void ReferenceCPUOps_NewTensor_mBD643440683183217FAC7EDB138AD54A81436551 ();
// 0x00000133 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensorLike(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_NewTensorLike_mF0182ADB2311F237C2F4140B83CB9796E37E2523 ();
// 0x00000134 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensorLike(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_NewTensorLike_m703B77927A501A1A3AAC47484BF76216A6E55AD0 ();
// 0x00000135 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(System.Int32,System.Int32,System.String)
extern void ReferenceCPUOps_NewTensor_m1817E7ACF6AC544CC15A3F9AFCB212A86C480485 ();
// 0x00000136 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::NewTensor(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern void ReferenceCPUOps_NewTensor_m07B8B052FC1F3B617FF91561A3656C99DCDCE861 ();
// 0x00000137 System.Void Unity.Barracuda.ReferenceCPUOps::ResetAllocator(System.Boolean)
extern void ReferenceCPUOps_ResetAllocator_mA728F83697B010DDD170422A53DDA59AABDDE7A4 ();
// 0x00000138 System.Single Unity.Barracuda.ReferenceCPUOps::ApplyFusedActivation(System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_ApplyFusedActivation_m05172403114B4E4E9F35491CCE1A8ED71E035254 ();
// 0x00000139 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceCPUOps_MatMul_m13514652547CDEC66825D6BC556869DA2CCE61D2 ();
// 0x0000013A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_Dense_mEFCA7EEC2EBA814C676D21D234C09EA2D1C4715D ();
// 0x0000013B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_Conv2D_m07E2E87A178BEBD17FBAD8FD28B0874C1C253DAD ();
// 0x0000013C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_DepthwiseConv2D_m73C8B24FAFCBA2FE7A9494A99250C01A23DC3EA6 ();
// 0x0000013D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_Conv2DTrans_mD9A5A30F12040F0303A4E496276F0CFD25AEAD45 ();
// 0x0000013E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Upsample2D_m01E9A806A5F8DAD84360D692D37E49313594058A ();
// 0x0000013F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceCPUOps_Resample2D_m8D6DD9FFA248C69A88D130AA2ADB33CFC330C8A7 ();
// 0x00000140 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
extern void ReferenceCPUOps_DepthToSpace_mF499CAC2FA3DA5899E31922EC6A575B911F57043 ();
// 0x00000141 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_SpaceToDepth_m5E82FE9690838B45FCC8E6CC9B7B1B391BCA0808 ();
// 0x00000142 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_MaxPool2D_m320CF62FDA441D22760BBC2E5A778A3C1A0AE1EE ();
// 0x00000143 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_AvgPool2D_mD26387F41F0062303867838F1F68355004FB53EA ();
// 0x00000144 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalMaxPool2D_m66A888F14F371102A0E1D616DC9EAC53B419772E ();
// 0x00000145 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalAvgPool2D_mE320546DD7BE55883159237F5BE04358178B0DA2 ();
// 0x00000146 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GlobalAvgVariancePool2D_mAC929DC6D37D3FE99341514E8F9301FE393B556D ();
// 0x00000147 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.Func`6<Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Single>)
extern void ReferenceCPUOps_ApplyPadding_m48718A3753DE1DBD8CB9CB332DD863350EFE1A89 ();
// 0x00000148 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceCPUOps_Border2D_m680F5B5655DD910F5DBD81C953406CA7B512BC79 ();
// 0x00000149 System.Void Unity.Barracuda.ReferenceCPUOps::ClampHWToTensorShape(Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void ReferenceCPUOps_ClampHWToTensorShape_m7EF808F1485CFF8C731581D18F9EAE4644416696 ();
// 0x0000014A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DReflect_mA412CC06954A1582F35D4E4F96C51F3A6E77FA50 ();
// 0x0000014B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DSymmetric_mAA68F3D34FC79FF70F2613E188B3BF6EEBA307AF ();
// 0x0000014C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Pad2DEdge_m996F89B3F311802A09074CE8A7C5250031251A43 ();
// 0x0000014D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_ScaleBias_m70953C381FAE153EC2310D8301C9BAD640A7FA6E ();
// 0x0000014E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_LRN_mAAE61B8878ADBFB725BB6ABDBD2ACBCB6D976A9C ();
// 0x0000014F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceCPUOps_Normalization_m2ED31A30113B1BB8A784EC7A3C2FF4F7568EAFF7 ();
// 0x00000150 System.Single Unity.Barracuda.ReferenceCPUOps::Bernoulli(System.Single)
extern void ReferenceCPUOps_Bernoulli_m2DB9CA8B791B86779D366EC8D610D0AEBF2B8EC9 ();
// 0x00000151 System.Single Unity.Barracuda.ReferenceCPUOps::Gaussian(System.Single,System.Single)
extern void ReferenceCPUOps_Gaussian_mDE4188CF9C56266E565FC02673871436F0F037D5 ();
// 0x00000152 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Dropout(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Dropout_m2E823A74837A9B2678179918084C585C29E73E37 ();
// 0x00000153 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_RandomNormal_m424B58F2A4466C131AEA20A2646F69396F7A925E ();
// 0x00000154 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void ReferenceCPUOps_RandomUniform_m7C70F539293BC4425944B57CEF77904B0E6B3520 ();
// 0x00000155 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void ReferenceCPUOps_Multinomial_mF69B6C2FB1592C07D411E69970FB6E45C9842825 ();
// 0x00000156 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void ReferenceCPUOps_OneHot_m3B6325547C606922D98AEFF90D07422923D98187 ();
// 0x00000157 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Relu(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Relu_m92679AC0AC8A63AF997F8444A1EF8F6A4DBCB805 ();
// 0x00000158 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_PRelu_mA3D8CEB59B1CFB7601CB8A0CECBE5AFD1498DAE8 ();
// 0x00000159 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Softmax(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Softmax_m91B4BF50BA12A1A1838A00254E9A28B93D720CD9 ();
// 0x0000015A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogSoftmax_mDF265E9435CA01F38AAB45737679DA70BC6D61DF ();
// 0x0000015B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Tanh_mB56E7BF351EF4BB8C2E8127FF8EEB1CDC3E7C1A8 ();
// 0x0000015C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sigmoid_mBB24C442E6C52813B8F88B37A0B84F83AE94BD7C ();
// 0x0000015D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Relu6_m96AB9D708DE9915552FA0E65EC7B36022BE16EC4 ();
// 0x0000015E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Elu_m97AF4B2C5097AF293894C90E094ABA1E8C03AEBE ();
// 0x0000015F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_LeakyRelu_m9DC9902A41AD63EC10F75CA6D915F5ABDA989096 ();
// 0x00000160 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceCPUOps_Selu_m84778AAE1201BA497044DB6585915A98AC3C23DB ();
// 0x00000161 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Swish(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Swish_mA06078D884AAB6513060B056D4D4683F56E46330 ();
// 0x00000162 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Abs(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Abs_m16D7650CA82CC980337B7A73A06BE68F551400C7 ();
// 0x00000163 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Neg(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Neg_m1EEF26B40EE67A5244FF17296E4AFDAE6B26AA49 ();
// 0x00000164 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Ceil(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Ceil_m72311738280162653F8909A29907DB81F6AFE36B ();
// 0x00000165 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceCPUOps_Clip_m5000204BF97E4307FC201B6E8E80F5C8A18A7C99 ();
// 0x00000166 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Floor(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Floor_m48E352F9762B00D63DF18D1FD7BBE86486B1E3E6 ();
// 0x00000167 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Reciprocal(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Reciprocal_mF52325CF174F00D51D96728FC3E2ECD98A926213 ();
// 0x00000168 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceCPUOps_Pow_mFC94307DF9E66C66A6D7468A10E94D5CC0EA50A4 ();
// 0x00000169 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Exp(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Exp_m67316964FBD3A32C4418CB1C20360EF40CE6C4B2 ();
// 0x0000016A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Log(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Log_m0AF0B3FDB552EE0987D72BA08BB4FEDFC655E707 ();
// 0x0000016B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Sqrt_m62CF32F28B603E87F13914883A56EF8B6D2E2A6E ();
// 0x0000016C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceCPUOps_Concat_mC99310C69F6BB2C7790B19DE85EA4142FC5D0C9E ();
// 0x0000016D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceCPUOps_StridedSlice_m6F1209623D7D0B776776B2190CD976A41BE95978 ();
// 0x0000016E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceCPUOps_Tile_mCF0D378F0D57E2061C6291CDDBDE1DE52ADA33D8 ();
// 0x0000016F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyElementwiseWithBroadcast(Unity.Barracuda.Tensor[],System.Func`3<System.Single,System.Single,System.Single>)
extern void ReferenceCPUOps_ApplyElementwiseWithBroadcast_mD578750D9814A784131CE00DF6D4806036ED8952 ();
// 0x00000170 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Add(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Add_m832C6717D064ADD9F36C28C3C9A9409B8E0A10A8 ();
// 0x00000171 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Sub_m4241789C5D7331370DD79D57A0B0B1144CEC94B1 ();
// 0x00000172 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Mul_mB949E937C8EF61E497040DBB43A5040E0F62644E ();
// 0x00000173 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Div(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Div_mFB7B56872C8F3485D092280327670CCACFE2EBEE ();
// 0x00000174 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Pow(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Pow_mB472035818303C23588EE342379A72B8B4E00D59 ();
// 0x00000175 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Min(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Min_mBD34B42BF2A091153E3D517D3D5699DC0A225CC4 ();
// 0x00000176 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Max(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Max_m4478640CCE0CB7D59AD3EA71455AAFBDA8948784 ();
// 0x00000177 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Mean(Unity.Barracuda.Tensor[])
extern void ReferenceCPUOps_Mean_mFA6C46BCDA576F621C0E5C23857C085B3396A445 ();
// 0x00000178 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMin_mBB30FBD3E42B49123E09F974257D6ADD537018C5 ();
// 0x00000179 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMax_m8750B53D6ABD567BDDE8D601B492D0D2FDB8AA39 ();
// 0x0000017A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceSum_m2934A5552782EBA55F70FC10FD1EDB7F506311B4 ();
// 0x0000017B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceMean_m66030455D2F1C4BE0903C7C082F69E2BA4EE5FFF ();
// 0x0000017C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceCPUOps_ReduceProd_mAAE7D65CB7A324AA54BC39FA143A6946D3170EAD ();
// 0x0000017D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::ApplyLogicalOperator(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Func`3<System.Single,System.Single,System.Single>)
extern void ReferenceCPUOps_ApplyLogicalOperator_mE2B63CEDEEF7F65C487332EADBD1256284E44289 ();
// 0x0000017E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Greater_m158723A4FD46DEB0B34A5034F8CABAFA8874C7E2 ();
// 0x0000017F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_GreaterEqual_m1EF3776AFE921FF7CFE3CF3D14E79E78ABAED7BD ();
// 0x00000180 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Less_m71FF3E77ED60CBC2A449252B7BF41F95C3C9C4E4 ();
// 0x00000181 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LessEqual_m05A45CD45870FBDAF7B543D7DAC582D7A8584099 ();
// 0x00000182 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Equal_m5F2B18B62B3B50C5392BFC4B2F8A94843E24D02B ();
// 0x00000183 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalOr_m45FB732DD72D712C6F0AF0A27D4DEBDE40F443FB ();
// 0x00000184 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalAnd_m0C271EA6B0C442D1D951EDE8D1AA30AEA480D1DD ();
// 0x00000185 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalXor_m1B2256B6277928ECE5E5C86E20EE4154A9FBAECC ();
// 0x00000186 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_LogicalNot_m32DEE4E3F3AABA57D92D99CE49F5E5C0CBC87D3F ();
// 0x00000187 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_CopyAndReshape_m0E89D9BD0123F00DB7516680923A2D5104EB51D0 ();
// 0x00000188 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Copy(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Copy_mA57BDB46A072C47351A9544B30D7D335AC2E6774 ();
// 0x00000189 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Flatten(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Flatten_m6441BF942441411CC5015335C6E9404911FCFFB4 ();
// 0x0000018A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_Reshape_m138BF2735A1FA82BAC8275434A7AA14BA8898912 ();
// 0x0000018B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceCPUOps_Expand_mFE4772FE2A93882372BE73EBAE6EE08C93E33EDC ();
// 0x0000018C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceCPUOps_Gather_m0BC10E31AD901F74E9040FE4EF5D470863843D8D ();
// 0x0000018D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Transpose(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Transpose_mB3ACC6DED198139B04D62D65CF6A24E65CE0D799 ();
// 0x0000018E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void ReferenceCPUOps_Prepare_m8D16A95B269A20EF3EE6BDE0730EFAD008E73125 ();
// 0x0000018F System.Single Unity.Barracuda.MathfEx::Tanh(System.Single)
extern void MathfEx_Tanh_mFCF880CD99AB7C86874BEE5762FA6B00858D3DB1 ();
// 0x00000190 System.Void Unity.Barracuda.MathfEx::.ctor()
extern void MathfEx__ctor_m19F1B179511AC5F847D92FE7BCB0B623F4D89525 ();
// 0x00000191 System.Int32 Unity.Barracuda.ComputeHelper::IDivC(System.Int32,System.Int32)
extern void ComputeHelper_IDivC_mA3B38C57C659A35C1666E5542FBE4B023E5F21EC ();
// 0x00000192 UnityEngine.ComputeBuffer Unity.Barracuda.ComputeTensorData::get_buffer()
extern void ComputeTensorData_get_buffer_m00042906C6FF966FB479D635EEB05021433F19D3 ();
// 0x00000193 System.Int32 Unity.Barracuda.ComputeTensorData::get_offset()
extern void ComputeTensorData_get_offset_m197D65AF529C80E56203B0B842504ED8C6642FC9 ();
// 0x00000194 System.Void Unity.Barracuda.ComputeTensorData::.ctor(Unity.Barracuda.TensorShape,System.String,Unity.Barracuda.ComputeInfo_ChannelsOrder,System.Boolean)
extern void ComputeTensorData__ctor_m73BBBAF5AC9967655757A9FBC2C099AB01B8F14E ();
// 0x00000195 System.Void Unity.Barracuda.ComputeTensorData::.ctor(UnityEngine.ComputeBuffer,Unity.Barracuda.TensorShape,System.Int32,System.String,Unity.Barracuda.ComputeInfo_ChannelsOrder)
extern void ComputeTensorData__ctor_m6A3F32FE7C166A940485A0C417151C935D09BF10 ();
// 0x00000196 System.Void Unity.Barracuda.ComputeTensorData::Finalize()
extern void ComputeTensorData_Finalize_m823C3E319668A7EA495518DB5479BD0262186BFB ();
// 0x00000197 System.Void Unity.Barracuda.ComputeTensorData::Dispose()
extern void ComputeTensorData_Dispose_mF194B2F3CB0A8BEFA1BF223AB18173C8C692DC42 ();
// 0x00000198 System.Void Unity.Barracuda.ComputeTensorData::Reserve(System.Int32)
extern void ComputeTensorData_Reserve_m6BB1C6430D11D82A329C9698C85DD81221E1FBDF ();
// 0x00000199 System.Void Unity.Barracuda.ComputeTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void ComputeTensorData_Upload_m773DEEE77CD6A3C7542424A3F0732CF0B88F16B7 ();
// 0x0000019A System.Boolean Unity.Barracuda.ComputeTensorData::ScheduleAsyncDownload(System.Int32)
extern void ComputeTensorData_ScheduleAsyncDownload_m51CCFE07A549D8FA2899468CEC544D88894A8A0B ();
// 0x0000019B System.Boolean Unity.Barracuda.ComputeTensorData::WaitFor3Frames(System.Int32)
extern void ComputeTensorData_WaitFor3Frames_m02CD3D747F936E7E6B243A2E9A6A0DFE66D01C7B ();
// 0x0000019C System.Boolean Unity.Barracuda.ComputeTensorData::WaitForAsyncReadback(System.Int32)
extern void ComputeTensorData_WaitForAsyncReadback_m4BBCE2CE95EE976209EB43FB638D9BD3B1F6EA9B ();
// 0x0000019D System.Single[] Unity.Barracuda.ComputeTensorData::ConvertFromOnDeviceFormat(Unity.Barracuda.TensorShape,System.Single[])
extern void ComputeTensorData_ConvertFromOnDeviceFormat_mD95495794E831B1ED40FEE91D58749ED23C57F56 ();
// 0x0000019E System.Single[] Unity.Barracuda.ComputeTensorData::Download(Unity.Barracuda.TensorShape)
extern void ComputeTensorData_Download_m56A6F1EC7ADEB9DC4C8232430EAC908DBD47E707 ();
// 0x0000019F System.Single[] Unity.Barracuda.ComputeTensorData::SharedAccess(System.Int32&)
extern void ComputeTensorData_SharedAccess_mF9F0FC422A436363F46E855E257001D42FF18A8F ();
// 0x000001A0 System.Int32 Unity.Barracuda.ComputeTensorData::get_maxCapacity()
extern void ComputeTensorData_get_maxCapacity_m06CB626FA139D48666A2D3C183B66888252091EC ();
// 0x000001A1 System.String Unity.Barracuda.ComputeTensorData::ToString()
extern void ComputeTensorData_ToString_m97A2135C89BC71861E8E8C50198C5858E5A80E31 ();
// 0x000001A2 System.Void Unity.Barracuda.SharedComputeTensorData::.ctor(UnityEngine.ComputeBuffer,Unity.Barracuda.TensorShape,System.Int32,System.String,Unity.Barracuda.ComputeInfo_ChannelsOrder)
extern void SharedComputeTensorData__ctor_mA34AC8C4B252B988962C09698210203CDFCDDD87 ();
// 0x000001A3 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedOnly_m321D4F187F5D9FDF32F12D1266A907206FA98138 ();
// 0x000001A4 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedOnly_mB982835083BDAD7F0727121D7D57135E3E250D34 ();
// 0x000001A5 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedGreen_m4D94BA443D95587B15762705095DBD254B8D699C ();
// 0x000001A6 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedGreen_m2C17E81A34288FCC27DB8C22D2935E259E894C54 ();
// 0x000001A7 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.TextureFormat)
extern void TextureFormatUtils_IsRedGreenBlue_mA6AA26D8A58D89B92BE248455468CD78A306E89D ();
// 0x000001A8 System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.RenderTextureFormat)
extern void TextureFormatUtils_IsRedGreenBlue_m139CD6B56E79C0E2AA427EA866546B0F41AFB976 ();
// 0x000001A9 System.Boolean Unity.Barracuda.TextureFormatUtils::IsAlphaOnly(UnityEngine.Texture)
extern void TextureFormatUtils_IsAlphaOnly_m5D282815F90297EB1896254672E50D0CFFD326A9 ();
// 0x000001AA System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedOnly(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedOnly_mC19FBF22277299D1E34C02B74A7C790E0A892EA8 ();
// 0x000001AB System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreen(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedGreen_m8F79D94B3BC7E9B2152CAC509D5F3DDAF2D15624 ();
// 0x000001AC System.Boolean Unity.Barracuda.TextureFormatUtils::IsRedGreenBlue(UnityEngine.Texture)
extern void TextureFormatUtils_IsRedGreenBlue_mEAF24101BA58205C089EC2512E98B30E8578AC9C ();
// 0x000001AD System.Int32 Unity.Barracuda.TextureFormatUtils::FormatToChannelCount(UnityEngine.Texture)
extern void TextureFormatUtils_FormatToChannelCount_m463CFF702D2313CC71421FD57DF7D9EDB02C1413 ();
// 0x000001AE UnityEngine.Color Unity.Barracuda.TextureFormatUtils::FormatToChannelMask(UnityEngine.Texture,System.Int32)
extern void TextureFormatUtils_FormatToChannelMask_m230AC8C9A0F483E2F739DA5C1FA4040175CCB2A3 ();
// 0x000001AF UnityEngine.Color Unity.Barracuda.TextureFormatUtils::FormatToChannelMask(UnityEngine.Texture)
extern void TextureFormatUtils_FormatToChannelMask_m396E95504355E9C0AD2EA00EAB90C664900D37A3 ();
// 0x000001B0 System.Void Unity.Barracuda.TextureFormatUtils::.ctor()
extern void TextureFormatUtils__ctor_m39ADFB1C8B0D6C185C19AB6F2949BE695131206D ();
// 0x000001B1 Unity.Barracuda.TensorShape Unity.Barracuda.TextureAsTensorData::get_shape()
extern void TextureAsTensorData_get_shape_m8FEE1327E20053918C281E6389DC6C1F92D7C862 ();
// 0x000001B2 UnityEngine.Texture[] Unity.Barracuda.TextureAsTensorData::get_textures()
extern void TextureAsTensorData_get_textures_mA222AE3B4ADE24ED24A217B89FFC8A43C0B45CF7 ();
// 0x000001B3 System.Int32 Unity.Barracuda.TextureAsTensorData::get_interpretPixelAsChannels()
extern void TextureAsTensorData_get_interpretPixelAsChannels_mB0364FF86DFB61C05F24E496273DC7AD10C0274C ();
// 0x000001B4 Unity.Barracuda.TextureAsTensorData_InterpretDepthAs Unity.Barracuda.TextureAsTensorData::get_interpretDepthAs()
extern void TextureAsTensorData_get_interpretDepthAs_m48227AF78035F9570EF181BD10ADF1FD7556C79B ();
// 0x000001B5 Unity.Barracuda.TextureAsTensorData_InterpretColorAs Unity.Barracuda.TextureAsTensorData::get_interpretColorAs()
extern void TextureAsTensorData_get_interpretColorAs_m3F56E385750C561076C5B86613C35FEEC9F45378 ();
// 0x000001B6 Unity.Barracuda.TextureAsTensorData_Flip Unity.Barracuda.TextureAsTensorData::get_flip()
extern void TextureAsTensorData_get_flip_mCD5F9757B60718901108EFB69E310ABA44EC3E8C ();
// 0x000001B7 System.Void Unity.Barracuda.TextureAsTensorData::.ctor(UnityEngine.Texture[],System.Int32,Unity.Barracuda.TextureAsTensorData_Flip,Unity.Barracuda.TextureAsTensorData_InterpretDepthAs,Unity.Barracuda.TextureAsTensorData_InterpretColorAs)
extern void TextureAsTensorData__ctor_m31D0AC0EDA63D735CE59C1971F0A68D0FED5BCB3 ();
// 0x000001B8 System.Void Unity.Barracuda.TextureAsTensorData::.ctor(UnityEngine.Texture,System.Int32,Unity.Barracuda.TextureAsTensorData_Flip,Unity.Barracuda.TextureAsTensorData_InterpretDepthAs,Unity.Barracuda.TextureAsTensorData_InterpretColorAs)
extern void TextureAsTensorData__ctor_m8073C55DAD3D36A64874AB6109E8C2BD23D50225 ();
// 0x000001B9 System.Void Unity.Barracuda.TextureAsTensorData::Reserve(System.Int32)
extern void TextureAsTensorData_Reserve_m0CB61F3084A4F6A3CC53479257369A0F1615FC2F ();
// 0x000001BA System.Void Unity.Barracuda.TextureAsTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void TextureAsTensorData_Upload_mD5BA8E11BCAA6199FB5C4E42EC1C28F2FB0DE180 ();
// 0x000001BB System.Boolean Unity.Barracuda.TextureAsTensorData::ScheduleAsyncDownload(System.Int32)
extern void TextureAsTensorData_ScheduleAsyncDownload_m8A8364C67FE1FA4C1AB4D5858717224E0F5BA4B7 ();
// 0x000001BC System.Single[] Unity.Barracuda.TextureAsTensorData::Download(Unity.Barracuda.TensorShape)
extern void TextureAsTensorData_Download_m5B60DDCF5DF915CE03C3847DF7E7C2F5640BC287 ();
// 0x000001BD System.Single[] Unity.Barracuda.TextureAsTensorData::SharedAccess(System.Int32&)
extern void TextureAsTensorData_SharedAccess_m1241A9CB7C7E7DCD3246FF2C25BC671B2781B383 ();
// 0x000001BE System.Int32 Unity.Barracuda.TextureAsTensorData::get_maxCapacity()
extern void TextureAsTensorData_get_maxCapacity_mFF48ADD0FE7F014A62C808676288D65AF9BC0B84 ();
// 0x000001BF System.Void Unity.Barracuda.TextureAsTensorData::Dispose()
extern void TextureAsTensorData_Dispose_m0E6AD90FEF1EB60B062081D491FDC00FD381A5CF ();
// 0x000001C0 System.Void Unity.Barracuda.ReferenceComputeOps::.ctor(UnityEngine.ComputeShader,Unity.Barracuda.ITensorAllocator)
extern void ReferenceComputeOps__ctor_m78970125AC9B963679BD5F395EBD1B71B292E0A6 ();
// 0x000001C1 Unity.Barracuda.ComputeTensorData Unity.Barracuda.ReferenceComputeOps::Pin(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Pin_mB288085B43CD3374FE22867BC69E7989DC2077E6 ();
// 0x000001C2 System.Void Unity.Barracuda.ReferenceComputeOps::SetTensor(Unity.Barracuda.ComputeFunc,System.String,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_SetTensor_m79CAC2ABBD6E50372674EF04D7E7855A61DB140B ();
// 0x000001C3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::NewTensor(Unity.Barracuda.ComputeFunc,System.String,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_NewTensor_m8F4AF91303CFD2D62FB90E95C2075F280EF66284 ();
// 0x000001C4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dispatch(Unity.Barracuda.ComputeFunc,Unity.Barracuda.TensorShape,System.Int32,System.Int32,System.Int32,System.String)
extern void ReferenceComputeOps_Dispatch_m232F61BD10C152F053DEFAC5B2EB647FF54B6A5F ();
// 0x000001C5 Unity.Barracuda.ITensorData Unity.Barracuda.ReferenceComputeOps::TextureToTensorData(Unity.Barracuda.TextureAsTensorData,System.String)
extern void ReferenceComputeOps_TextureToTensorData_mD41A0E4D25638035BD04819CF8C9EF9BEF3DCCF4 ();
// 0x000001C6 System.Void Unity.Barracuda.ReferenceComputeOps::TensorToRenderTexture(Unity.Barracuda.Tensor,UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Texture3D)
extern void ReferenceComputeOps_TensorToRenderTexture_m3988DA9DA59D7DF60E12F12EDBF67E1933416259 ();
// 0x000001C7 System.Boolean Unity.Barracuda.ReferenceComputeOps::ShouldFlattenInputForDenseLayer(Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_ShouldFlattenInputForDenseLayer_m39A5315255B9EFDE4B73F8044AF7D1737FC90C81 ();
// 0x000001C8 System.Boolean Unity.Barracuda.ReferenceComputeOps::IsFusedActivationSupported(Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_IsFusedActivationSupported_m2724A2A311A2144A3E05F98231286CEDDBA14835 ();
// 0x000001C9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void ReferenceComputeOps_MatMul_m6514C53106AB4286DAE52D0AC9D51D6EEFB77D11 ();
// 0x000001CA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_Dense_mA362B631E059B41E0DC048BEF06C86EFE05BC158 ();
// 0x000001CB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2DWinograd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_Conv2DWinograd_m9131121F5A0F7EC94100E1BCC62F57D9876B1213 ();
// 0x000001CC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_Conv2D_m32E1D72441E9F0D1BEFCF747A9CAE3C298B1D379 ();
// 0x000001CD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_DepthwiseConv2D_mD0543FD16C18EAA40F82E29617A86EF7757A8A48 ();
// 0x000001CE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_Conv2DTrans_mC42EE657C717F7D77D8BADE961EF704AE255CE48 ();
// 0x000001CF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Upsample2D_m42BDB89695D9FC310F956F9B8C461025A65C3DF9 ();
// 0x000001D0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void ReferenceComputeOps_Resample2D_m6421B498F31E7C1A4C3751967F602FB2D7B67B95 ();
// 0x000001D1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
extern void ReferenceComputeOps_DepthToSpace_mCACCFA6479C3FF21E842AC68A47785FE80928C8E ();
// 0x000001D2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_SpaceToDepth_mAC34378C035CF1CB1E2492F35B29CE2E526719FD ();
// 0x000001D3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pool2D(System.String,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_Pool2D_m9DC194E6198CC0BBE462C62B723EEF66A8531D0A ();
// 0x000001D4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_MaxPool2D_mCD3B432F8A5DFF00D1CC298F50661AECCC257414 ();
// 0x000001D5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_AvgPool2D_mE2B305117136C4ADE1A329CA854A9DF9E26FF84B ();
// 0x000001D6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalPool2D(System.String,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalPool2D_mF67CD0407EB528D51116E619685A79CAD3981F89 ();
// 0x000001D7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalMaxPool2D_m16D88D91DB3F4EE2F4D0DCC1CF7BF96E5EDE2CDC ();
// 0x000001D8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalAvgPool2D_mD6E68919EBAAF3269233AAFA6CC7451CFD215B83 ();
// 0x000001D9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GlobalAvgVariancePool2D_m43367BA7D20B624C53B70CEE8CB433EC8D9163A1 ();
// 0x000001DA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.String,System.Single)
extern void ReferenceComputeOps_ApplyPadding_m52137EA74836862E7C92A89FFD55780CF1F95D6B ();
// 0x000001DB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void ReferenceComputeOps_Border2D_m9E2F8E425A466FD3B8BD8722222986E1ADF209B2 ();
// 0x000001DC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DReflect_mDFE81E8F0C92BA36024E372AB8883146A5F65B74 ();
// 0x000001DD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DSymmetric_mED67CB2B1324EE59209FE69436F47696BA102636 ();
// 0x000001DE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Pad2DEdge_m450FCE26FEFE026D56625287AD8864AC15F947BD ();
// 0x000001DF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_ScaleBias_mDFE456548C700C14F900CE39E14DE20166A54055 ();
// 0x000001E0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void ReferenceComputeOps_Normalization_mF7C5C3C80361CADA3269B18AA3738DA14B8C77EB ();
// 0x000001E1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void ReferenceComputeOps_LRN_m4C61E5506E8FF0FEA5FBEE2A3B08532FF4DD3A7C ();
// 0x000001E2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Dropout(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Dropout_m1B8AD2ADAF07D5D156D9141EDFC9889269A844AC ();
// 0x000001E3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Activation(System.String,Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Activation_mAFF6D364E313C17E5769755CD04896C550072F1F ();
// 0x000001E4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Relu(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Relu_m39EAA8E5B3E6E37F37EAE6E85CBBA4EB7D5072A2 ();
// 0x000001E5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_PRelu_m9F04D170BE452D5A9F75B48603D1A844C98DD194 ();
// 0x000001E6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Softmax(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Softmax_mD93635250134EAFFAD6E680D386E4636B09BE095 ();
// 0x000001E7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogSoftmax(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogSoftmax_m403BF63649343FF97B033CAD45993BF0ADD3F58F ();
// 0x000001E8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tanh(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Tanh_mD65EDCF25CCA8F77CCA040E848F06DB15D536900 ();
// 0x000001E9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sigmoid(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sigmoid_mBDAFE69AFEED29AA8B87F049F0583C9B52924112 ();
// 0x000001EA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Relu6(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Relu6_mD2D288001F5E45C9F535B823620D8332711606EA ();
// 0x000001EB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Elu_m64A491A8C9F1A15D21819D24D99CFFE58A54ED69 ();
// 0x000001EC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_LeakyRelu_m2DC5C6A715212F5DD7B6EE8162CE7933BFAB4DF5 ();
// 0x000001ED Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Selu_mFBD79D9EE3969B56A59B182231BF46198579AEEB ();
// 0x000001EE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Swish(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Swish_m0F2797F6B162157B3AD1E1AB513422F1CF1F1F74 ();
// 0x000001EF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Abs(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Abs_m33E76048163548BC039465F73E1BE9574F7E973E ();
// 0x000001F0 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Neg(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Neg_mC7DD206ABF96DBF2504BF290A439CE442A211DF3 ();
// 0x000001F1 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Ceil(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Ceil_m4525F2421B75E83E579975AEB4781454B5CA8E5C ();
// 0x000001F2 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void ReferenceComputeOps_Clip_m0EBA5A582A747788E6F23DF3166A3288FB9B7CBF ();
// 0x000001F3 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Floor(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Floor_mE7C099E2F696E7DA4C69EE5DFFD3E24BA2421032 ();
// 0x000001F4 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reciprocal(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Reciprocal_mE36309D0D30F8A9A1A5FB234F24B1DCA7BB615B6 ();
// 0x000001F5 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pow(Unity.Barracuda.Tensor,System.Single)
extern void ReferenceComputeOps_Pow_m21DD6C2116B533DC977A1C6EFF6549508EF0F4E7 ();
// 0x000001F6 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Exp(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Exp_m6D2F897F0C482962DDBBD9D8B128045A24498570 ();
// 0x000001F7 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Log(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Log_m26E892CE44353769485B0FB1D8A4205D734B50A8 ();
// 0x000001F8 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sqrt(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Sqrt_m335AC3B56704799ABF738C5A99CC2C259453E722 ();
// 0x000001F9 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_Expand_m0CA1715C027A4773F0505ADCE615A56D8B377BC9 ();
// 0x000001FA Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ElementwiseWithBroadcast(System.String,Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_ElementwiseWithBroadcast_mC67B4ACED328458E8371545743D45E273117E84A ();
// 0x000001FB Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Add(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Add_mB4CDC6ED67AD3B8047705C5EE5502C1AB9AC2A9E ();
// 0x000001FC Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Sub(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Sub_mE1E7AD3EF81F91546723D67807207D510E0FF3DF ();
// 0x000001FD Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Mul(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Mul_m9DBAEF69F72F1944E96729C74DA7AE3B34B9C606 ();
// 0x000001FE Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Div(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Div_mF6D55B329BDDBA8F34156D7C6793A9C02A0EB48B ();
// 0x000001FF Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Pow(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Pow_m4490F5C4562D19EE1EC80CA5322D790A813C6793 ();
// 0x00000200 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Min(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Min_m47602A8FC31D2DCB3DC060FCA7DBC7DE3C8E0723 ();
// 0x00000201 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Max(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Max_mD629CBC759A681964C446832901B6D103202E44A ();
// 0x00000202 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Mean(Unity.Barracuda.Tensor[])
extern void ReferenceComputeOps_Mean_m8BF848D64A96CA11F15D9DA5D9570861114FBE77 ();
// 0x00000203 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reduce(System.String,Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_Reduce_mCB5F475BEB9CBB2703C5D98A6D4E8A0F9487B9B3 ();
// 0x00000204 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMin_mB45626444ECBC2EBA33E9DE8EF627D019D72C6C9 ();
// 0x00000205 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMax_mB4FE3689151450CA6DD35F13603FCE5BC8898765 ();
// 0x00000206 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceSum_mC6088AFADD85CBBD2A178F6E0D7A6623EBA8110C ();
// 0x00000207 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceMean_m24A3DF2BD140E376B3A555FFEC100920E08DF1B3 ();
// 0x00000208 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void ReferenceComputeOps_ReduceProd_mB3FFF9B9AF1835951EC8816AEDECC718A4A09BCF ();
// 0x00000209 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Greater_m27A074761DDD1C38FDC81CE883290DC91C0EA083 ();
// 0x0000020A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_GreaterEqual_m85438CDA913ED9C82F48D66EDF62DAA67A6E6397 ();
// 0x0000020B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Less_m48697328022764E76DD14CEBD13560D0C096B7DF ();
// 0x0000020C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LessEqual_m1051108674C6601A96202B3B97589968E9ADCBA7 ();
// 0x0000020D Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Equal_m44FF30511C709EE55FA8AE69770C3B25B2375536 ();
// 0x0000020E Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalOr_mF53F15EEA3870230D1C3D63F0BFB69669078F6A3 ();
// 0x0000020F Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalAnd_m91CFD2EDC17665B706D28752F90EB60517652E45 ();
// 0x00000210 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalXor_m6F4EDCEB88B4B7BD4A3DC80D76C095EFC92FD182 ();
// 0x00000211 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::LogicalNot(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_LogicalNot_mA2F7A1347771126110141E365B35BAF6C0AF4D63 ();
// 0x00000212 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::CopyAndReshape_NCHW(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_CopyAndReshape_NCHW_mBCAFD1F9D61770AA9B04FE080C5C98775725FF74 ();
// 0x00000213 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_CopyAndReshape_mF640E1C24B238B6B5AC7DBF3263F4C82EF0348BF ();
// 0x00000214 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Flatten(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Flatten_m4547FCEB30C6FAFA59FC4313A6A55988E0BB37DD ();
// 0x00000215 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void ReferenceComputeOps_Reshape_m86B0290E8C8CBE00E3961A456474E62478B099C6 ();
// 0x00000216 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Transpose(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Transpose_mA74836F4FF9D7993774428747823A3C3433338BA ();
// 0x00000217 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceComputeOps_Concat_m68019851C02D07ED1DBCBA80B783F0DA2F44748F ();
// 0x00000218 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void ReferenceComputeOps_StridedSlice_m36ADD677093043D14492E81BE526AD58258AA1B1 ();
// 0x00000219 Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void ReferenceComputeOps_Tile_m322E3060A0FCEB2D56CDE8B0AD7AD917DDC444CD ();
// 0x0000021A Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void ReferenceComputeOps_Gather_mC940057F2CA1876107B4FDC195682794D9F9901E ();
// 0x0000021B Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Copy(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Copy_mE4A78A65DBD76120AE1768BDB0CA8C9228BB69F7 ();
// 0x0000021C Unity.Barracuda.Tensor Unity.Barracuda.ReferenceComputeOps::Prepare(Unity.Barracuda.Tensor)
extern void ReferenceComputeOps_Prepare_m5AD3ADDC254546AF06443106AF3F3D43DE4E0F06 ();
// 0x0000021D System.Void Unity.Barracuda.ReferenceComputeOps::.cctor()
extern void ReferenceComputeOps__cctor_m494817A327C6DCF92B250E72C41DCE0AE2742545 ();
// 0x0000021E System.UInt32 Unity.Barracuda.ComputeFunc::get_threadGroupSize()
extern void ComputeFunc_get_threadGroupSize_mD3791CE3D5BE600F10AC28AFB040841838C49002_AdjustorThunk ();
// 0x0000021F System.Int32 Unity.Barracuda.ComputeFunc::get_width()
extern void ComputeFunc_get_width_m3FB4CF254EF494300BC7DAD8AB01294B96BD4354_AdjustorThunk ();
// 0x00000220 System.Int32 Unity.Barracuda.ComputeFunc::get_height()
extern void ComputeFunc_get_height_m01483F070B7165BA2D3041290B6CE8FBA0A344AF_AdjustorThunk ();
// 0x00000221 System.Int32 Unity.Barracuda.ComputeFunc::get_depth()
extern void ComputeFunc_get_depth_mAAD50C0ECF48E4D4CF0F08EE46C07D2C14ED9E88_AdjustorThunk ();
// 0x00000222 Unity.Barracuda.ComputeFunc_TensorDecl Unity.Barracuda.ComputeFunc::GetTensorDecl(System.String)
extern void ComputeFunc_GetTensorDecl_m7FAAA5A004132B7BD531A89E367DF240BF41383D ();
// 0x00000223 System.Int32 Unity.Barracuda.ComputeFunc::GetTensorData(System.String)
extern void ComputeFunc_GetTensorData_mBF1E716080528FB9388E523295F1B20AD48BBD80 ();
// 0x00000224 UnityEngine.Texture2D Unity.Barracuda.ComputeFunc::get_dummyTexture2D()
extern void ComputeFunc_get_dummyTexture2D_mB000C07FB2ED6CAB171217A0DDBFE94B44A0FB08 ();
// 0x00000225 UnityEngine.Texture3D Unity.Barracuda.ComputeFunc::get_dummyTexture3D()
extern void ComputeFunc_get_dummyTexture3D_mB1B5DC2EDB3229981BEEBFE0D91BC67D1878F3B4 ();
// 0x00000226 UnityEngine.Texture2DArray Unity.Barracuda.ComputeFunc::get_dummyTexture2DArray()
extern void ComputeFunc_get_dummyTexture2DArray_mCE714E4C1BDF830A20E8B199EFE5272B7A1323C2 ();
// 0x00000227 System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader,System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc__ctor_m9529DDA568AEF1EF65664009421F458EFC91FE89_AdjustorThunk ();
// 0x00000228 System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader,System.String)
extern void ComputeFunc__ctor_m3BE3478CD6285D34342977049F9FABD427B81664_AdjustorThunk ();
// 0x00000229 System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader[],System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc__ctor_mD3D8FAC46E094A73FFA160178E6C87D3B9331F5B_AdjustorThunk ();
// 0x0000022A System.Void Unity.Barracuda.ComputeFunc::.ctor(UnityEngine.ComputeShader[],System.String)
extern void ComputeFunc__ctor_mEFCF989D5D68895324F50475DE69E4706B3880A9_AdjustorThunk ();
// 0x0000022B System.Void Unity.Barracuda.ComputeFunc::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeFunc_SetTensor_mA150FEBFBB8726D495B585530C9B86D7C450A7BC_AdjustorThunk ();
// 0x0000022C System.Void Unity.Barracuda.ComputeFunc::SetTensor(Unity.Barracuda.ComputeFunc_TensorDecl,System.Int32,Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.Int64)
extern void ComputeFunc_SetTensor_m6AB062D9F53452BB3E2974A07EF7082FD9D2331F_AdjustorThunk ();
// 0x0000022D System.Void Unity.Barracuda.ComputeFunc::SetTensor(System.String,Unity.Barracuda.TensorShape,UnityEngine.Texture,System.Int64)
extern void ComputeFunc_SetTensor_m0812492D6BFDB6757427722F8D2DC2D6DA91ADFC_AdjustorThunk ();
// 0x0000022E System.Void Unity.Barracuda.ComputeFunc::SetTensorDecl(System.String,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeFunc_SetTensorDecl_mA2D7527BA08F00734B04A2A8BA583825BA07A404_AdjustorThunk ();
// 0x0000022F System.Void Unity.Barracuda.ComputeFunc::SetTensorDecl(Unity.Barracuda.ComputeFunc_TensorDecl,Unity.Barracuda.TensorShape,System.Int64)
extern void ComputeFunc_SetTensorDecl_m67309E8200A7E6E820F6896BADE0125E9F3AE2B9_AdjustorThunk ();
// 0x00000230 System.Void Unity.Barracuda.ComputeFunc::SetTensorBuffer(System.String,UnityEngine.ComputeBuffer)
extern void ComputeFunc_SetTensorBuffer_m9522CCD1FF83F3FE670A42F3B8FACA18BBDF647C_AdjustorThunk ();
// 0x00000231 System.Void Unity.Barracuda.ComputeFunc::SetTensorBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern void ComputeFunc_SetTensorBuffer_mBEBA7B4DFD6B45597E7D0A625DB639479EE2FF07_AdjustorThunk ();
// 0x00000232 System.Void Unity.Barracuda.ComputeFunc::SetTexture(System.String,UnityEngine.Texture)
extern void ComputeFunc_SetTexture_m17967F3D3C2284C81269241017CB4278F58C3CD5_AdjustorThunk ();
// 0x00000233 System.Void Unity.Barracuda.ComputeFunc::Dispatch(System.ValueTuple`3<System.Int32,System.Int32,System.Int32>)
extern void ComputeFunc_Dispatch_mCC2EADE09C8B6FFC4CCBBCF18D8E0B7E184630D6_AdjustorThunk ();
// 0x00000234 System.Void Unity.Barracuda.ComputeFunc::Dispatch(System.Int32,System.Int32,System.Int32)
extern void ComputeFunc_Dispatch_m205BBCB031C45D7CD1B6CA071670945CA6CBC624_AdjustorThunk ();
// 0x00000235 System.Int32 Unity.Barracuda.ComputeFunc::IntDivCeil(System.Int32,System.Int32)
extern void ComputeFunc_IntDivCeil_m46ED6F038D3E03282F8CE1BADDC59CF9D99F1685 ();
// 0x00000236 System.String Unity.Barracuda.ComputeFunc::FindBestKernelMatchingDimensions(UnityEngine.ComputeShader[],System.String[],System.Int32,System.Int32,System.Int32)
extern void ComputeFunc_FindBestKernelMatchingDimensions_mD37205B0B51943B7F7A16C0BEAC3831293CF367F ();
// 0x00000237 System.Void Unity.Barracuda.ComputeFunc::.cctor()
extern void ComputeFunc__cctor_m4699F6AF4669ECF8524F82EC716CA4FFAEB240AA ();
// 0x00000238 System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(System.Int32)
extern void UnsafeArrayTensorData__ctor_m149C5BEB7CA0DFE1E1B09BFCF42ADC81D4C1E070 ();
// 0x00000239 System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.TensorShape)
extern void UnsafeArrayTensorData__ctor_m5D3F13F688B842A90B40BF320C8F60DB93F8DF0D ();
// 0x0000023A System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.ArrayTensorData)
extern void UnsafeArrayTensorData__ctor_mFAB80477EFA759A27E8F7EEB2D52756D673BED4F ();
// 0x0000023B System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(Unity.Barracuda.SharedArrayTensorData)
extern void UnsafeArrayTensorData__ctor_m618776D2DDC9618F839EC5C22A210F3CEAB39D7C ();
// 0x0000023C System.Void Unity.Barracuda.UnsafeArrayTensorData::.ctor(System.Single[],System.Int32,System.Int32,System.Boolean)
extern void UnsafeArrayTensorData__ctor_mD4009B50DCE0B86F4C8C6AE3A6857F7E5FAE6C52 ();
// 0x0000023D System.Void Unity.Barracuda.UnsafeArrayTensorData::Finalize()
extern void UnsafeArrayTensorData_Finalize_m3CC6F9BB70460923D33E6F2783AFF2984E830999 ();
// 0x0000023E System.Void Unity.Barracuda.UnsafeArrayTensorData::Dispose()
extern void UnsafeArrayTensorData_Dispose_mB5D75E1B3D8BA406CD273DC0756D72513476879A ();
// 0x0000023F System.Void Unity.Barracuda.UnsafeArrayTensorData::Reserve(System.Int32)
extern void UnsafeArrayTensorData_Reserve_m7CF5FB68A4C3780B0C5AED9AA13F3152613B44CA ();
// 0x00000240 System.Void Unity.Barracuda.UnsafeArrayTensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
extern void UnsafeArrayTensorData_Upload_m27D28A8AA9041355D411665509EE6EFF908994F9 ();
// 0x00000241 System.Single[] Unity.Barracuda.UnsafeArrayTensorData::Download(Unity.Barracuda.TensorShape)
extern void UnsafeArrayTensorData_Download_m29CA2F0B08DE449D1FD92C6080B5A21CD6FFDE36 ();
// 0x00000242 System.String Unity.Barracuda.UnsafeArrayTensorData::ToString()
extern void UnsafeArrayTensorData_ToString_m7C24DAA2A28E317A27EA40439E19D04FE23EAD4C ();
// 0x00000243 Unity.Barracuda.BLASPlugin Unity.Barracuda.UnsafeArrayCPUOps::get_blas()
extern void UnsafeArrayCPUOps_get_blas_m23D3123C2FD1FFEEBCC575252E1C135E18B13476 ();
// 0x00000244 System.Void Unity.Barracuda.UnsafeArrayCPUOps::.ctor(Unity.Barracuda.ITensorAllocator)
extern void UnsafeArrayCPUOps__ctor_m5FB84147B3829CB24E248ABA4F5518A08435AB3E ();
// 0x00000245 Unity.Barracuda.UnsafeArrayTensorData Unity.Barracuda.UnsafeArrayCPUOps::Pin(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Pin_m016E0895EA7E0FCE9840DCF073F2177C2DA395D0 ();
// 0x00000246 System.Void Unity.Barracuda.UnsafeArrayCPUOps::Parallel_For(System.Int64,System.Int64,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_Parallel_For_m47802FA70625B1120955CE0AA91B8430577B5E46 ();
// 0x00000247 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Neg(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Neg_mED3231CE876BD30415D7524A91FD28DA8C10C06E ();
// 0x00000248 System.Void Unity.Barracuda.UnsafeArrayCPUOps::NegInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_NegInnerLoop_m742E8C5C40A5B4E55AA74242EFDE34DB3B989EF4 ();
// 0x00000249 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Relu(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Relu_mE12EBFE0388C47544CE5E39BDFFDE41CEE0C268C ();
// 0x0000024A System.Void Unity.Barracuda.UnsafeArrayCPUOps::ReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_ReluInnerLoop_m6F4DBD96C2C25078F5FD07849273816CEEF54CA2 ();
// 0x0000024B Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Relu6(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Relu6_m22A80FE6FF0B4CF5C3561071C5B0447DB51B3B41 ();
// 0x0000024C System.Void Unity.Barracuda.UnsafeArrayCPUOps::Relu6InnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_Relu6InnerLoop_mB1E79BBEA04B38F9D9E03428D7B8E994A5C10A71 ();
// 0x0000024D Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void UnsafeArrayCPUOps_LeakyRelu_m009BEBFA78A7BE629C687A4FB1F5519EB2DA95CD ();
// 0x0000024E System.Void Unity.Barracuda.UnsafeArrayCPUOps::LeakyReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*,System.Single)
extern void UnsafeArrayCPUOps_LeakyReluInnerLoop_m4334D4E0D512298D6BB01D329211BE67395FE952 ();
// 0x0000024F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Elu(Unity.Barracuda.Tensor,System.Single)
extern void UnsafeArrayCPUOps_Elu_mECA511B48B7DA6615BDDF29433BD34121148AFA1 ();
// 0x00000250 System.Void Unity.Barracuda.UnsafeArrayCPUOps::EluInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*,System.Single)
extern void UnsafeArrayCPUOps_EluInnerLoop_m39BF6D936379CDD5EF175F7ED31604BF79BE0E21 ();
// 0x00000251 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_PRelu_mDBD3FE604240E9ECE426FDFBBE8FFC9928BE70D5 ();
// 0x00000252 System.Void Unity.Barracuda.UnsafeArrayCPUOps::PReluInnerLoop(System.Int32,System.Int32,System.Single*,System.Int32,System.Single*,System.Single*,System.Int32)
extern void UnsafeArrayCPUOps_PReluInnerLoop_m43A22D7E0D569CEE12131931BBB5FE61713B57F0 ();
// 0x00000253 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sigmoid(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sigmoid_m277A4006A10A618CE90003BCA3FFDE8C34B73313 ();
// 0x00000254 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SigmoidInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SigmoidInnerLoop_mB364299D9E14C37FDC12A6932D652A4E84D6E224 ();
// 0x00000255 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Swish(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Swish_mD0D85B3B04F57E454C0C47B0ECB91F0E7CBBB16E ();
// 0x00000256 System.Void Unity.Barracuda.UnsafeArrayCPUOps::SwishInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SwishInnerLoop_mADC040DF3B7F031FA5D4A1B1689DEF54D0D58D37 ();
// 0x00000257 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Exp(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Exp_m3444D1EBA1302FBF61308DBE8B810F4B03FD0F3E ();
// 0x00000258 System.Void Unity.Barracuda.UnsafeArrayCPUOps::ExpInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_ExpInnerLoop_m0905664C0529197AF54BFCEDBA639D8F83532A49 ();
// 0x00000259 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sqrt(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Sqrt_mF30362F7D779FDEB47AB556B7D05D3DA56F26D17 ();
// 0x0000025A System.Void Unity.Barracuda.UnsafeArrayCPUOps::SqrtInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_SqrtInnerLoop_m17D2DAFD37F3231F171F9E95A867215A4D7FCA0E ();
// 0x0000025B Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Tanh(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Tanh_m44D616261EE532B6A799513A61918A87C62D300B ();
// 0x0000025C System.Void Unity.Barracuda.UnsafeArrayCPUOps::TanhInnerLoop(System.Int32,System.Int32,System.Single*,System.Single*)
extern void UnsafeArrayCPUOps_TanhInnerLoop_m800AC9BFE09D016169A4E10F09C8EE24A12A9E8E ();
// 0x0000025D System.Boolean Unity.Barracuda.UnsafeArrayCPUOps::CanUseModuloForBroadcasting(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m71C8DD6BC8F385A62C4EFB388708DBF39BD1A2FE ();
// 0x0000025E System.Boolean Unity.Barracuda.UnsafeArrayCPUOps::CanUseModuloForBroadcasting(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m7DA75DCDA2BD597A1BABB224EC11E13BE15204FC ();
// 0x0000025F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyElementwiseWithBroadcast(Unity.Barracuda.Tensor[],System.Func`3<System.Single,System.Single,System.Single>,System.Action`1<System.Int64>,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyElementwiseWithBroadcast_m48E495B0E43A20769937DC234EBE286DFE93678E ();
// 0x00000260 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Add(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Add_mB281518C168C523128B0AAFFEE9E0944FCE27047 ();
// 0x00000261 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Sub(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Sub_mE25B33E9755F5AE6DD601E3C5EBF6C08B57C3A56 ();
// 0x00000262 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Mul(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Mul_m1F760D8D969309F7D03EEBE129D80970173E159E ();
// 0x00000263 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Div(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Div_mB302C8413D83D00D273423F1DCD3F407509CB89C ();
// 0x00000264 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Min(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Min_m000155015712705432342CDDB0DE735CF03AA4C4 ();
// 0x00000265 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Max(Unity.Barracuda.Tensor[])
extern void UnsafeArrayCPUOps_Max_mFCD3FCA8727DC634B838AD02662A13289C8941B0 ();
// 0x00000266 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Greater_m0C0B2A3B1FB07344C9A7E55EEFB85656252643EF ();
// 0x00000267 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GreaterEqual_m22E0D820A8BDBF8977833C8DEEF309003426930E ();
// 0x00000268 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Less_mCE8F11B993A0CBF1A5042F2F20B226B302F2F82B ();
// 0x00000269 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LessEqual_mB64EC5A565E99CF5093025536630483241E4BEB6 ();
// 0x0000026A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Equal_mBF07FB080180521BA9212ADCD4BA44ABBF0B0A5D ();
// 0x0000026B Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalOr_mB7A9DA7428A63FBE82D3EB6CB657F8E33E968B11 ();
// 0x0000026C Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalAnd_m93060C5AC53B8AC82DF75A4642CAA7E3CC58774C ();
// 0x0000026D Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalXor_m867D8EF47A807699683A368781154657F9A2705E ();
// 0x0000026E Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::LogicalNot(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_LogicalNot_m6D34ABB8AEF2D44FF2F1D33A774971556A21834D ();
// 0x0000026F Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyLogicalOperator(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Func`3<System.Single,System.Single,System.Single>,System.Action`1<System.Int64>,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyLogicalOperator_mDCB2F4E1D2A012605C041E72E9B124F975EB91D9 ();
// 0x00000270 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void UnsafeArrayCPUOps_MatMul_m7318F15FF30AFEEEAFDB74ADF1179C5F0EE616DF ();
// 0x00000271 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void UnsafeArrayCPUOps_Dense_m3EF273082D0C5B6E1DE62C22DF1C9DAE17288795 ();
// 0x00000272 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyFusedActivation(Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void UnsafeArrayCPUOps_ApplyFusedActivation_m10FDB5336F2E1E1708E387B386FF5DD6349E67AD ();
// 0x00000273 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_MaxPool2D_mA7699AEAA51C669FC11C1CF04F913903BB2C1C94 ();
// 0x00000274 System.Void Unity.Barracuda.UnsafeArrayCPUOps::MaxPool2DInnerLoop(System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_MaxPool2DInnerLoop_m6590EAE3DB6EF66B01AFC4D91CAF90FEA628AE52 ();
// 0x00000275 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_AvgPool2D_m6B662FEAA3FD820189CB3B5669D32B30847527E0 ();
// 0x00000276 System.Void Unity.Barracuda.UnsafeArrayCPUOps::AvgPool2DInnerLoop(System.Int32[],System.Int32[],System.Int32[],System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_AvgPool2DInnerLoop_m7AAE195D21D8739D38693097AD011C81DF174648 ();
// 0x00000277 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GlobalMaxPool2D_mF5D4116C938FC9369BD42F9195F8E744DCF51E82 ();
// 0x00000278 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_GlobalAvgPool2D_m3D97CF91208529D8F76796A06AF358FF50DBF1B3 ();
// 0x00000279 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void UnsafeArrayCPUOps_Conv2D_mAF80BBDC75F5BA7361C8E91283DD038BB2028FB0 ();
// 0x0000027A Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2DUsingIm2Col(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_Conv2DUsingIm2Col_m2BD0E0D55D2FD22BCA12970E809AD342BD6C6158 ();
// 0x0000027B System.Void Unity.Barracuda.UnsafeArrayCPUOps::Im2ColInnerLoop(System.Int32[],System.Int32[],System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_Im2ColInnerLoop_m3D0E21BB7668F3CF52B26E342F4C1B1A7CC84520 ();
// 0x0000027C System.Int32 Unity.Barracuda.UnsafeArrayCPUOps::SafeIntDivCeil(System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_SafeIntDivCeil_mB8D602D4782F3CA41AE0378D2363DBA477F2A861 ();
// 0x0000027D Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Conv2DUsingIm2ColSliced(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void UnsafeArrayCPUOps_Conv2DUsingIm2ColSliced_mA51FF0091CD020D651AF63798C1BE55E7F61E807 ();
// 0x0000027E Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void UnsafeArrayCPUOps_DepthwiseConv2D_m6FA428703B94BF146D2A002B459B721E04884147 ();
// 0x0000027F System.Void Unity.Barracuda.UnsafeArrayCPUOps::DepthwiseConv2DInnerLoop(System.Int32[],System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32)
extern void UnsafeArrayCPUOps_DepthwiseConv2DInnerLoop_m056B60DE40EF6689465533A80B5749A749B18355 ();
// 0x00000280 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ApplyPadding(Unity.Barracuda.Tensor,System.Int32[],System.Single,System.Action`1<System.Int64>)
extern void UnsafeArrayCPUOps_ApplyPadding_m2694F05950F8885FE88A9F105F8955585654DC9B ();
// 0x00000281 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void UnsafeArrayCPUOps_Border2D_mE5650EF66F3017B6EE1A4A543CD9BDEE708503A0 ();
// 0x00000282 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DEdge_m1AD2BCF5C5EBBE9BDED51DD4B5DEF1C7CD596116 ();
// 0x00000283 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DReflect_m3D722CCEAAB52F29F42C150B8C0EA641A8C48748 ();
// 0x00000284 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void UnsafeArrayCPUOps_Pad2DSymmetric_m7214D530C33202353FF057FACB61E7B33FA8569B ();
// 0x00000285 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::CopyAndReshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void UnsafeArrayCPUOps_CopyAndReshape_m1E01903F67CBB3824ABF6A2515E6B80246922F49 ();
// 0x00000286 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_ScaleBias_mC1792119408639D9C99A84777ADEF71D067E28B2 ();
// 0x00000287 System.Void Unity.Barracuda.UnsafeArrayCPUOps::ScaleBiasInnerLoop(System.Int32,System.Int32,System.Single*,System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32)
extern void UnsafeArrayCPUOps_ScaleBiasInnerLoop_mE416969E845DE39D8A1DE41D8A8EF177D6BCBDD8 ();
// 0x00000288 Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps::Prepare(Unity.Barracuda.Tensor)
extern void UnsafeArrayCPUOps_Prepare_mD014DEE7AB00CD26FB3D762EC5564BC19AF4DEC4 ();
// 0x00000289 System.Void Unity.Barracuda.InnerLoop::.ctor()
extern void InnerLoop__ctor_mC09F5DFC192A0808429039EFA5B3982B22B510CF ();
// 0x0000028A System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void InnerLoop_SetState_mA441C72E23213D113ECF41E2C927062E6E575837 ();
// 0x0000028B System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void InnerLoop_SetState_mABD244914264DCD09A8B274A32442A2A7A58FFE9 ();
// 0x0000028C System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void InnerLoop_SetState_mF679DA5D504159DE4333927CFDB47467D6325ACD ();
// 0x0000028D System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Int32,System.Single*,System.Int32)
extern void InnerLoop_SetState_m9E2AFD80C4ECB833913A3DCFDCE97B2B4BF16059 ();
// 0x0000028E System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*)
extern void InnerLoop_SetState_m781FADCDCB0B78C9FAEA2C367002209E82654244 ();
// 0x0000028F System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*,System.Single*)
extern void InnerLoop_SetState_m8CA2932BC10DFD77B34062784AA3FF667E1A6ACD ();
// 0x00000290 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single*)
extern void InnerLoop_SetState_m906A7769BE54BA5B89BB1267635ACF546814E319 ();
// 0x00000291 System.Void Unity.Barracuda.InnerLoop::SetState(System.Int32,System.Single*,System.Single*,System.Single)
extern void InnerLoop_SetState_m506F13B1D0693700C242E8A2F64F0E5F44877949 ();
// 0x00000292 System.Void Unity.Barracuda.InnerLoop::SetState(System.Single*,System.Single*,Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Single,System.Int32,System.Int32)
extern void InnerLoop_SetState_m6CE47C9ADFF1E720C1DC3BA5A3B47467631507D0 ();
// 0x00000293 System.Void Unity.Barracuda.InnerLoop::NegInnerLoop(System.Int64)
extern void InnerLoop_NegInnerLoop_mCD3F00CA34B85C01C56A32D2E7C8137D4F48937D ();
// 0x00000294 System.Void Unity.Barracuda.InnerLoop::ReluInnerLoop(System.Int64)
extern void InnerLoop_ReluInnerLoop_m114BABF4E6A7D16BDC3B2D0DC06F23039573E31E ();
// 0x00000295 System.Void Unity.Barracuda.InnerLoop::Relu6InnerLoop(System.Int64)
extern void InnerLoop_Relu6InnerLoop_m8C4257AF9D5A3A2D158D1F6E73B4760B20D74905 ();
// 0x00000296 System.Void Unity.Barracuda.InnerLoop::LeakyReluInnerLoop(System.Int64)
extern void InnerLoop_LeakyReluInnerLoop_m1F3D3F965CA15A025BB207F33C0CE40C8F1822D2 ();
// 0x00000297 System.Void Unity.Barracuda.InnerLoop::EluInnerLoop(System.Int64)
extern void InnerLoop_EluInnerLoop_m7138FA9B038F69A26732BB935C7E1731B6F87061 ();
// 0x00000298 System.Void Unity.Barracuda.InnerLoop::PReluInnerLoop(System.Int64)
extern void InnerLoop_PReluInnerLoop_mC0665B402B470A49867403B1CC78AACA111FD0A9 ();
// 0x00000299 System.Void Unity.Barracuda.InnerLoop::SigmoidInnerLoop(System.Int64)
extern void InnerLoop_SigmoidInnerLoop_m62CE116232C8E08707F37AE7E9C5BFFD76E9235F ();
// 0x0000029A System.Void Unity.Barracuda.InnerLoop::SwishInnerLoop(System.Int64)
extern void InnerLoop_SwishInnerLoop_mDD07B5F374F66E629E4995DFF424C252870319A3 ();
// 0x0000029B System.Void Unity.Barracuda.InnerLoop::ExpInnerLoop(System.Int64)
extern void InnerLoop_ExpInnerLoop_m7854066B1897BCBCA8FF1AF27A077161CB383B47 ();
// 0x0000029C System.Void Unity.Barracuda.InnerLoop::SqrtInnerLoop(System.Int64)
extern void InnerLoop_SqrtInnerLoop_m2DD86BDF8F0E4AED996F9072D73C0681D2510F48 ();
// 0x0000029D System.Void Unity.Barracuda.InnerLoop::TanhInnerLoop(System.Int64)
extern void InnerLoop_TanhInnerLoop_m543FBB8B6FD558C36F918CF7DEA01C816256DAB8 ();
// 0x0000029E System.Void Unity.Barracuda.InnerLoop::AddInnerLoop(System.Int64)
extern void InnerLoop_AddInnerLoop_mC684B7B5A6E3E9574C1557E63E388BA8D02D98FE ();
// 0x0000029F System.Void Unity.Barracuda.InnerLoop::SubInnerLoop(System.Int64)
extern void InnerLoop_SubInnerLoop_mC067D83B419DC436265C58F8021176F0849C6FF3 ();
// 0x000002A0 System.Void Unity.Barracuda.InnerLoop::MulInnerLoop(System.Int64)
extern void InnerLoop_MulInnerLoop_m2C40981A795D000F438C30EA496859D84D77DA5B ();
// 0x000002A1 System.Void Unity.Barracuda.InnerLoop::DivInnerLoop(System.Int64)
extern void InnerLoop_DivInnerLoop_m97ED44595BAE44A4FA74F83E47A1B7657C525E0B ();
// 0x000002A2 System.Void Unity.Barracuda.InnerLoop::MinInnerLoop(System.Int64)
extern void InnerLoop_MinInnerLoop_m30DD7E1E796439012E688EF77653CD13833DE2E5 ();
// 0x000002A3 System.Void Unity.Barracuda.InnerLoop::MaxInnerLoop(System.Int64)
extern void InnerLoop_MaxInnerLoop_m43449607A29FF59C31EF949F416A1E59FDDF294B ();
// 0x000002A4 System.Void Unity.Barracuda.InnerLoop::GreaterInnerLoop(System.Int64)
extern void InnerLoop_GreaterInnerLoop_m9D3363DCDBF53925A785A888D0DC47D0479DF73F ();
// 0x000002A5 System.Void Unity.Barracuda.InnerLoop::GreaterEqualInnerLoop(System.Int64)
extern void InnerLoop_GreaterEqualInnerLoop_mC78A3C27B24A935EB925CB87DC507813DB5D072C ();
// 0x000002A6 System.Void Unity.Barracuda.InnerLoop::LessInnerLoop(System.Int64)
extern void InnerLoop_LessInnerLoop_m912C35FD610B49290ACEB78F7E97667E7E134209 ();
// 0x000002A7 System.Void Unity.Barracuda.InnerLoop::LessEqualInnerLoop(System.Int64)
extern void InnerLoop_LessEqualInnerLoop_mAF29463BD6D79447D00EDE0662213165B1BED8B8 ();
// 0x000002A8 System.Void Unity.Barracuda.InnerLoop::EqualInnerLoop(System.Int64)
extern void InnerLoop_EqualInnerLoop_m3712B3BD5BF261416626C0F8D2FB027412C669D8 ();
// 0x000002A9 System.Void Unity.Barracuda.InnerLoop::LogicalOrInnerLoop(System.Int64)
extern void InnerLoop_LogicalOrInnerLoop_m9F20D3E07BF94B1A658CF7722E9F6A03675C39C3 ();
// 0x000002AA System.Void Unity.Barracuda.InnerLoop::LogicalAndInnerLoop(System.Int64)
extern void InnerLoop_LogicalAndInnerLoop_mE195A5B79E99BE018182735FBC2F053B05C72532 ();
// 0x000002AB System.Void Unity.Barracuda.InnerLoop::LogicalXorInnerLoop(System.Int64)
extern void InnerLoop_LogicalXorInnerLoop_m95B428956105D50C03BCADC199E3CB4D0F5F78F2 ();
// 0x000002AC System.Void Unity.Barracuda.InnerLoop::AddInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_AddInnerLoopNoBroadcast_m653773C2756CB809B14D8158BE8233527A663318 ();
// 0x000002AD System.Void Unity.Barracuda.InnerLoop::SubInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_SubInnerLoopNoBroadcast_mA2AC87338AA7AEA659440B982041E4A680BE9893 ();
// 0x000002AE System.Void Unity.Barracuda.InnerLoop::MulInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MulInnerLoopNoBroadcast_m55E88B57869AE61220724020DFAFE62A30AF9C1F ();
// 0x000002AF System.Void Unity.Barracuda.InnerLoop::DivInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_DivInnerLoopNoBroadcast_m2EBF79D9F8B1DBDC4400BF5CFF4111381AABFA96 ();
// 0x000002B0 System.Void Unity.Barracuda.InnerLoop::MinInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MinInnerLoopNoBroadcast_m49481941BBBA5A05B749914B969C4E9E399EF95A ();
// 0x000002B1 System.Void Unity.Barracuda.InnerLoop::MaxInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_MaxInnerLoopNoBroadcast_m989C31C97754AA7A85B3953B8432917699D6F6C5 ();
// 0x000002B2 System.Void Unity.Barracuda.InnerLoop::GreaterInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_GreaterInnerLoopNoBroadcast_m7D6F5F401F4841804811BB8C6B5B6BEC4CDD4CAB ();
// 0x000002B3 System.Void Unity.Barracuda.InnerLoop::GreaterEqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_GreaterEqualInnerLoopNoBroadcast_m2A2D3526151D415DEDE6D2703131C41A31452136 ();
// 0x000002B4 System.Void Unity.Barracuda.InnerLoop::LessInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LessInnerLoopNoBroadcast_mCF6EF7A0ABB6BF635FC9DBBD32D1C5642C857446 ();
// 0x000002B5 System.Void Unity.Barracuda.InnerLoop::LessEqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LessEqualInnerLoopNoBroadcast_mA316F897B7E7FA63DEA61004BB640CDD133A0E15 ();
// 0x000002B6 System.Void Unity.Barracuda.InnerLoop::EqualInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_EqualInnerLoopNoBroadcast_mA968D2837183FEB428DF886B60CF3578725D8F7D ();
// 0x000002B7 System.Void Unity.Barracuda.InnerLoop::LogicalOrInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalOrInnerLoopNoBroadcast_mF8253431622E0AF7F95CD0599156DA4CE7EFFBA3 ();
// 0x000002B8 System.Void Unity.Barracuda.InnerLoop::LogicalAndInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalAndInnerLoopNoBroadcast_m72D7EAB83B500EAF22467BEB56D6E84F1DDB0D08 ();
// 0x000002B9 System.Void Unity.Barracuda.InnerLoop::LogicalXorInnerLoopNoBroadcast(System.Int64)
extern void InnerLoop_LogicalXorInnerLoopNoBroadcast_mD313701661570F64327E3A98E188E40A169ACE92 ();
// 0x000002BA System.Void Unity.Barracuda.InnerLoop::LogicalNotInnerLoop(System.Int64)
extern void InnerLoop_LogicalNotInnerLoop_m50F2D6976B1292917568019C98D236821C89522F ();
// 0x000002BB System.Void Unity.Barracuda.InnerLoop::ClampHWToTensorShape(Unity.Barracuda.TensorShape,System.Int32&,System.Int32&)
extern void InnerLoop_ClampHWToTensorShape_m3D570F1CD2B3765DB49847F3E4C62738338E3022 ();
// 0x000002BC System.Void Unity.Barracuda.InnerLoop::Border2DInnerLoop(System.Int64)
extern void InnerLoop_Border2DInnerLoop_mEB524197D53910E49E3713B50CEB7DE564689EEA ();
// 0x000002BD System.Void Unity.Barracuda.InnerLoop::Pad2DEdgeInnerLoop(System.Int64)
extern void InnerLoop_Pad2DEdgeInnerLoop_mED202FCC0D99C9FAF61D5FFFF94A485C77A30A25 ();
// 0x000002BE System.Void Unity.Barracuda.InnerLoop::Pad2DReflectInnerLoop(System.Int64)
extern void InnerLoop_Pad2DReflectInnerLoop_mE9F93CFEED513B44BBEBBF5739C5D9EA9A99F50E ();
// 0x000002BF System.Void Unity.Barracuda.InnerLoop::Pad2DSymmetricInnerLoop(System.Int64)
extern void InnerLoop_Pad2DSymmetricInnerLoop_mD5C1F242304858DF07D7881AC79F2A7A43182E40 ();
// 0x000002C0 System.Void Unity.Barracuda.InnerLoop::ScaleBiasInnerLoop(System.Int64)
extern void InnerLoop_ScaleBiasInnerLoop_m511E4AF77A64D4D5D479A313E54C5115E47A2739 ();
// 0x000002C1 System.Single Unity.Barracuda.InnerLoop::Add(System.Single,System.Single)
extern void InnerLoop_Add_m6F9C9CE68EB9E36A8DC74B888D73DFB4C33AC98C ();
// 0x000002C2 System.Single Unity.Barracuda.InnerLoop::Sub(System.Single,System.Single)
extern void InnerLoop_Sub_mF203DBBD53C4F400BEA7FCAF0E1F3373E1527945 ();
// 0x000002C3 System.Single Unity.Barracuda.InnerLoop::Mul(System.Single,System.Single)
extern void InnerLoop_Mul_m759F5856B2C433942248FB6740A166F9A68382EA ();
// 0x000002C4 System.Single Unity.Barracuda.InnerLoop::Div(System.Single,System.Single)
extern void InnerLoop_Div_m2BD343D21D6FE72478AB379444132558C2D5942A ();
// 0x000002C5 System.Single Unity.Barracuda.InnerLoop::Min(System.Single,System.Single)
extern void InnerLoop_Min_m516560C042AA0B791010CE7799CCB2A2670AD2F8 ();
// 0x000002C6 System.Single Unity.Barracuda.InnerLoop::Max(System.Single,System.Single)
extern void InnerLoop_Max_m1D0B4A08DE8150358A46349FB4AD6D7A8F67258D ();
// 0x000002C7 System.Single Unity.Barracuda.InnerLoop::Greater(System.Single,System.Single)
extern void InnerLoop_Greater_mF2641650408D1FB1BA08A0F98A03A08A39C18A15 ();
// 0x000002C8 System.Single Unity.Barracuda.InnerLoop::GreaterEqual(System.Single,System.Single)
extern void InnerLoop_GreaterEqual_mA8E16743B7B9670E06E9C0124D2D8AF1077088EB ();
// 0x000002C9 System.Single Unity.Barracuda.InnerLoop::Less(System.Single,System.Single)
extern void InnerLoop_Less_mE2063328F76A0114B339EC14AFC76EBE976BEEA1 ();
// 0x000002CA System.Single Unity.Barracuda.InnerLoop::LessEqual(System.Single,System.Single)
extern void InnerLoop_LessEqual_m11C3BFB78295D1E0EC3A5D328D1C042A6E99A5B3 ();
// 0x000002CB System.Single Unity.Barracuda.InnerLoop::Equal(System.Single,System.Single)
extern void InnerLoop_Equal_m9960F5FEA2599D3E1F45419476A85616242E5A49 ();
// 0x000002CC System.Single Unity.Barracuda.InnerLoop::LogicalOr(System.Single,System.Single)
extern void InnerLoop_LogicalOr_mD59726C93A9681C9515A70F20306ACC324A03CFC ();
// 0x000002CD System.Single Unity.Barracuda.InnerLoop::LogicalAnd(System.Single,System.Single)
extern void InnerLoop_LogicalAnd_m3CAD64137682243373F59BF480B6F41BF2A224E3 ();
// 0x000002CE System.Single Unity.Barracuda.InnerLoop::LogicalXor(System.Single,System.Single)
extern void InnerLoop_LogicalXor_mFDE0CAF1BE6B010D310397B5CDBDBB83AC2FD829 ();
// 0x000002CF System.Single Unity.Barracuda.InnerLoop::LogicalNot(System.Single)
extern void InnerLoop_LogicalNot_m13D0B4341954C78EF2970043D34DE8D956716473 ();
// 0x000002D0 System.Void Unity.Barracuda.CompareOps::.ctor(Unity.Barracuda.IOps,Unity.Barracuda.IOps,Unity.Barracuda.CompareOpsUtils_LogLevel,System.Single)
extern void CompareOps__ctor_m40C1F14D7520DE49ADCCDC5B10FF405475F4104D ();
// 0x000002D1 System.Void Unity.Barracuda.CompareOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void CompareOps_PrepareModel_m40B5036AC70FD8178E8CA76B33B4E11F5E36EB34 ();
// 0x000002D2 System.Void Unity.Barracuda.CompareOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void CompareOps_PreExecuteLayer_m55984F60FEA762480E10304D47B5AC8C14F482FA ();
// 0x000002D3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_MatMul_m35DC5258611D3ACC9D86EEE5A8E342B5B794EF13 ();
// 0x000002D4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Dense_m1AAF22BCA4F47F64E5AE91D6217B7B783AF6C0E8 ();
// 0x000002D5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv2D_mAEC5E24D77D854DDA537D8945496C910F950B8DD ();
// 0x000002D6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_DepthwiseConv2D_m482443A8D3FD66645A52CE7710EF0435B6CA8649 ();
// 0x000002D7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Conv2DTrans_mB36078FBA40C8F761EB39ABEF80C9C4F62759629 ();
// 0x000002D8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Upsample2D_m890FD5274654D6265CCC5255ED39C2EA2A71F185 ();
// 0x000002D9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_Resample2D_mF7BEECC751EA2FF9559733750A152CF15E602D42 ();
// 0x000002DA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
extern void CompareOps_Unity_Barracuda_IOps_DepthToSpace_m71B6D6CBA47644B5E59BB9852D1DB9F565F20888 ();
// 0x000002DB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_SpaceToDepth_m376FE40D7F9FEB45165CBF2CB39BDE2C9B952B84 ();
// 0x000002DC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_MaxPool2D_mD8CDED12DC004DB68BE8A1A35B40C753620F2FFF ();
// 0x000002DD Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_AvgPool2D_m23640D92757776F2DAEE937E654A8A5A0A5D003B ();
// 0x000002DE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m3226D66818944AC938F07CA854C154B1D45803BD ();
// 0x000002DF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalAvgPool2D_mB240BF491446ACEE2C09981B41E0CDD26C107E51 ();
// 0x000002E0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m103DF03C28C2AAB53C3872A0777351EB055314DE ();
// 0x000002E1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Border2D_m4F2806C460182BD885195346B602BFF757AF20F7 ();
// 0x000002E2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DReflect_m6ED5DAAD803E13D922DB50FFC594EBF6ADCB7F4A ();
// 0x000002E3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DSymmetric_m990423A4C4B51DF1F9ECB7492275B99B4097EEA5 ();
// 0x000002E4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Pad2DEdge_m0B801D1CA1261FE080378FD34ED71CC47522C76D ();
// 0x000002E5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_ScaleBias_mB83E32EB3CACDFB8F9993ECF98424271C0BFF4CD ();
// 0x000002E6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void CompareOps_Unity_Barracuda_IOps_Normalization_mE7B27BB9E553D8863BEFAF5F12D0E5575BF7FF26 ();
// 0x000002E7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_LRN_m134DC38D01A7451CC509D92B80F3E12CB54FB90B ();
// 0x000002E8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Dropout_mD7F6327A7B8AEF6E6B78927EC62DB8A88D5B7DC8 ();
// 0x000002E9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_RandomNormal_m9E7786DC65B2E0E154AED8CF9A8EBA281C293299 ();
// 0x000002EA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_RandomUniform_m2333C7738AF133B2E8BA33309DB1038E206541FA ();
// 0x000002EB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Multinomial_m4E14DA18651C96C558BC829F97077BDDFCCC3ADF ();
// 0x000002EC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_OneHot_m493EE96915CD8E998EE9C9A180ED5C9FDE8F15E4 ();
// 0x000002ED Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Relu_m60EAE243D1FDA1A530A8EE12602335C52F6795D6 ();
// 0x000002EE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Softmax_m594FA846BE91E6CEFC1343780992D52D00BEA4FF ();
// 0x000002EF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogSoftmax_m47C9A7AAC9607B8EDABB7FC6009FE2F733DFDAC3 ();
// 0x000002F0 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Tanh_m269C58DAD17371140BFF53DF34C96A8C390D1EAE ();
// 0x000002F1 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sigmoid_m06A8DEB4A5EF888D8C9706CD8DC540D95C395689 ();
// 0x000002F2 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Elu_mC207E7156ADEE68696DDB1BEEC15930EEF1004B0 ();
// 0x000002F3 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Relu6_mA707D5E00C4255ED04F5EC84CD56196D306FDB6F ();
// 0x000002F4 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_LeakyRelu_m21CB9FB32D8E482D5879A54C9C526B924DE7ACA5 ();
// 0x000002F5 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Selu_mC7DFB80D6FC75FD606B8A6B1CA85A6437E784E32 ();
// 0x000002F6 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_PRelu_m215197B7A61B1AF8B205EF7CDDF8EABA46161ABB ();
// 0x000002F7 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Swish_mFE824E96526B11EA479B81C88EAADB1F9375D912 ();
// 0x000002F8 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Abs_m199AB35F017249990030542CC2A16DCF4B21744C ();
// 0x000002F9 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Neg_mFD2A3AD87C26D401657BEDECE0DD5F1973CC572E ();
// 0x000002FA Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Ceil_mEAEDF78FC5C010DF7EE49C24790DD0183F53159B ();
// 0x000002FB Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Clip_m0CD49B081F3647B92242EA3601ECE2B12345111D ();
// 0x000002FC Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Floor_m7E5769AAC562FF6A2CA3D246E126BE1758D19F04 ();
// 0x000002FD Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Reciprocal_m2E55059D7380EACCF1FC2C46C981708940979CA2 ();
// 0x000002FE Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void CompareOps_Unity_Barracuda_IOps_Pow_m92888192338893F12C880F28CA0196DC4D9955A2 ();
// 0x000002FF Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Exp_m454A2A2E721E9DF8854DE74DDED083D05E9A135D ();
// 0x00000300 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Log_mE38DA5994CFDD0BF27DB2E14F4440942F5F10BAA ();
// 0x00000301 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Sqrt_m09F025CB8CBDEE693029735F6F9CE4820CD5DAE7 ();
// 0x00000302 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Add_m4838BEBA0102D35734F7A2095350C1EFA7ED89C2 ();
// 0x00000303 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Sub_m77956951C8B338B0936AFF70B7225B8D398851A5 ();
// 0x00000304 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Mul_mE2241E0C7542FBFD6D2A6DFA181139B49A7EF93A ();
// 0x00000305 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Div_mB1B69D87CA2C41439368F5BD04D377FD32574A0A ();
// 0x00000306 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Pow_m841664BFCF0DB2E053046079D076D9CD14EB76D0 ();
// 0x00000307 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Min_mCE07D2E03A70974C46E050FBCFC81BECDEAF9B00 ();
// 0x00000308 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Max_m87285BED59019A919B5B11DBE2AAA72B1E321559 ();
// 0x00000309 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void CompareOps_Unity_Barracuda_IOps_Mean_m3DFD532A82D630FB17C7338A36044358AA9E4634 ();
// 0x0000030A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMax_m639D1BF9EE07A6B3C72DCCCE01503A71BB272B82 ();
// 0x0000030B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMean_mD4CB402DCCFA17C975690084D49CCCCCE81FBDBC ();
// 0x0000030C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceMin_m6CC8AD40FBE9F850E8F42D3F82604ADB56C9F17A ();
// 0x0000030D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceProd_m34B52DD0AD90EE47145AB2F61B146862E6D6819B ();
// 0x0000030E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_ReduceSum_mB5C929A36F2A3741227781D316CE7CAD1D72BAB1 ();
// 0x0000030F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Greater_m3B3149D15375B764ADEC73493A6F95FAC1397F24 ();
// 0x00000310 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_GreaterEqual_m135FC47419930957B451B910F0AD20DB7D7EE702 ();
// 0x00000311 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Less_mF206C782F40A10FF4E643E8E024E0F6BE4EC4538 ();
// 0x00000312 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LessEqual_m0B0309A78F1D5377E4E0F6D82DDA2FB09D26C968 ();
// 0x00000313 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Equal_mB77258FA1D2F5C6B399593A72A9D6C6B4390F6A4 ();
// 0x00000314 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalOr_m2891E7B2F51C425CC968F3990013002A40376469 ();
// 0x00000315 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalAnd_mC8D2DCB19EE818FF0F545981E25A0EA37222EA79 ();
// 0x00000316 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalXor_mC2026E0813882C30993217D0F4FB1E581AA0F38F ();
// 0x00000317 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_LogicalNot_m3E595E314851EA1D9520BFB4959568BE3CA01267 ();
// 0x00000318 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Flatten_m81213E7AE156715FD738F9AC6C47BA1E2AB7A5A6 ();
// 0x00000319 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void CompareOps_Unity_Barracuda_IOps_Reshape_mE6E12AFD6EBC8A024CE69664C4F55C028923374B ();
// 0x0000031A Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void CompareOps_Unity_Barracuda_IOps_Expand_m4A0C6148CDE7F152E4B94B8B86217D1AB72F9E1D ();
// 0x0000031B Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Transpose_m7F93F3BC217156FA5522CAB4776B7CBA8A876E27 ();
// 0x0000031C Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Gather_m1FEF0F4CFCD0775BD79D68A671FA373AC3E4B8F5 ();
// 0x0000031D Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void CompareOps_Unity_Barracuda_IOps_Concat_m265FF33ECA07A92A19CE34039791651FDD4F3908 ();
// 0x0000031E Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_StridedSlice_mB682943AB060A530C8C91D552CB11115B20B6128 ();
// 0x0000031F Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void CompareOps_Unity_Barracuda_IOps_Tile_mACFDE7CD9AC806094717413E35DA184E462FBC32 ();
// 0x00000320 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Copy_m9A5BEDE034617FB67B3C007F70736C2F11BD3C3B ();
// 0x00000321 Unity.Barracuda.Tensor Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void CompareOps_Unity_Barracuda_IOps_Prepare_m0F6CC51BC73CB003703434D8CDD76003B93F1B78 ();
// 0x00000322 System.Void Unity.Barracuda.CompareOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void CompareOps_Unity_Barracuda_IOps_ResetAllocator_m0AADF517AA5474BC4177E3CA2CF92840072E511F ();
// 0x00000323 System.Void Unity.Barracuda.CompareOps::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_Type,Unity.Barracuda.Tensor[])
extern void CompareOps_CheckSame_mC0845E04033C1E0D38564A3B8A06B85E1D1716D9 ();
// 0x00000324 System.Void Unity.Barracuda.CompareOps::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.String,Unity.Barracuda.Tensor[])
extern void CompareOps_CheckSame_mEA0EB17D3D0D7A87D97450E14F6AFDB18ECAFC8E ();
// 0x00000325 System.Void Unity.Barracuda.CompareOpsUtils::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_Type,Unity.Barracuda.CompareOpsUtils_LogLevel,System.Single,Unity.Barracuda.Tensor[])
extern void CompareOpsUtils_CheckSame_mEAEA493AA1DD42BE0D0FAE72BAB31C65FEAC1C00 ();
// 0x00000326 System.Void Unity.Barracuda.CompareOpsUtils::CheckSame(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.String,Unity.Barracuda.CompareOpsUtils_LogLevel,System.Single,Unity.Barracuda.Tensor[])
extern void CompareOpsUtils_CheckSame_m397F642264B14A487F2A06BD11A0CAA12D55D434 ();
// 0x00000327 System.Void Unity.Barracuda.CompareOpsUtils::CheckApproximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Single,Unity.Barracuda.Layer_Type,Unity.Barracuda.CompareOpsUtils_LogLevel)
extern void CompareOpsUtils_CheckApproximately_m8D8617516CD57ECCCD27545EEB7F067A3436F569 ();
// 0x00000328 System.Void Unity.Barracuda.CompareOpsUtils::CheckApproximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Single,System.String,Unity.Barracuda.CompareOpsUtils_LogLevel)
extern void CompareOpsUtils_CheckApproximately_m65BED740971D379D66220A37BFCD953FD283B3AF ();
// 0x00000329 System.Void Unity.Barracuda.CompareOpsUtils::.ctor()
extern void CompareOpsUtils__ctor_m8A8B7A374C8DCAE89247EE5F0A99025925F4A74B ();
// 0x0000032A System.Void Unity.Barracuda.ComputeInfo::.cctor()
extern void ComputeInfo__cctor_m29A4E8442008B5FA066FE6A2B73C91A044AA7392 ();
// 0x0000032B System.Void Unity.Barracuda.ComputeInfo::.ctor()
extern void ComputeInfo__ctor_mC92C64D3BAA424F8836C7085C3986557EE929C3C ();
// 0x0000032C System.Void Unity.Barracuda.ComputeShaderSingleton::.ctor()
extern void ComputeShaderSingleton__ctor_m672FE766A50154232E287FA9429BBD029BFBFBB1 ();
// 0x0000032D Unity.Barracuda.ComputeShaderSingleton Unity.Barracuda.ComputeShaderSingleton::get_Instance()
extern void ComputeShaderSingleton_get_Instance_m073E80F4D1A664CA32CF1359CB8FE087AF7AAA71 ();
// 0x0000032E UnityEngine.ComputeShader Unity.Barracuda.ComputeShaderSingleton::LoadIf(System.Boolean,System.String)
extern void ComputeShaderSingleton_LoadIf_m35FDF7355172E2186D447560E60D434430F4A63A ();
// 0x0000032F System.Void Unity.Barracuda.ComputeShaderSingleton::LoadIf(System.Boolean,System.String,System.Collections.Generic.List`1<UnityEngine.ComputeShader>)
extern void ComputeShaderSingleton_LoadIf_mE813BE7F6559E6F594AA30A5E07A1DB0F94ECB85 ();
// 0x00000330 System.Boolean Unity.Barracuda.ComputeShaderSingleton::get_supported()
extern void ComputeShaderSingleton_get_supported_m515D2852D56013050D187A03681B9E3A6AB2F9A5 ();
// 0x00000331 System.Void Unity.Barracuda.ComputeShaderSingleton::.cctor()
extern void ComputeShaderSingleton__cctor_m3CF399F8043F08661C3DDE5029D25A25EA365DE4 ();
// 0x00000332 System.Void Unity.Barracuda.GenericWorker::.ctor(Unity.Barracuda.Model,Unity.Barracuda.IOps,Unity.Barracuda.IVars,System.Boolean)
extern void GenericWorker__ctor_mCAC72E3CF67FB2F3E3A0CC3543C7AA97611E8B47 ();
// 0x00000333 System.Void Unity.Barracuda.GenericWorker::Finalize()
extern void GenericWorker_Finalize_mFC47C6932A34BCC09C4634512958790CDBC7F64E ();
// 0x00000334 System.Void Unity.Barracuda.GenericWorker::ResetAllocatorIfRequested()
extern void GenericWorker_ResetAllocatorIfRequested_m0FBA68B42AFC329139D28DD12C69BF0A3B66DBDA ();
// 0x00000335 System.Void Unity.Barracuda.GenericWorker::Dispose()
extern void GenericWorker_Dispose_mED508F2CE3DC6EEA1E64A677A25A00E2040D4E07 ();
// 0x00000336 System.Void Unity.Barracuda.GenericWorker::PrepareForInput(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericWorker_PrepareForInput_m6F35B4ADF1B3350B5593E8696BA16EE6C0147426 ();
// 0x00000337 System.Void Unity.Barracuda.GenericWorker::SetInput(System.String,Unity.Barracuda.Tensor)
extern void GenericWorker_SetInput_mEF403E0602311E72C6EAAEBA72CD52E740594E18 ();
// 0x00000338 System.Void Unity.Barracuda.GenericWorker::SetInput(Unity.Barracuda.Tensor)
extern void GenericWorker_SetInput_mD25CC4B99FBE7B2A6826B390312EAD3D070D2709 ();
// 0x00000339 Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void GenericWorker_Execute_mF0E288AFE254876BEE5DD925B28CAC8BFD40BC77 ();
// 0x0000033A Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute(Unity.Barracuda.Tensor)
extern void GenericWorker_Execute_m153700E3DA6375DE1A4222769505C53F5274846C ();
// 0x0000033B Unity.Barracuda.IWorker Unity.Barracuda.GenericWorker::Execute()
extern void GenericWorker_Execute_m3E8710173DF17A7A0447E97EA69795E21843B954 ();
// 0x0000033C System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void GenericWorker_StartManualSchedule_m4861715F1A3A37DFCB4998110DDAF10AC17311C3 ();
// 0x0000033D System.Void Unity.Barracuda.GenericWorker::FlushSchedule(System.Boolean)
extern void GenericWorker_FlushSchedule_m999957159B0A2CEF66AC2C2ED96253A46DC642DC ();
// 0x0000033E System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule(Unity.Barracuda.Tensor)
extern void GenericWorker_StartManualSchedule_m12289BBE3D70087FBDD480B85FE56EF59999F6C0 ();
// 0x0000033F System.Single Unity.Barracuda.GenericWorker::get_scheduleProgress()
extern void GenericWorker_get_scheduleProgress_m6527F763F91A39BD2F0A0984AFADECD49A28AC1D ();
// 0x00000340 Unity.Barracuda.Layer_FusedActivation Unity.Barracuda.GenericWorker::GetAndVerifyFusedActivation(Unity.Barracuda.Layer)
extern void GenericWorker_GetAndVerifyFusedActivation_mD7D294BB66650F98EDBFAFC324010D1A1594649C ();
// 0x00000341 System.Collections.IEnumerator Unity.Barracuda.GenericWorker::StartManualSchedule()
extern void GenericWorker_StartManualSchedule_mA0B0150DF1E4240B1600A7180A645310A5E366D2 ();
// 0x00000342 Unity.Barracuda.Tensor Unity.Barracuda.GenericWorker::PeekOutput()
extern void GenericWorker_PeekOutput_mF1EDDBF381704C0ACDD7A09DA875F79F31D8D0F6 ();
// 0x00000343 Unity.Barracuda.Tensor Unity.Barracuda.GenericWorker::PeekOutput(System.String)
extern void GenericWorker_PeekOutput_m409A1515DAA0ADF4B4DFF0473E8C2F419C820700 ();
// 0x00000344 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericWorker::PeekConstants(System.String)
extern void GenericWorker_PeekConstants_m51798E959E3D53D3F620A580699E6D4C852EBA16 ();
// 0x00000345 System.String Unity.Barracuda.GenericWorker::Summary()
extern void GenericWorker_Summary_m467AF0D0CEE5AA1E6F79DEA026761A9846EA9ED8 ();
// 0x00000346 System.Void Unity.Barracuda.GenericVars::.ctor()
extern void GenericVars__ctor_m279EE2E5BE7B7917A5341AEB131D97181CCC7282 ();
// 0x00000347 System.Void Unity.Barracuda.GenericVars::Finalize()
extern void GenericVars_Finalize_m1284660FA4822ED0AF56901EF6AE7F5F45963229 ();
// 0x00000348 System.Void Unity.Barracuda.GenericVars::Dispose()
extern void GenericVars_Dispose_m374A804F76374AF300BB74EFF2862447D7FA5909 ();
// 0x00000349 Unity.Barracuda.ITensorAllocator Unity.Barracuda.GenericVars::GetAllocator()
extern void GenericVars_GetAllocator_m0485A0712F082DB5AAE10B9374DD194768FAEA4D ();
// 0x0000034A System.Boolean Unity.Barracuda.GenericVars::IsTensorOwnedByInternalAllocator(Unity.Barracuda.Tensor)
extern void GenericVars_IsTensorOwnedByInternalAllocator_mC39E2E90CBC8960C00439D0E1BBBB7B034A0EBEC ();
// 0x0000034B System.Boolean Unity.Barracuda.GenericVars::ValidateGlobalInputs(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVars_ValidateGlobalInputs_m7A31C67243D52D2CBFE8FF961DCA9BA9DBBC327A ();
// 0x0000034C Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::PrepareLayerInputTensors(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.IOps)
extern void GenericVars_PrepareLayerInputTensors_m5099157B1360AE81FBB30EED0EBDC2E6E84B6BA7 ();
// 0x0000034D System.Void Unity.Barracuda.GenericVars::SetInput(System.String,Unity.Barracuda.Tensor)
extern void GenericVars_SetInput_m53EE1D0B68C6BE2A288E5D75EA33C0E43F4CD038 ();
// 0x0000034E System.Void Unity.Barracuda.GenericVars::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVars_PrepareStorage_m6C94627B3F702D401B65EF03E1D67B1D35EF84FC ();
// 0x0000034F Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::GatherInputs(Unity.Barracuda.Layer)
extern void GenericVars_GatherInputs_mD59D868EFE4DA0308C015FFAC28E44B9FCA2DC7C ();
// 0x00000350 System.Void Unity.Barracuda.GenericVars::PrepareStorage(Unity.Barracuda.Layer)
extern void GenericVars_PrepareStorage_m9FF46D24F434C8FD450BB414E4EE36BA676FA38E ();
// 0x00000351 System.Void Unity.Barracuda.GenericVars::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
extern void GenericVars_Store_mC9DEE60E99338DBF6DF1E6458BDA7702E46815B1 ();
// 0x00000352 Unity.Barracuda.Tensor Unity.Barracuda.GenericVars::PeekOutput(System.String)
extern void GenericVars_PeekOutput_m60F18AA694055EECDA345BA86FD1A2724B8A4C2C ();
// 0x00000353 Unity.Barracuda.Tensor[] Unity.Barracuda.GenericVars::PeekConstants(System.String)
extern void GenericVars_PeekConstants_m60AE41D3A45893D951C46C58FA1AE051143089E1 ();
// 0x00000354 System.Boolean Unity.Barracuda.GenericVarsWithReuse::get_layerRequiresStorage()
extern void GenericVarsWithReuse_get_layerRequiresStorage_mF13B751E56278562D632C6565D825532A753857C ();
// 0x00000355 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithReuse::get_temporary()
extern void GenericVarsWithReuse_get_temporary_m45DDE40BA6794C03B8165F6B4CDB376FE0C760A3 ();
// 0x00000356 System.Void Unity.Barracuda.GenericVarsWithReuse::ReleaseTemporary()
extern void GenericVarsWithReuse_ReleaseTemporary_mB57C9BD2E57FC0C6DC54A51735C945CC380BAE94 ();
// 0x00000357 System.Void Unity.Barracuda.GenericVarsWithReuse::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVarsWithReuse_PrepareStorage_m14B3CF600AD3009D16506530A102F14D1CD4F4FB ();
// 0x00000358 System.Void Unity.Barracuda.GenericVarsWithReuse::PrepareStorage(Unity.Barracuda.Layer)
extern void GenericVarsWithReuse_PrepareStorage_mACE3CAB05EDAB7BD13FA377368A69BB9C41CDBA7 ();
// 0x00000359 System.Void Unity.Barracuda.GenericVarsWithReuse::Store(Unity.Barracuda.Layer,Unity.Barracuda.Tensor)
extern void GenericVarsWithReuse_Store_mC2B548CA5A76DB5C7CB5EA1CFA65BB5C9B1A6F2A ();
// 0x0000035A Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithReuse::PeekOutput(System.String)
extern void GenericVarsWithReuse_PeekOutput_m77F8F42ABFEF0FE226A9569E08B3A4E949D021E6 ();
// 0x0000035B System.Void Unity.Barracuda.GenericVarsWithReuse::.ctor()
extern void GenericVarsWithReuse__ctor_m9ABF90D23DDDDF4F6B1B2D894B76B53891EF3902 ();
// 0x0000035C System.Void Unity.Barracuda.GenericVarsWithPreallocation::PrepareStorage(Unity.Barracuda.Model,Unity.Barracuda.IOps,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void GenericVarsWithPreallocation_PrepareStorage_m4C6E46CF51DF91CBAAE8FBA12ED4599777B53376 ();
// 0x0000035D Unity.Barracuda.ITensorAllocator Unity.Barracuda.GenericVarsWithPreallocation::GetAllocator()
extern void GenericVarsWithPreallocation_GetAllocator_mDCB874620221B6A55B50244168D25CAF67B0E7CA ();
// 0x0000035E System.Boolean Unity.Barracuda.GenericVarsWithPreallocation::IsTensorOwnedByInternalAllocator(Unity.Barracuda.Tensor)
extern void GenericVarsWithPreallocation_IsTensorOwnedByInternalAllocator_mE6E1AAB6A7CC4BAEA4BB39F9B22D6BA42E2AF4E7 ();
// 0x0000035F Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithPreallocation::Alloc(Unity.Barracuda.TensorShape)
extern void GenericVarsWithPreallocation_Alloc_m04F3D8136D4D4FF0E56C88C7BA0B3DEEFC0868CE ();
// 0x00000360 Unity.Barracuda.Tensor Unity.Barracuda.GenericVarsWithPreallocation::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void GenericVarsWithPreallocation_Alloc_m859F863725CC4012B0D34F3DD49ACD407F91545A ();
// 0x00000361 System.Void Unity.Barracuda.GenericVarsWithPreallocation::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void GenericVarsWithPreallocation_MoveToDevice_m535DD68CEB412C14827DF9D417AC8808FF9D868E ();
// 0x00000362 System.Void Unity.Barracuda.GenericVarsWithPreallocation::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void GenericVarsWithPreallocation_Release_m3747EEFBA75386965EE4EE36A7B49CBC5CC4B26E ();
// 0x00000363 System.Void Unity.Barracuda.GenericVarsWithPreallocation::WaiveOwnership(Unity.Barracuda.Tensor)
extern void GenericVarsWithPreallocation_WaiveOwnership_m4D02772F121F1F091AD3A40910C4491A47E27299 ();
// 0x00000364 System.Void Unity.Barracuda.GenericVarsWithPreallocation::Reset(System.Boolean)
extern void GenericVarsWithPreallocation_Reset_m003D0E57C5B7FFD59BAB294EF55FC6B9719FAA4E ();
// 0x00000365 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_busyBytes()
extern void GenericVarsWithPreallocation_get_busyBytes_m7F67D7DEF25A21028C5924D228BDD0C52975FB90 ();
// 0x00000366 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_freeBytes()
extern void GenericVarsWithPreallocation_get_freeBytes_m789FFD87B2B7C7AE04B4784637AD54612588921F ();
// 0x00000367 System.Int64 Unity.Barracuda.GenericVarsWithPreallocation::get_totalBytes()
extern void GenericVarsWithPreallocation_get_totalBytes_mC8F3CC8975C2EE8662C98978368CDA8246843841 ();
// 0x00000368 System.String Unity.Barracuda.GenericVarsWithPreallocation::ToString()
extern void GenericVarsWithPreallocation_ToString_m8B3647694066F75D2037F3D1BA78D2FC1B19347D ();
// 0x00000369 System.Void Unity.Barracuda.GenericVarsWithPreallocation::.ctor()
extern void GenericVarsWithPreallocation__ctor_m036B4EBF636A166466277D31EA6E9A94E31D5F97 ();
// 0x0000036A System.Void Unity.Barracuda.DefaultTensorAllocator::.ctor()
extern void DefaultTensorAllocator__ctor_m87FB83CF1D12D83B8AB300CA02D0112B85F78F6E ();
// 0x0000036B System.Void Unity.Barracuda.DefaultVars::.ctor()
extern void DefaultVars__ctor_m2F0D20A8F662D4BFA2487003D03CB96F327A3CDC ();
// 0x0000036C System.Boolean Unity.Barracuda.CSharpBLAS::IsNative()
extern void CSharpBLAS_IsNative_mD9DD10B597990781BB45F772312ACE55691F75CD ();
// 0x0000036D System.Boolean Unity.Barracuda.CSharpBLAS::IsCurrentPlatformSupported()
extern void CSharpBLAS_IsCurrentPlatformSupported_m380924B60C2B4181A9136690996EE9F501057AF7 ();
// 0x0000036E System.Void Unity.Barracuda.CSharpBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CSharpBLAS_SGEMM_m2B1CEE26B981BF12685E76CC981AA2DE6EC72A9C ();
// 0x0000036F Unity.Jobs.JobHandle Unity.Barracuda.CSharpBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void CSharpBLAS_ScheduleSGEMM_m6AE562450BF1287633A069AB099B97543BDD474C ();
// 0x00000370 System.Void Unity.Barracuda.CSharpBLAS::.ctor()
extern void CSharpBLAS__ctor_m9064383A1425CA9C5267F0EFC09E758C0860EC6E ();
// 0x00000371 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Single[],System.Int32,System.Boolean)
extern void MatrixUtils_CopyBlockWithPadding_m6DE82D53221DCCA0ACA5203AF06A95A9C5A6BD6B ();
// 0x00000372 System.Void Unity.Barracuda.MatrixUtils::ClearFloatArray(System.Single*,System.Single,System.Int32)
extern void MatrixUtils_ClearFloatArray_mE98F8608AA5262C55D17AF058FA6236A051A878F ();
// 0x00000373 System.Void Unity.Barracuda.MatrixUtils::CopyFloatArray(System.Single*,System.Single*,System.Int32)
extern void MatrixUtils_CopyFloatArray_mF9112FD679CAB562DF83ED5B7026C114912CF962 ();
// 0x00000374 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Single*,System.Int32,System.Boolean)
extern void MatrixUtils_CopyBlockWithPadding_m037B84B616743E6D95ED42B752144A6677167E32 ();
// 0x00000375 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single[],System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void MatrixUtils_CopyBlockWithPadding_m91C650394C4FCE097FC56C3456A0CB8C08A2B5B1 ();
// 0x00000376 System.Void Unity.Barracuda.MatrixUtils::CopyBlockWithPadding(System.Single*,System.Single*,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void MatrixUtils_CopyBlockWithPadding_m1761CF983BC7618B87926E7C8913E82BDCFD9976 ();
// 0x00000377 System.Void Unity.Barracuda.MatrixUtils::MultiplyBlockUnroll8xhPadded(System.Single*,System.Single*,System.Single*,System.Int32)
extern void MatrixUtils_MultiplyBlockUnroll8xhPadded_m2279E5A55D38FC55483B576AB16539E367078F82 ();
// 0x00000378 System.Void Unity.Barracuda.MatrixUtils::MultiplyBlockUnroll8xhParallelWithPadding(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void MatrixUtils_MultiplyBlockUnroll8xhParallelWithPadding_m7D367E6CE375E615E8DC46A25B53A3B57308268F ();
// 0x00000379 System.Void Unity.Barracuda.MatrixUtils::.ctor()
extern void MatrixUtils__ctor_mB45DBFEC13BAB6AABFDC39763C019F13F3F060C2 ();
// 0x0000037A System.String Unity.Barracuda.ModelAnalyzer::GetDefaultInputName(Unity.Barracuda.Model)
extern void ModelAnalyzer_GetDefaultInputName_mF3A50A9645E9A11A594F7F4360C1E1793FD40A4C ();
// 0x0000037B System.String Unity.Barracuda.ModelAnalyzer::GetDefaultOutputName(Unity.Barracuda.Model)
extern void ModelAnalyzer_GetDefaultOutputName_mCAD7240286CFBA8FB58B7808DCB11863D51AD1F8 ();
// 0x0000037C System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.ModelAnalyzer::ListTemporaryTensorShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void ModelAnalyzer_ListTemporaryTensorShapes_mC3E75E1EFFC0A6B2A020666351BC7ECEC419192E ();
// 0x0000037D System.Nullable`1<Unity.Barracuda.TensorShape>[] Unity.Barracuda.ModelAnalyzer::ListTemporaryTensorShapes(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>&)
extern void ModelAnalyzer_ListTemporaryTensorShapes_mF461A195724ADA70037952E3E2E17495B2F7BCAD ();
// 0x0000037E System.Boolean Unity.Barracuda.ModelAnalyzer::TryGetOutputTensorShape(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>,System.String,Unity.Barracuda.TensorShape&)
extern void ModelAnalyzer_TryGetOutputTensorShape_m33999F79507E70CFD72773E028A9C39F287FAC2C ();
// 0x0000037F System.Boolean Unity.Barracuda.ModelAnalyzer::TryGetOutputTensorShape(Unity.Barracuda.Model,System.String,Unity.Barracuda.TensorShape&)
extern void ModelAnalyzer_TryGetOutputTensorShape_m1C1EE99CBEB7313E0E03B6C0AC6DFBEF508485E6 ();
// 0x00000380 System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelAnalyzer::FindLayersThatRequireStorage(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindLayersThatRequireStorage_mE79BA4352FC4A55A9AB04A1CFD882791855B4DFF ();
// 0x00000381 System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelAnalyzer::FindUpstreamLayers(Unity.Barracuda.Model,System.String[])
extern void ModelAnalyzer_FindUpstreamLayers_m59713A8D06860694B64B7FE06B2A9B38BE8BE333 ();
// 0x00000382 Unity.Barracuda.TensorShape Unity.Barracuda.ModelAnalyzer::FindLargestNecessaryTensorShape(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void ModelAnalyzer_FindLargestNecessaryTensorShape_mE005738E864468C6354A6DD0A942EF2298E64B70 ();
// 0x00000383 Unity.Barracuda.TensorShape Unity.Barracuda.ModelAnalyzer::FindLargestArgumentTensorShape(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindLargestArgumentTensorShape_mCFF022345D7E1FD2545F01F61A111AC00B24B44E ();
// 0x00000384 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnusedLayers(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnusedLayers_m5AEBEE0AFA08C359721E4324651E682A9813F844 ();
// 0x00000385 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelAnalyzer_FindBrokenLinks_m3DE95953FE0F41260B9FC4C3A0939BD883063B21 ();
// 0x00000386 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model,System.String[])
extern void ModelAnalyzer_FindBrokenLinks_m1462238B3ACD5290E10F37AA3DE35C6DBA54AC7B ();
// 0x00000387 System.String[] Unity.Barracuda.ModelAnalyzer::FindBrokenLinks(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindBrokenLinks_mF9E9F5BC92630454AD79FB67F96E2AA3DDA0339D ();
// 0x00000388 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnconnectedInputs(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnconnectedInputs_mF30F3AB4797D601AE179295B8C9BDA220F332BC5 ();
// 0x00000389 System.String[] Unity.Barracuda.ModelAnalyzer::FindUnconnectedOutputs(Unity.Barracuda.Model)
extern void ModelAnalyzer_FindUnconnectedOutputs_mBC25E8EA84340BAEC0CB7BB9E2FD3E56177D6603 ();
// 0x0000038A System.Void Unity.Barracuda.ModelAnalyzer::.ctor()
extern void ModelAnalyzer__ctor_mD900B7E2568FAF97EB3CE68F5124D14261E65AE8 ();
// 0x0000038B Unity.Barracuda.Model Unity.Barracuda.ModelOptimizer::Optimize(Unity.Barracuda.Model,System.Boolean,System.Collections.Generic.HashSet`1<System.String>)
extern void ModelOptimizer_Optimize_m00441638B5E1A0D6C5A15377EBB2AB0A82043318 ();
// 0x0000038C System.Boolean Unity.Barracuda.ModelOptimizer::IsLayerSupportingActivationFusing(Unity.Barracuda.Layer_Type)
extern void ModelOptimizer_IsLayerSupportingActivationFusing_mD154C5647A57EB4F600ECC59105A235289DDACF0 ();
// 0x0000038D System.Boolean Unity.Barracuda.ModelOptimizer::IsActivationFusable(Unity.Barracuda.Layer_Activation)
extern void ModelOptimizer_IsActivationFusable_m7C3B286A123970EC817F040871FAD1C2CB949DA4 ();
// 0x0000038E System.Void Unity.Barracuda.ModelOptimizer::FuseActivation(Unity.Barracuda.Model,Unity.Barracuda.Layer,Unity.Barracuda.Layer)
extern void ModelOptimizer_FuseActivation_mDD52288A890881F756FE927163AEC5EF893C0709 ();
// 0x0000038F System.Void Unity.Barracuda.ModelOptimizer::FuseActivations(Unity.Barracuda.Model)
extern void ModelOptimizer_FuseActivations_m65A6375ADD150ECFD361658D58AAB8B9996D4A33 ();
// 0x00000390 Unity.Barracuda.Model Unity.Barracuda.ModelOptimizer::RemoveNoop(Unity.Barracuda.Model)
extern void ModelOptimizer_RemoveNoop_mDFB8D9282D61188D9FB439311EE2CAD4DE5BA27B ();
// 0x00000391 System.Void Unity.Barracuda.ModelOptimizer::.ctor()
extern void ModelOptimizer__ctor_m54FA9A9D41044A7E2B69B1D53CB613993D629A6A ();
// 0x00000392 System.Void Unity.Barracuda.StatsOps::.ctor(Unity.Barracuda.IOps)
extern void StatsOps__ctor_m71083DBCBB4A46F47E2A84417F2BE74625EC4389 ();
// 0x00000393 System.Void Unity.Barracuda.StatsOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void StatsOps_PrepareModel_m7134F486106E17E3C3F17F58480683FB2A6CB8A2 ();
// 0x00000394 System.Void Unity.Barracuda.StatsOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void StatsOps_PreExecuteLayer_mAB3750A81BFCDF0E2FD284F13E60BD18F9684D6D ();
// 0x00000395 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_MatMul_m934D54ACE5592FEC92F239B7ADFC1E1D522EE675 ();
// 0x00000396 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Dense_mB6E13EA371D2DBC89388F47124718369DD4FB7A3 ();
// 0x00000397 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv2D_mA2D1BB1298E9B5BD6BF15FE5A6FF4CF71C28858C ();
// 0x00000398 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_DepthwiseConv2D_m0D29765A7D955AE399DE094C85319A2FB1D8BABD ();
// 0x00000399 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Conv2DTrans_m4A31B4D612BF6C7F2804358435F9853D61C155DD ();
// 0x0000039A Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Upsample2D_mC403FDABB3191F7DC2526CB7F2B1F6B07FB16C87 ();
// 0x0000039B Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_Resample2D_mCDF1B8A0D24DFEAFCCA2D7A49AE7BB780F9A669C ();
// 0x0000039C Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
extern void StatsOps_Unity_Barracuda_IOps_DepthToSpace_m1869216C4416A97C1E46D90200A2A448AE8A1B03 ();
// 0x0000039D Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_SpaceToDepth_mAAB5D9016E43437E7FD5401DBEF05573C2CAC290 ();
// 0x0000039E Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_MaxPool2D_mA9C4A1E79FF5C8827A78ABABE54DE070C69FB3B9 ();
// 0x0000039F Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_AvgPool2D_mC4353C3957EBCC5B54269BAB8341D32717C15F0A ();
// 0x000003A0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m0129D977F029C2E4A911B855F98432F93B7E9DEB ();
// 0x000003A1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m1EF9038FA444FBCE5C7B135D41BE34F7C7508B7D ();
// 0x000003A2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m0766559A0E2625DA37CE74CB592F61DEA1999E09 ();
// 0x000003A3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Border2D_mA9854CD1E0C5DE821DF80B454CE7D94DB21C46B3 ();
// 0x000003A4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DReflect_mE6CFB3A028555B28979D55F41E5DB2D224D3FA45 ();
// 0x000003A5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DSymmetric_mBD691FD3C18F7FE8D30C4ED1E11538C522A387DD ();
// 0x000003A6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Pad2DEdge_m9B54DD4CE1367125C4BE4A86204114190D623403 ();
// 0x000003A7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_ScaleBias_m9C390C4C8DFE9ACEB20A2B963C1975F929978CAB ();
// 0x000003A8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void StatsOps_Unity_Barracuda_IOps_Normalization_m0100E7F3E1C208A339A544EA8A44D1B30FE8FE35 ();
// 0x000003A9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_LRN_m73BAAFF282FC24635C087FCA9B39A6DA2E177D3E ();
// 0x000003AA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Dropout_m91825EDF2A3894821B4D557CC90AB965F593F835 ();
// 0x000003AB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_RandomNormal_mD61C58E0A97B5B083ED28BF3317A7A0ED4524CB7 ();
// 0x000003AC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_RandomUniform_mEB9383B8AC5E590B0F6A22783F652236A60C5DE3 ();
// 0x000003AD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Multinomial_m90E21B4E7717FCCCD8E1BABE8551D2979DF0E822 ();
// 0x000003AE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_OneHot_mBA4C45C255D85BDCCB188E6C807F426590E654C8 ();
// 0x000003AF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Relu_m57F9F445301B731DD1CC068C1EEC802A4CD67C8A ();
// 0x000003B0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Softmax_m739B36BDA5ABC66BE928BAE432CA71D2323BA5E3 ();
// 0x000003B1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogSoftmax_mD03A5D9CA3CE24F5BA389C40A3659698450D4EB6 ();
// 0x000003B2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Tanh_m879FD095D16965E5A8763DBD729BAB5F0AADFD8A ();
// 0x000003B3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sigmoid_m219D594248AE616F3F746694999EA57F9A361119 ();
// 0x000003B4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Relu6_m900C853C9216428F597EEAB3927FF98FFF3814DC ();
// 0x000003B5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Elu_m7683A8B37054E93CA2A62A51EB56028FEB0969AC ();
// 0x000003B6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_LeakyRelu_m37DC423219C22E36B631463A000ABE3E1F752901 ();
// 0x000003B7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Selu_mF5E4E8958CA496C1B7577D4826A49A61808B3AB2 ();
// 0x000003B8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_PRelu_m5BB24E636563A82B9E56EEA83D1C15A169FCBF43 ();
// 0x000003B9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Swish_m7CE27B1A53F9B25E4F11C770EE70BDCADBF705B7 ();
// 0x000003BA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Abs_mF78036FC974CBFA018D2EFE15BCBD0B91E927856 ();
// 0x000003BB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Neg_m616C8587ED89AAB358875B213754FC34DE398DDD ();
// 0x000003BC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Ceil_m98E4FE25A4C031289F940B2757EF82729ED2F216 ();
// 0x000003BD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Clip_mF055D3B87248D547C58B9D172C4658DF887D3D25 ();
// 0x000003BE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Floor_mF526A23303D93CE89BC01D9577C0D8EDCFC735CE ();
// 0x000003BF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Reciprocal_mE2C183066D8197C48CE8C52D1B7EB188072D46B7 ();
// 0x000003C0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void StatsOps_Unity_Barracuda_IOps_Pow_mB42C17CC692FA2692400B5624E3BAF24E8D06D07 ();
// 0x000003C1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Exp_m6C25D1046C31CAA5255A995DD4FCD8E3713005D0 ();
// 0x000003C2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Log_m235281DD44B0395F5BFC927CC2BA4F958B20DCC8 ();
// 0x000003C3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Sqrt_m6D4E5829150BEE508BFD24ADBEC6545EA369BA7F ();
// 0x000003C4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Add_m87B11BAB50CE1F34EEDCEC2F3A4EFB11DAB80991 ();
// 0x000003C5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Sub_m5CA381AC3C0F85B09AB19902711F9336A0687EA3 ();
// 0x000003C6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Mul_m44D58589947F959EC9CBA29D7AC2DA23198704DA ();
// 0x000003C7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Div_m987E42E17CD2647925D91E5340DBC403934FEB01 ();
// 0x000003C8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Pow_m2E5FCDBD33F53013B96CEA6794F12897F816DAC7 ();
// 0x000003C9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Min_mB8ED2D4509BBF491BD5F166C4378C53B38EA202D ();
// 0x000003CA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Max_mBA1AF26B9448747AC7C93DADC69FCB2040A7EAF6 ();
// 0x000003CB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void StatsOps_Unity_Barracuda_IOps_Mean_m76801731A61C4C1FBD8D01250E588629D6994052 ();
// 0x000003CC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMax_mED0602CF6D2FA947A4D63B6A3F3708F8B985729E ();
// 0x000003CD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMean_m6EF33F303877794F7F7183C816D1DEB4271A810D ();
// 0x000003CE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceMin_m902680EF3FC95B9CC424509A20F8BBC3A5231666 ();
// 0x000003CF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceProd_m10F7C9C42C0A0323E4641540545176D19CD21297 ();
// 0x000003D0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_ReduceSum_m27FFE0AA1AF404617BCADB919E75A7C226E11D4C ();
// 0x000003D1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Greater_m0C0A637841DC813E082C7299579F1D0166E6EDD5 ();
// 0x000003D2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_GreaterEqual_mFCA0F087CF351A22EBD3C2D66CBF775F9B4BAA1E ();
// 0x000003D3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Less_mABD40CA855AF2C247E376420DB17C61DCB0991D1 ();
// 0x000003D4 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LessEqual_m3E992956CAF897489E0A78B14BC9EE42A2D075E2 ();
// 0x000003D5 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Equal_m072D60A853666D124885C6A23C414106095B3E50 ();
// 0x000003D6 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalOr_mEC3D49EE9528990B6C18A7D23C9CE07676AF77A6 ();
// 0x000003D7 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalAnd_m98E1A2C4A34C9FB6112BEDCD912D6B76B2400F68 ();
// 0x000003D8 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalXor_m38A58FF807376BF34A0D7304A22FD70C2183BA8C ();
// 0x000003D9 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_LogicalNot_m1DE3C12849846FFE9094639E096832A0C81AB296 ();
// 0x000003DA Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Flatten_m6B1075770DCCF6D1C8970B27323E2AEAB5454E16 ();
// 0x000003DB Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void StatsOps_Unity_Barracuda_IOps_Reshape_m964759662E9BE2A0D67D40AC91C06D76E13C038E ();
// 0x000003DC Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void StatsOps_Unity_Barracuda_IOps_Expand_m5D3F369339A31A9C8740123FF3B4113D45A67532 ();
// 0x000003DD Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Transpose_m2F42A425F03D12092DC78A6DEEA6F6D7F721156E ();
// 0x000003DE Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Gather_m73458DDCCFA91D1FB4779730DA6DE16E50E634D5 ();
// 0x000003DF Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void StatsOps_Unity_Barracuda_IOps_Concat_m5871177622E7B1A4E45FD35528D6F41F9484939D ();
// 0x000003E0 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_StridedSlice_m0CA229E22556E59850A2968032A92B3CAF22EDCD ();
// 0x000003E1 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void StatsOps_Unity_Barracuda_IOps_Tile_m4DE8FFF8EAF476123624F69A9B4BE1F37D464181 ();
// 0x000003E2 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Copy_m3FD0F960FE58D105D3CAEF4CBE1342A619E6C7BE ();
// 0x000003E3 Unity.Barracuda.Tensor Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void StatsOps_Unity_Barracuda_IOps_Prepare_mF4A11EFAA273A5AECAAFCD44E80B46B3BD5D2911 ();
// 0x000003E4 System.Void Unity.Barracuda.StatsOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void StatsOps_Unity_Barracuda_IOps_ResetAllocator_mFDC855DC8AC2E581662DAF465BFE826AD85E9B9F ();
// 0x000003E5 System.String Unity.Barracuda.StatsOps::ToString()
extern void StatsOps_ToString_mCD4DDEFE828FFD80076461CEBC21C0AB3E33CBEB ();
// 0x000003E6 System.Void Unity.Barracuda.StatsOps::Elementwise(Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_Elementwise_m9BA7FAF32250454545116B082B71ECDF788684B1 ();
// 0x000003E7 System.Void Unity.Barracuda.StatsOps::ElementwiseBroadcast(Unity.Barracuda.Tensor[],Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_ElementwiseBroadcast_m9D167819505A0D9FB2EE41A8D727C27F613D4F3F ();
// 0x000003E8 System.Void Unity.Barracuda.StatsOps::Reduce(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int64)
extern void StatsOps_Reduce_m90E34AAB2D431DF7581D58D552C3E6859CD706EC ();
// 0x000003E9 System.Void Unity.Barracuda.TensorOperatorNewAllocator::.ctor()
extern void TensorOperatorNewAllocator__ctor_m2F768F307265CA27AD05B78A05B63738647DB85C ();
// 0x000003EA System.Void Unity.Barracuda.TensorOperatorNewAllocator::Finalize()
extern void TensorOperatorNewAllocator_Finalize_m9FF1B5C88A751FA746B3E9B0E2766F5E25D1B621 ();
// 0x000003EB Unity.Barracuda.Tensor Unity.Barracuda.TensorOperatorNewAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorOperatorNewAllocator_Alloc_m5165C63084CB4939A938BD04B52D4ECEACA69181 ();
// 0x000003EC Unity.Barracuda.Tensor Unity.Barracuda.TensorOperatorNewAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorOperatorNewAllocator_Alloc_mA34FB48008896156D1398E703CF40D6AB731622D ();
// 0x000003ED System.Void Unity.Barracuda.TensorOperatorNewAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorOperatorNewAllocator_Release_mB68F7080587D198F9BDA4B354025C2E13FD13E78 ();
// 0x000003EE System.Void Unity.Barracuda.TensorOperatorNewAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorOperatorNewAllocator_MoveToDevice_mB82A82270A3526B3C602DF15D8F9DF576A9E79E2 ();
// 0x000003EF System.Void Unity.Barracuda.TensorOperatorNewAllocator::Reset(System.Boolean)
extern void TensorOperatorNewAllocator_Reset_m19E2E9535C38510A212D8EC51DDC9EAE5416A5B7 ();
// 0x000003F0 System.Void Unity.Barracuda.TensorOperatorNewAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorOperatorNewAllocator_WaiveOwnership_mE5A406116D9582A1B8A5CF851CCE0316058A96BB ();
// 0x000003F1 System.Void Unity.Barracuda.TensorOperatorNewAllocator::Dispose()
extern void TensorOperatorNewAllocator_Dispose_mA95E13F3FAB91C64BF48C08538D445CC7E469330 ();
// 0x000003F2 System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_busyBytes()
extern void TensorOperatorNewAllocator_get_busyBytes_m88454045D675747C3AB4902775C8656A004C8516 ();
// 0x000003F3 System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_freeBytes()
extern void TensorOperatorNewAllocator_get_freeBytes_m8576ADCDF770250F0EC6D791EDE50244F1287A89 ();
// 0x000003F4 System.Int64 Unity.Barracuda.TensorOperatorNewAllocator::get_totalBytes()
extern void TensorOperatorNewAllocator_get_totalBytes_m99B309F7D732A7CD019E54D5558585C1CD6FD22D ();
// 0x000003F5 System.String Unity.Barracuda.TensorOperatorNewAllocator::ToString()
extern void TensorOperatorNewAllocator_ToString_m62C5156E81C0F95FF8BEF78CDC46BA12C0B85496 ();
// 0x000003F6 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::.ctor()
extern void TensorCachingByShapeAllocator__ctor_m56F49EF5E6A5F1293E109AC5A53B51BB2C518377 ();
// 0x000003F7 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Finalize()
extern void TensorCachingByShapeAllocator_Finalize_m7557517903732BCC6C9E5C2F99970AC27A3CBFE3 ();
// 0x000003F8 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AddRef(Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_AddRef_m783DFDFACD72D8F857731BC6B26B1A21941E7748 ();
// 0x000003F9 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::DecRef(Unity.Barracuda.ITensorData,System.Action`1<Unity.Barracuda.ITensorData>)
extern void TensorCachingByShapeAllocator_DecRef_m3274D9D6DAE8AE0831495BB83DBBC772A92649A5 ();
// 0x000003FA System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AdoptFreeBuffer(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_AdoptFreeBuffer_mB3F08D39CFD0088E28A724E950A7E6EEC8302801 ();
// 0x000003FB Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorCachingByShapeAllocator_Alloc_m47E340C268156A1FA9E9275ECD5856ED98186797 ();
// 0x000003FC Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_Alloc_mEB464F703DAFA21FCCBFD181D8F352E9E06CA9E8 ();
// 0x000003FD System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorCachingByShapeAllocator_Release_mFCDB1B1C160A554619B7DD8B6338911738EEF9F6 ();
// 0x000003FE System.Void Unity.Barracuda.TensorCachingByShapeAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorCachingByShapeAllocator_MoveToDevice_m216ACE5AC50F5C4D2A7C91E5FFA11FEA1F803AAD ();
// 0x000003FF System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Cast(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData)
extern void TensorCachingByShapeAllocator_Cast_mF2544B39667E20A36B027596CE5BBB836C1505F0 ();
// 0x00000400 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Reset(System.Boolean)
extern void TensorCachingByShapeAllocator_Reset_m8AE5C4DD646316BE8F566D3A8F15E750A4157628 ();
// 0x00000401 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorCachingByShapeAllocator_WaiveOwnership_m1F52065C5A61A814F24742E5D3863649A5395B0F ();
// 0x00000402 System.Void Unity.Barracuda.TensorCachingByShapeAllocator::Dispose()
extern void TensorCachingByShapeAllocator_Dispose_mCB23F36BC1FCAC4915E16DA219C014A17567458C ();
// 0x00000403 System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_busyBytes()
extern void TensorCachingByShapeAllocator_get_busyBytes_mF9E877883548AE66866B541E634E9F3B705D0CC7 ();
// 0x00000404 System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_freeBytes()
extern void TensorCachingByShapeAllocator_get_freeBytes_m3D5D6310897528EA4A6DA0475F2B74703D182075 ();
// 0x00000405 System.Int64 Unity.Barracuda.TensorCachingByShapeAllocator::get_totalBytes()
extern void TensorCachingByShapeAllocator_get_totalBytes_mE80A2479E9D6612E5D85CCC20E9BA49B22C68FA5 ();
// 0x00000406 System.String Unity.Barracuda.TensorCachingByShapeAllocator::ToString()
extern void TensorCachingByShapeAllocator_ToString_mDCA2605C0C698635B95A978D41D4FA24C2BFC723 ();
// 0x00000407 System.Void Unity.Barracuda.TensorCachingAllocator::.ctor()
extern void TensorCachingAllocator__ctor_m0AF9D7BD49A61349B4D0472A9B9DA7CDD634B09B ();
// 0x00000408 System.Void Unity.Barracuda.TensorCachingAllocator::Finalize()
extern void TensorCachingAllocator_Finalize_m43277351D773A0EDF3C606EBE3C3C78FE8460C7C ();
// 0x00000409 System.Int32 Unity.Barracuda.TensorCachingAllocator::GetAllocationMaxCount(Unity.Barracuda.Tensor)
extern void TensorCachingAllocator_GetAllocationMaxCount_mB32D22101966A4709334F2F0813DFEB09BD90896 ();
// 0x0000040A System.Void Unity.Barracuda.TensorCachingAllocator::AddRef(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_AddRef_m6B728CFDDE254EF9B04A363C57CB3E48653CF3CC ();
// 0x0000040B System.Void Unity.Barracuda.TensorCachingAllocator::DecRef(Unity.Barracuda.ITensorData,System.Action`1<Unity.Barracuda.ITensorData>)
extern void TensorCachingAllocator_DecRef_m8E037C323465CB95E326B9B2A3F1383104759114 ();
// 0x0000040C System.Void Unity.Barracuda.TensorCachingAllocator::AdoptFreeBuffer(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_AdoptFreeBuffer_m85FBF8C7369892837C663956A861CC19CF89672A ();
// 0x0000040D System.Void Unity.Barracuda.TensorCachingAllocator::DisposeAllocatedBuffer(Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_DisposeAllocatedBuffer_m45F29A43085F53A5D2FC99BB55BBDF7EF1D04DD3 ();
// 0x0000040E Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingAllocator::Alloc(Unity.Barracuda.TensorShape)
extern void TensorCachingAllocator_Alloc_m39789C8C27AF21FB414E6D5C2DEF5598F5887B80 ();
// 0x0000040F Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingAllocator::Alloc(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_Alloc_m2945A387CC61DF8B2B45FF6588715C32810721FC ();
// 0x00000410 System.Void Unity.Barracuda.TensorCachingAllocator::Release(Unity.Barracuda.Tensor,System.Boolean)
extern void TensorCachingAllocator_Release_mCC680F4D9466A92F7C0204E036B94804D344ADB7 ();
// 0x00000411 System.Void Unity.Barracuda.TensorCachingAllocator::MoveToDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData,System.Boolean)
extern void TensorCachingAllocator_MoveToDevice_m8416C538443A9C0145E1A0E4504BCFFAFBF2A64C ();
// 0x00000412 System.Void Unity.Barracuda.TensorCachingAllocator::Cast(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorData)
extern void TensorCachingAllocator_Cast_mF5EE48D9B34551711C5F9582FE3BE816FE132B34 ();
// 0x00000413 System.Void Unity.Barracuda.TensorCachingAllocator::Reset(System.Boolean)
extern void TensorCachingAllocator_Reset_mD56009B3EAB8EE921CF559745EA3B29C8EF75026 ();
// 0x00000414 System.Void Unity.Barracuda.TensorCachingAllocator::WaiveOwnership(Unity.Barracuda.Tensor)
extern void TensorCachingAllocator_WaiveOwnership_m4CDBB4F4A7D1B301ADB3276353D8173990CDB106 ();
// 0x00000415 System.Void Unity.Barracuda.TensorCachingAllocator::Dispose()
extern void TensorCachingAllocator_Dispose_m511E93D12BAC25C2C75E06AB793835D93D7A3F19 ();
// 0x00000416 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_busyBytes()
extern void TensorCachingAllocator_get_busyBytes_mF78796ECDDEFB0D9719F3F19760B1C0E2C67DFD4 ();
// 0x00000417 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_freeBytes()
extern void TensorCachingAllocator_get_freeBytes_mE2AF5A497C952EEE0DA0D3B1955D0563B1EE0FC9 ();
// 0x00000418 System.Int64 Unity.Barracuda.TensorCachingAllocator::get_totalBytes()
extern void TensorCachingAllocator_get_totalBytes_mBD216CB64858E07DFBC598C6BC2BB24E4C1808BF ();
// 0x00000419 System.String Unity.Barracuda.TensorCachingAllocator::ToString()
extern void TensorCachingAllocator_ToString_mD5286B5462F004CA1EFAD06F8873F45DAA61717A ();
// 0x0000041A System.Void Unity.Barracuda.VerboseOps::.ctor(Unity.Barracuda.IOps)
extern void VerboseOps__ctor_m6DA1BEE4067670E7558C1D45A8276C33A4C3BD0C ();
// 0x0000041B System.Void Unity.Barracuda.VerboseOps::PrepareModel(Unity.Barracuda.Model,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
extern void VerboseOps_PrepareModel_mC539FFFDBD231E67988971855B7DA42D3721DBE3 ();
// 0x0000041C System.Void Unity.Barracuda.VerboseOps::PreExecuteLayer(Unity.Barracuda.Layer,Unity.Barracuda.Tensor[])
extern void VerboseOps_PreExecuteLayer_m8AAC2CA24A7D2BFD36B133EE8793B3B07C8CFD4F ();
// 0x0000041D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MatMul(Unity.Barracuda.Tensor,System.Boolean,Unity.Barracuda.Tensor,System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_MatMul_mA789536FBB4B71307F50A5E63DAD4AA0226D7949 ();
// 0x0000041E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dense(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Layer_FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Dense_mC7C16EA9276484208B3AE72C9DC2F92D04449050 ();
// 0x0000041F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv2D_m352CBBC5C45FE66D094265D459A66AC708313998 ();
// 0x00000420 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.DepthwiseConv2D(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_DepthwiseConv2D_m57222C10E613F32BC88B4720E324C3613FFC35F8 ();
// 0x00000421 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Conv2DTrans(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Layer_FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Conv2DTrans_mA0D23D53CFB1EF2B645E8497FD2A911070169F96 ();
// 0x00000422 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Upsample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Upsample2D_m82C42CBA2199F3B31D785F8F01485466CE53BA80 ();
// 0x00000423 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Resample2D(Unity.Barracuda.Tensor,System.Int32[],System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_Resample2D_m544C40C67ABE4BAB9CE66BAC79F6C316A88A7839 ();
// 0x00000424 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.DepthToSpace(Unity.Barracuda.Tensor,System.Int32[],Unity.Barracuda.Layer_DepthToSpaceMode)
extern void VerboseOps_Unity_Barracuda_IOps_DepthToSpace_m584A19C0D11F72690D5D7A8462E804AFE8C0B120 ();
// 0x00000425 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.SpaceToDepth(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_SpaceToDepth_m4BFEFEFE92B008F448D909F8D8C61F68292087E2 ();
// 0x00000426 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.MaxPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_MaxPool2D_mE8354507F01B07CE7C33EC842A90D6CCE0DD61CA ();
// 0x00000427 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.AvgPool2D(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_AvgPool2D_mA033F889DA7761D997005543AAB399733355361A ();
// 0x00000428 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalMaxPool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m07ECCFE492178FF3E52538D006B47DF040EDD30D ();
// 0x00000429 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalAvgPool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalAvgPool2D_mD62B61E43A920E01C23D084CCB8BAD08FE28C912 ();
// 0x0000042A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GlobalAvgVariancePool2D(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m3D3CAFAE938327B54ED21C507DFCB260628D4C6B ();
// 0x0000042B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Border2D(Unity.Barracuda.Tensor,System.Int32[],System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Border2D_m3289401D17E0E314DECA947C6A32168D3E435012 ();
// 0x0000042C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DReflect(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DReflect_m66A9DBCA8911A9C8E6EB7D928735CD7512D57B3D ();
// 0x0000042D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DSymmetric(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DSymmetric_m85707CEF965E5FE83F5596E28B9E0856C8161506 ();
// 0x0000042E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pad2DEdge(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Pad2DEdge_m9B5D86F57A901164CC1947AA7E1997C59D8F0B4C ();
// 0x0000042F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ScaleBias(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_ScaleBias_mCB28533E028FE02B0BCF9808A2EA657B695E4571 ();
// 0x00000430 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Normalization(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,Unity.Barracuda.Layer_FusedActivation)
extern void VerboseOps_Unity_Barracuda_IOps_Normalization_mBB0E7F373239C75F3C958FD269E1B68130425CDB ();
// 0x00000431 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LRN(Unity.Barracuda.Tensor,System.Single,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_LRN_m87D80499D50BC2514DBDB1D94DDDEC81F5ADB96C ();
// 0x00000432 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Dropout(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Dropout_mC8C01BE36F4FAD0618241711706BA2F0317F3E6F ();
// 0x00000433 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.RandomNormal(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_RandomNormal_mA7530FB15D3A6070EF63AF51DA77A27F414521ED ();
// 0x00000434 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.RandomUniform(Unity.Barracuda.TensorShape,System.Single,System.Single,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_RandomUniform_mED13692C408ECB663F5C7F3E3137C3A94DF04452 ();
// 0x00000435 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Multinomial(Unity.Barracuda.Tensor,System.Int32,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Multinomial_m5A4E079418783AC50C3139A2E2134BE3A0CB9831 ();
// 0x00000436 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.OneHot(Unity.Barracuda.Tensor,System.Int32,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_OneHot_m0FA6EC0F8755895A9FCF9EB25FE49E666C3A10FE ();
// 0x00000437 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Relu(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Relu_mAF3569F733CA33BFDA90D83980C51F0C57AF153D ();
// 0x00000438 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Softmax(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Softmax_m553C464E4CDA2505BCAF76868659D7B26FD591F7 ();
// 0x00000439 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogSoftmax(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogSoftmax_mB59FFA471212F4ED1BA6D48DC534E6459F652F08 ();
// 0x0000043A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tanh(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Tanh_m24569A8B10C6BD1B1034A63D656DB3A1350F627D ();
// 0x0000043B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sigmoid(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sigmoid_m5174DBF81060EF5449CE431BA8745A535DCA7696 ();
// 0x0000043C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Relu6(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Relu6_mDCC82C3E2107B63DB113A6AA6F14333D47DEA4C7 ();
// 0x0000043D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Elu(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Elu_mB1B183B7CF605BB92DF2DF259844759EA6FE606B ();
// 0x0000043E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LeakyRelu(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_LeakyRelu_m05DA9207355D2BB8B7892BC7809365CEF584C899 ();
// 0x0000043F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Selu(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Selu_mFA8CD0F0DD3C1DCF5D64433A25A45E72A8416D10 ();
// 0x00000440 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.PRelu(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_PRelu_mB9DCB2F2047DD20FB326766001686903679FDC2C ();
// 0x00000441 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Swish(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Swish_m62E8B3B4EFB4E910CFF1262837DBE3E04F076102 ();
// 0x00000442 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Abs(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Abs_m742F34A96601BF9AC79096DC141FDC57D62CE7EE ();
// 0x00000443 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Neg(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Neg_mAED14123A28534F42181538F3B05397A0D051D4F ();
// 0x00000444 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Ceil(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Ceil_mBFA7A1E3F1218B49115933CB6A7CC01B53BCCC4A ();
// 0x00000445 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Clip(Unity.Barracuda.Tensor,System.Single,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Clip_m167ACFB16B61B4D7468893BF8315E4C382EE37D4 ();
// 0x00000446 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Floor(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Floor_m3904DD40A15AD6137C2CB98EAC16DFD195356EA8 ();
// 0x00000447 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Reciprocal(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Reciprocal_m8955AEA43AC90079BB1A242F6F49541D9EC6B46E ();
// 0x00000448 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor,System.Single)
extern void VerboseOps_Unity_Barracuda_IOps_Pow_m313C714AB9B2D85C4C089D2944DA276A21937930 ();
// 0x00000449 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Exp(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Exp_mF7ED21CF40A08974E02A1FE67D236F020683CD33 ();
// 0x0000044A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Log(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Log_m6B1C7E6972DA60CA5313998E21794B1D859F3BDD ();
// 0x0000044B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sqrt(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Sqrt_m17326E2F81E7D6162EED5875A34D77615948B258 ();
// 0x0000044C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Add(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Add_m38C0BDC296FC5DA984A3326437C79FB9998F1922 ();
// 0x0000044D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Sub(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Sub_m4B8F23A94B462AFD7B8A8DDE0CA5CC57A2D8D35F ();
// 0x0000044E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Mul(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Mul_mB2285D65E6C5F922FFC0F7DC3737A787F1EC5523 ();
// 0x0000044F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Div(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Div_mF72DFFFC9C216229C57CB9ED190A87B0C068F6A7 ();
// 0x00000450 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Pow(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Pow_m038172C74F27DFE2EAD8A0C18B6CBA5D8CEED388 ();
// 0x00000451 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Min(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Min_mF938632B7E5C88CB34F314394560D19265F0E588 ();
// 0x00000452 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Max(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Max_mE7AD94E419B0D1260F68931C27A5B55D298FDE93 ();
// 0x00000453 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Mean(Unity.Barracuda.Tensor[])
extern void VerboseOps_Unity_Barracuda_IOps_Mean_m4DE16F10605B20FD14CC77FBC6D6ABEA3633EFB0 ();
// 0x00000454 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMax(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMax_m229895224C383B128E79A149FD72D0CDDB65CC6F ();
// 0x00000455 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMean(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMean_m6DC44CA587D228ED21182AD0BE320A34A6A7BC91 ();
// 0x00000456 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceMin(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceMin_mD3EA3A196B5E51CB741E2825B6CDB0909FF1683D ();
// 0x00000457 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceProd(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceProd_m8D90AC08D5E02D14994F4DCF4C22A16E40B320F7 ();
// 0x00000458 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ReduceSum(Unity.Barracuda.Tensor,System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_ReduceSum_m006CC3535709347863F04835785A4D551A3766F9 ();
// 0x00000459 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Greater(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Greater_m5B98733EB3F41549003E70EAC37F9A064253F5AB ();
// 0x0000045A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.GreaterEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_GreaterEqual_m0C9FFB8C06473E88970171492ACB83BCC3852736 ();
// 0x0000045B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Less(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Less_m558118C3B03E89D11A184B54EF15EA39BEFCA5B7 ();
// 0x0000045C Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LessEqual(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LessEqual_mCCDCCE4FF1FC439FF7E4F402BA758F6710335F55 ();
// 0x0000045D Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Equal(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Equal_m3A46C7E9B6CD1C3D5381D736EA4EB28E7DCC3C5D ();
// 0x0000045E Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalOr(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalOr_mAD7EFDB9123B6B9E3B5383321F51DD08BA1971B5 ();
// 0x0000045F Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalAnd(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalAnd_mFC78E601F1DF9666054B430269D5B55544793838 ();
// 0x00000460 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalXor(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalXor_m4B451C209D0E157122B72029E8CEDABB8FB4325A ();
// 0x00000461 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.LogicalNot(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_LogicalNot_m974A9D17FD63F4315F75622A5DC34D950568FAE6 ();
// 0x00000462 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Flatten(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Flatten_mE60E8BDA8DCE5BDEF7E0D03691B74ACF398D44ED ();
// 0x00000463 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Reshape(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void VerboseOps_Unity_Barracuda_IOps_Reshape_mF20FB7B9F7D2101F205693D8A96691E9FBBD72F6 ();
// 0x00000464 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Expand(Unity.Barracuda.Tensor,Unity.Barracuda.TensorShape)
extern void VerboseOps_Unity_Barracuda_IOps_Expand_m23053FE8FC685A64158A7336B26311954ACDABD2 ();
// 0x00000465 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Transpose(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Transpose_m884D38ACCFA931D347250A62D6CD2D468C94F60A ();
// 0x00000466 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Gather(Unity.Barracuda.Tensor[],System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Gather_mD1743FF9C9CBCD4183D43EE49D45B8583BA9339C ();
// 0x00000467 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void VerboseOps_Unity_Barracuda_IOps_Concat_mD2FD768D47474C1C28BCFDB56C94CF3FE33C6766 ();
// 0x00000468 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.StridedSlice(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_StridedSlice_mFE47FAD8558CD6E0792480DE6873D080089EAA91 ();
// 0x00000469 Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Tile(Unity.Barracuda.Tensor,System.Int32[])
extern void VerboseOps_Unity_Barracuda_IOps_Tile_mFD4E5936F4994A2AD7D1F9DCA3E529A4077EB05E ();
// 0x0000046A Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Copy(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Copy_m9C494AD0A4E121276798479F0B596B0B7BE53308 ();
// 0x0000046B Unity.Barracuda.Tensor Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.Prepare(Unity.Barracuda.Tensor)
extern void VerboseOps_Unity_Barracuda_IOps_Prepare_m9B443B3CA74355C522186153C33456EF9ED7D83B ();
// 0x0000046C System.Void Unity.Barracuda.VerboseOps::Unity.Barracuda.IOps.ResetAllocator(System.Boolean)
extern void VerboseOps_Unity_Barracuda_IOps_ResetAllocator_mB13C7CF212741DF9DC010958D24A6953DD63C3DB ();
// 0x0000046D System.Void Unity.Barracuda.DeprecatedTensorExtensions::PinToDeviceAndUploadToIt(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData,System.Boolean)
extern void DeprecatedTensorExtensions_PinToDeviceAndUploadToIt_mEB291570FB95F07638A21696280067B2982520E4 ();
// 0x0000046E System.Void Unity.Barracuda.DeprecatedTensorExtensions::PinToDeviceAndDownloadFromIt(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData)
extern void DeprecatedTensorExtensions_PinToDeviceAndDownloadFromIt_m64974B2278CDCD3B2006883663096AEB4B5926A9 ();
// 0x0000046F Unity.Barracuda.ITensorData Unity.Barracuda.DeprecatedTensorExtensions::Unpin(Unity.Barracuda.Tensor,System.Boolean)
extern void DeprecatedTensorExtensions_Unpin_m6E46FAE210D077B9333C336AEFBD217208C46C53 ();
// 0x00000470 System.Void Unity.Barracuda.DeprecatedTensorExtensions::CastOnDevice(Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData)
extern void DeprecatedTensorExtensions_CastOnDevice_m7FA400433938AA4A18DE5D51356761BB33E48CDC ();
// 0x00000471 System.Int32 Unity.Barracuda.DeprecatedTensorDataExtensions::GetMaxCount(Unity.Barracuda.ITensorData)
extern void DeprecatedTensorDataExtensions_GetMaxCount_m25CED740896383157A65A20DAA1C76BF11CBB562 ();
// 0x00000472 System.Void Unity.Barracuda.DeprecatedWorkerExtensions::AddInput(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_AddInput_mD5B8B38E9B20D643607DF062BD3B3167449BDD86 ();
// 0x00000473 System.Void Unity.Barracuda.DeprecatedWorkerExtensions::AddInput(Unity.Barracuda.IWorker,System.String,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_AddInput_mC317A35610CFCB147CD511EF8B2830123DE2D2BA ();
// 0x00000474 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Peek(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_Peek_mF7B4E8FDD3659FBCA8A80A06E357D982CAC06627 ();
// 0x00000475 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Peek(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_Peek_m2927D9B7A4472D8B940132347C1970718BF06362 ();
// 0x00000476 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_ExecuteAsync_mBBF016F74A6D78CF286CEAE152D1577CA4861C9E ();
// 0x00000477 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_ExecuteAsync_m30E4878BF0FAA9D93AF84300EFF8140F6D4AF5CC ();
// 0x00000478 System.Collections.IEnumerator Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAsync(Unity.Barracuda.IWorker,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void DeprecatedWorkerExtensions_ExecuteAsync_m83EC2656AA7D298D4FAB0114BC7097864FE89F93 ();
// 0x00000479 System.Void Unity.Barracuda.DeprecatedWorkerExtensions::WaitForCompletion(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_WaitForCompletion_mC42CF04C8890BE02BBE2037B689FCA8D0EE82743 ();
// 0x0000047A System.Single Unity.Barracuda.DeprecatedWorkerExtensions::GetAsyncProgress(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_GetAsyncProgress_m8B40933280EA1FF9B543E2B18FDB3D6519B75C18 ();
// 0x0000047B Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAndWaitForCompletion(Unity.Barracuda.IWorker,Unity.Barracuda.Tensor)
extern void DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m1CAF41BB5F77FE6E3C9612B39251A555F95B0DAE ();
// 0x0000047C Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::ExecuteAndWaitForCompletion(Unity.Barracuda.IWorker,System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m5582D9B2EF53D4C8F8DEFDFB50863268300BD313 ();
// 0x0000047D Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::FetchAndTakeOwnership(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_FetchAndTakeOwnership_mCBB531BDFBD54A1B6170858F0998C3CD1219671E ();
// 0x0000047E Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::FetchAndTakeOwnership(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_FetchAndTakeOwnership_m9EB16C8F642D64B09E3D73C1D5839266DEAB05F2 ();
// 0x0000047F Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Fetch(Unity.Barracuda.IWorker)
extern void DeprecatedWorkerExtensions_Fetch_m8C0403E7933274E0C3A72A9F129D5C338423FB40 ();
// 0x00000480 Unity.Barracuda.Tensor Unity.Barracuda.DeprecatedWorkerExtensions::Fetch(Unity.Barracuda.IWorker,System.String)
extern void DeprecatedWorkerExtensions_Fetch_mAF0A19E34D9D28FA3B50289EA48A4BD276401FB5 ();
// 0x00000481 System.Boolean Unity.Barracuda.BarracudaWorkerFactory::IsType(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.BarracudaWorkerFactory_Flags)
extern void BarracudaWorkerFactory_IsType_mC15A94E97D8810DB3B3E1E845CDA1F004049AFEC ();
// 0x00000482 System.Void Unity.Barracuda.BarracudaWorkerFactory::.ctor()
extern void BarracudaWorkerFactory__ctor_mBEFC028398381FB229BF7DD256E3167912AEAF21 ();
// 0x00000483 System.Void Unity.Barracuda.BarracudaTextureUtils::TensorToRenderTexture(Unity.Barracuda.Tensor,UnityEngine.RenderTexture,System.Int32,System.Int32,System.Single,System.Single)
extern void BarracudaTextureUtils_TensorToRenderTexture_m20E842D480332DF1AC6417634891C3E0A3703226 ();
// 0x00000484 UnityEngine.RenderTexture Unity.Barracuda.BarracudaTextureUtils::TensorToRenderTexture(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Single,System.Single)
extern void BarracudaTextureUtils_TensorToRenderTexture_m039BBF515D255503EB77C533CCD7154A85FBA324 ();
// 0x00000485 System.Void Unity.Barracuda.BarracudaTextureUtils::.ctor()
extern void BarracudaTextureUtils__ctor_m0CE7B018206F41988140A646E916C06886E98917 ();
// 0x00000486 System.Void Unity.Barracuda.IWorker::PrepareForInput(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.TensorShape>)
// 0x00000487 System.Void Unity.Barracuda.IWorker::SetInput(Unity.Barracuda.Tensor)
// 0x00000488 System.Void Unity.Barracuda.IWorker::SetInput(System.String,Unity.Barracuda.Tensor)
// 0x00000489 Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute()
// 0x0000048A Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute(Unity.Barracuda.Tensor)
// 0x0000048B Unity.Barracuda.IWorker Unity.Barracuda.IWorker::Execute(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
// 0x0000048C System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule()
// 0x0000048D System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule(Unity.Barracuda.Tensor)
// 0x0000048E System.Collections.IEnumerator Unity.Barracuda.IWorker::StartManualSchedule(System.Collections.Generic.IDictionary`2<System.String,Unity.Barracuda.Tensor>)
// 0x0000048F System.Void Unity.Barracuda.IWorker::FlushSchedule(System.Boolean)
// 0x00000490 System.Single Unity.Barracuda.IWorker::get_scheduleProgress()
// 0x00000491 Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput()
// 0x00000492 Unity.Barracuda.Tensor Unity.Barracuda.IWorker::PeekOutput(System.String)
// 0x00000493 Unity.Barracuda.Tensor[] Unity.Barracuda.IWorker::PeekConstants(System.String)
// 0x00000494 System.String Unity.Barracuda.IWorker::Summary()
// 0x00000495 Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker)
extern void WorkerExtensions_CopyOutput_mCB7F6168CAED5960F037CCD8DBE19A4506D10CCC ();
// 0x00000496 Unity.Barracuda.Tensor Unity.Barracuda.WorkerExtensions::CopyOutput(Unity.Barracuda.IWorker,System.String)
extern void WorkerExtensions_CopyOutput_m3F657D369FA058A457C6AA9D453EB6FC5C650F9E ();
// 0x00000497 System.Void Unity.Barracuda.ITensorData::Reserve(System.Int32)
// 0x00000498 System.Void Unity.Barracuda.ITensorData::Upload(System.Single[],Unity.Barracuda.TensorShape,System.Int32)
// 0x00000499 System.Boolean Unity.Barracuda.ITensorData::ScheduleAsyncDownload(System.Int32)
// 0x0000049A System.Single[] Unity.Barracuda.ITensorData::Download(Unity.Barracuda.TensorShape)
// 0x0000049B System.Single[] Unity.Barracuda.ITensorData::SharedAccess(System.Int32&)
// 0x0000049C System.Int32 Unity.Barracuda.ITensorData::get_maxCapacity()
// 0x0000049D Unity.Jobs.JobHandle Unity.Barracuda.IDependableTensorData::get_fence()
// 0x0000049E System.Int32 Unity.Barracuda.RecurrentState::InferBatchSize(System.Int32,System.Int32,System.String)
extern void RecurrentState_InferBatchSize_m34088E234C02683197FDB6E58B9734326AAB53B2 ();
// 0x0000049F System.Void Unity.Barracuda.RecurrentState::.ctor(Unity.Barracuda.Model,System.Int32,System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>)
extern void RecurrentState__ctor_m7D51D5FF907387D80ABD5BC9746B0528AE0B6690 ();
// 0x000004A0 System.Void Unity.Barracuda.RecurrentState::Finalize()
extern void RecurrentState_Finalize_mCC2BE0BD79C7B6E3D6EE35F4C65A271EDDC4BF84 ();
// 0x000004A1 System.Void Unity.Barracuda.RecurrentState::Dispose()
extern void RecurrentState_Dispose_m966F4DBC69101799200195576E3540445A2C7031 ();
// 0x000004A2 System.Int32 Unity.Barracuda.RecurrentState::GetBatchSize()
extern void RecurrentState_GetBatchSize_mD7179408DFB699002482D146596551BFE575CF57 ();
// 0x000004A3 System.Void Unity.Barracuda.RecurrentState::BeforeExecution(Unity.Barracuda.IWorker)
extern void RecurrentState_BeforeExecution_mC44BA8F68218F431EDA08D06A3C35C704A7B1AF8 ();
// 0x000004A4 System.Void Unity.Barracuda.RecurrentState::AfterExecution(Unity.Barracuda.IWorker)
extern void RecurrentState_AfterExecution_m55BBC33E093557CE8C4B8B6B1194C471CBFABFB8 ();
// 0x000004A5 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean,Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.CompareOpsUtils_LogLevel)
extern void WorkerFactory_CreateWorker_m09AD7713E2302335DFE56D345D6A329207286166 ();
// 0x000004A6 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory_WorkerConfiguration)
extern void WorkerFactory_CreateWorker_mC833596886E3877A1AA82B0577525DCFBC9CB20A ();
// 0x000004A7 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void WorkerFactory_CreateWorker_mB889C06662D4A43B029066BDA1AE16DB5893916D ();
// 0x000004A8 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateWorker_m70AC5BF55992CBA48E58F8AD192A938C68163412 ();
// 0x000004A9 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.Boolean)
extern void WorkerFactory_CreateWorker_m5B90B3DE28FEFBAC55AC35E127F378C6F85F43F7 ();
// 0x000004AA Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.String[],System.String[],System.Boolean)
extern void WorkerFactory_CreateWorker_m25FBD1B16ABB9BA31173AA1C1F06CC7C6EB4048C ();
// 0x000004AB Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,System.Boolean,Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.CompareOpsUtils_LogLevel)
extern void WorkerFactory_CreateWorker_mCD91A6662B6C9F06926DD8F320FDB50E05441E91 ();
// 0x000004AC Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory_WorkerConfiguration)
extern void WorkerFactory_CreateWorker_m467D98343D1C1734A28882C5C8856B20657754F3 ();
// 0x000004AD Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateWorker_mF8F6A808363F246F77A70C4F3D6EBAFC8C70F137 ();
// 0x000004AE Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void WorkerFactory_CreateWorker_m5B4819BBB1BC17DBDB9A3236877B54B70D72759E ();
// 0x000004AF Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateWorker(Unity.Barracuda.Model,System.String[],Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void WorkerFactory_CreateWorker_m669DE5F7EF5CB91D689A0C04D51AA12F2E21DEA2 ();
// 0x000004B0 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceCPUWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateReferenceCPUWorker_m38040CE3269D215E2A9B2B9051215D942B96372A ();
// 0x000004B1 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateReferenceComputeWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateReferenceComputeWorker_mE3E6BF21D92695185DCBB8F55BDE1F4E93107F39 ();
// 0x000004B2 Unity.Barracuda.IWorker Unity.Barracuda.WorkerFactory::CreateComputeWorker(Unity.Barracuda.Model,System.Boolean)
extern void WorkerFactory_CreateComputeWorker_mCF9C0D7DF7E40451660DECC86F9D3A172DD5C6E1 ();
// 0x000004B3 System.Boolean Unity.Barracuda.WorkerFactory::IsType(Unity.Barracuda.WorkerFactory_Type,Unity.Barracuda.WorkerFactory_Device)
extern void WorkerFactory_IsType_m8F8688DECBD92302749359A72EB814D31E25B40E ();
// 0x000004B4 Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.WorkerFactory::GetBestTypeForDevice(Unity.Barracuda.WorkerFactory_Device)
extern void WorkerFactory_GetBestTypeForDevice_mECE474337A347A07311E99FD67C9C78762E60B28 ();
// 0x000004B5 Unity.Barracuda.WorkerFactory_Type Unity.Barracuda.WorkerFactory::ValidateType(Unity.Barracuda.WorkerFactory_Type)
extern void WorkerFactory_ValidateType_m3D9C07E4F47D53CFA0DBE83591B9CFD0913899C8 ();
// 0x000004B6 System.Void Unity.Barracuda.WorkerFactory::.ctor()
extern void WorkerFactory__ctor_m3203619B4166E69246AB5EC0E1C0E74CA0EDED9A ();
// 0x000004B7 System.Boolean Unity.Barracuda.WaitForCompletion::get_keepWaiting()
extern void WaitForCompletion_get_keepWaiting_m383F96A9D64B27E4BA7788CF20D91FD29BF601F6 ();
// 0x000004B8 System.Void Unity.Barracuda.WaitForCompletion::.ctor(Unity.Barracuda.Tensor)
extern void WaitForCompletion__ctor_mC085295D00EDD1F60CAB8A1F364518600C2AF227 ();
// 0x000004B9 Unity.Barracuda.IWorker Unity.Barracuda.ModelExtensions::CreateWorker(Unity.Barracuda.Model,Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void ModelExtensions_CreateWorker_m2075EB87C786D24E059FCEF332909F73913249B9 ();
// 0x000004BA Unity.Barracuda.IWorker Unity.Barracuda.ModelExtensions::CreateWorker(Unity.Barracuda.Model,System.String[],System.String[],Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void ModelExtensions_CreateWorker_m550953AC197921EA4B627C202D1C8746185FFA6F ();
// 0x000004BB Unity.Barracuda.IWorker Unity.Barracuda.NNModelExtensions::CreateWorker(Unity.Barracuda.NNModel,Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void NNModelExtensions_CreateWorker_m2F39911618B3D908FD334F8D721D543C51F33313 ();
// 0x000004BC Unity.Barracuda.IWorker Unity.Barracuda.NNModelExtensions::CreateWorker(Unity.Barracuda.NNModel,System.String[],System.String[],Unity.Barracuda.WorkerFactory_Device,System.Boolean)
extern void NNModelExtensions_CreateWorker_m0AC12C1B4510D18BB50446D7F0F92F267A697DCB ();
// 0x000004BD System.Void Unity.Barracuda.D::LogWarning(System.Object)
extern void D_LogWarning_mA1462B31DA2A11C9DA4B368656672B52EE716AAF ();
// 0x000004BE System.Void Unity.Barracuda.D::LogWarning(System.Object,UnityEngine.Object)
extern void D_LogWarning_mFE10AE2D8CA0E12170C00C5777F45387F1AB5EC1 ();
// 0x000004BF System.Void Unity.Barracuda.D::LogError(System.Object)
extern void D_LogError_m05EC3442E8D537E08CEC54E32AA538515ECFBF50 ();
// 0x000004C0 System.Void Unity.Barracuda.D::LogError(System.Object,UnityEngine.Object)
extern void D_LogError_mC0E0B4376594F7717583F05FB2EC214C9407E3FF ();
// 0x000004C1 System.Void Unity.Barracuda.D::Log(System.Object)
extern void D_Log_m11CF5B44ED543120ACD1C62CDE6C9C2CC8C497BC ();
// 0x000004C2 System.Void Unity.Barracuda.D::Log(System.Object,UnityEngine.Object)
extern void D_Log_mA2912DA987969E3FD73ABECE1459EB2609ED0487 ();
// 0x000004C3 System.Void Unity.Barracuda.D::.ctor()
extern void D__ctor_m74A02E52FD74A8C7B96368E1FD2D8294EC8ADE7F ();
// 0x000004C4 System.Void Unity.Barracuda.D::.cctor()
extern void D__cctor_mD4656A07BDC06CB9BAEA2CC57C9827900F1E0ECE ();
// 0x000004C5 System.Void Unity.Barracuda.Debug::.ctor()
extern void Debug__ctor_m3B4030B2025616B75ACAB92379A50E321BBCFF61 ();
// 0x000004C6 System.Void Unity.Barracuda.NNModel::.ctor()
extern void NNModel__ctor_m5338157422C1080B85F5A8BA287971963C2FBF20 ();
// 0x000004C7 System.Void Unity.Barracuda.NNModelData::.ctor()
extern void NNModelData__ctor_m4AEF6A6827168A5358E34A427C51FD32A9D5EBC2 ();
// 0x000004C8 System.Boolean Unity.Barracuda.StringStringPair::Equals(Unity.Barracuda.StringStringPair)
extern void StringStringPair_Equals_m22E0E525ABA1D123200B0B0FFEA021D75188F6B1_AdjustorThunk ();
// 0x000004C9 System.Boolean Unity.Barracuda.StringStringPair::Equals(System.Object)
extern void StringStringPair_Equals_mB0F07D01F42984D1344AAD802393DF0C69EE4603_AdjustorThunk ();
// 0x000004CA System.Int32 Unity.Barracuda.StringStringPair::GetHashCode()
extern void StringStringPair_GetHashCode_m236BB8939E59203E355506C775F4205BC98B012E_AdjustorThunk ();
// 0x000004CB System.Int32 Unity.Barracuda.StringStringLongTriplet::GetHashCode()
extern void StringStringLongTriplet_GetHashCode_mFCC3D3D3F7179C539A9872DBA13430B9F29D8F7A_AdjustorThunk ();
// 0x000004CC System.Boolean Unity.Barracuda.StringStringLongTriplet::Equals(Unity.Barracuda.StringStringLongTriplet)
extern void StringStringLongTriplet_Equals_mEB32F0FF2ACB6FFF56BB1BC1D66B762881418B90_AdjustorThunk ();
// 0x000004CD System.Boolean Unity.Barracuda.StringStringLongTriplet::Equals(System.Object)
extern void StringStringLongTriplet_Equals_m21C23079D2FF54A85CA941F45748D64F078DA72B_AdjustorThunk ();
// 0x000004CE System.String Unity.Barracuda.StringCache::Lookup(System.String,System.String)
extern void StringCache_Lookup_m3DA5C5F7983EC9725BABAC962ABB20066C51E78F ();
// 0x000004CF System.String Unity.Barracuda.StringCache::Lookup(System.String,System.String,System.Int64)
extern void StringCache_Lookup_mF98E0A3BC547F702D2BD0A38344FD8B340120620 ();
// 0x000004D0 System.Void Unity.Barracuda.StringCache::Clear()
extern void StringCache_Clear_m96E67928189FE6FEFCAFED0B12A1631C2E420296 ();
// 0x000004D1 System.Void Unity.Barracuda.StringCache::.ctor()
extern void StringCache__ctor_m1990C4F3DDDDE6AB1C5C3827FC6A3111103D6778 ();
// 0x000004D2 System.Void Unity.Barracuda.TestSet::.ctor(Unity.Barracuda.RawTestSet)
extern void TestSet__ctor_m73139331BEC5BCC9BFD368C70A3A3A2CD715D09C ();
// 0x000004D3 System.Void Unity.Barracuda.TestSet::.ctor(Unity.Barracuda.JSONTestSet)
extern void TestSet__ctor_m259E2AAFC6468F96709E0433CA1B7153BA209D3C ();
// 0x000004D4 System.Void Unity.Barracuda.TestSet::.ctor()
extern void TestSet__ctor_m62CDD2D141936D27AD688E51981F0AC65F61AC44 ();
// 0x000004D5 System.Boolean Unity.Barracuda.TestSet::SupportsNames()
extern void TestSet_SupportsNames_mCF991EBBE6323A3577C5247EA2804C7DF74377E3 ();
// 0x000004D6 System.Int32 Unity.Barracuda.TestSet::GetOutputCount()
extern void TestSet_GetOutputCount_m8A16AE52D470B68BDF442DBECBDB1ED81CC3C423 ();
// 0x000004D7 System.Single[] Unity.Barracuda.TestSet::GetOutputData(System.Int32)
extern void TestSet_GetOutputData_m2D3AC0C6B796A432F4A8E2E53794B3CD62C60901 ();
// 0x000004D8 System.String Unity.Barracuda.TestSet::GetOutputName(System.Int32)
extern void TestSet_GetOutputName_m28828748C43040A2E945367995EA8732CB18AE81 ();
// 0x000004D9 System.Int32 Unity.Barracuda.TestSet::GetInputCount()
extern void TestSet_GetInputCount_mB40FFEACEB0CCC94BB058E95F7A56E39A33FE12A ();
// 0x000004DA System.String Unity.Barracuda.TestSet::GetInputName(System.Int32)
extern void TestSet_GetInputName_m42D10EBB63A1A5DE252A36D3E6FBAA5926B511CC ();
// 0x000004DB System.Single[] Unity.Barracuda.TestSet::GetInputData(System.Int32)
extern void TestSet_GetInputData_m1B352DDFB44E0DF22380CD77124A39DA7FFC6DD7 ();
// 0x000004DC System.Int32[] Unity.Barracuda.TestSet::GetInputShape(System.Int32)
extern void TestSet_GetInputShape_m690F171B89BB3339E1FD160A93E4DC32AD8F932F ();
// 0x000004DD System.Int32[] Unity.Barracuda.TestSet::GetOutputShape(System.Int32)
extern void TestSet_GetOutputShape_m70A3E5995E71AB9ACF38B0AAC7DD1EFB2D0BE06A ();
// 0x000004DE System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor> Unity.Barracuda.TestSet::GetInputsAsTensorDictionary(System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Int32,System.Int32)
extern void TestSet_GetInputsAsTensorDictionary_m8BED32DFEEA0689E9C416F33365FFCCC3D7CBFAF ();
// 0x000004DF System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor> Unity.Barracuda.TestSet::GetOutputsAsTensorDictionary(System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Tensor>,System.Int32,System.Int32)
extern void TestSet_GetOutputsAsTensorDictionary_m4CB1677BEAD41956CD89A58BB2717857A13C183D ();
// 0x000004E0 Unity.Barracuda.Tensor Unity.Barracuda.TestSet::GetInputAsTensor(System.Int32,System.Int32,System.Int32)
extern void TestSet_GetInputAsTensor_mFED697E063BDC5EE075F07CBF8611B145BEF973E ();
// 0x000004E1 Unity.Barracuda.Tensor Unity.Barracuda.TestSet::GetOutputAsTensor(System.Int32,System.Int32,System.Int32)
extern void TestSet_GetOutputAsTensor_m762D483A5A8478327967B1589153A1A25756B53D ();
// 0x000004E2 System.Void Unity.Barracuda.RawTestSet::.ctor()
extern void RawTestSet__ctor_m8D3038EA922A2BB6120A18C3FC3A327E64E1F6D5 ();
// 0x000004E3 System.Void Unity.Barracuda.JSONTestSet::.ctor()
extern void JSONTestSet__ctor_mC882D97AE86C23B0E1B0B075D4E504FC75A1D23D ();
// 0x000004E4 System.Void Unity.Barracuda.JSONTensorShape::.ctor()
extern void JSONTensorShape__ctor_m119D08A2FA93B7F778614E6065A1FF8E0163CF53 ();
// 0x000004E5 System.Void Unity.Barracuda.JSONTensor::.ctor()
extern void JSONTensor__ctor_m99BA5B2F4618CE8E29D740B428FA16507695C94D ();
// 0x000004E6 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::Load(System.String)
extern void TestSetLoader_Load_m03CC2D4EA15F8F4629D85834C0B184E1AA6D9A6A ();
// 0x000004E7 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadJSON(System.String)
extern void TestSetLoader_LoadJSON_m984F4CAD6C328B7F08B45B7B35A51EBD97C37E40 ();
// 0x000004E8 Unity.Barracuda.TestSet Unity.Barracuda.TestSetLoader::LoadRaw(System.String)
extern void TestSetLoader_LoadRaw_mED4A00FF2763DD53C56C4CEBC9B199DFB13A4993 ();
// 0x000004E9 UnityEngine.Texture Unity.Barracuda.TestSetLoader::LoadImage(System.String)
extern void TestSetLoader_LoadImage_m4493BD0BF8368A1B4B5E50A2CD7476F76F3C6C77 ();
// 0x000004EA System.Single[] Unity.Barracuda.TestSetLoader::LoadFloatArray(System.IO.BinaryReader)
extern void TestSetLoader_LoadFloatArray_mEA24CBF6262EF4E5800CB6F7ACD7761B9CF12D4E ();
// 0x000004EB System.IO.BinaryReader Unity.Barracuda.TestSetLoader::Open(System.String)
extern void TestSetLoader_Open_m6B96FBDDEA23CF1FAFFE7C2DACEB851C1D51B6C9 ();
// 0x000004EC System.Void Unity.Barracuda.TestSetLoader::.ctor()
extern void TestSetLoader__ctor_mBE544C19630A4F886086753B9AF594300E7D81F7 ();
// 0x000004ED System.Void Unity.Barracuda.Layer::.ctor(System.String)
extern void Layer__ctor_m957463F7485979F1A4303CDF6567726F372473B8 ();
// 0x000004EE System.Void Unity.Barracuda.Layer::.ctor(System.String,Unity.Barracuda.Layer_Type,Unity.Barracuda.Layer_Activation)
extern void Layer__ctor_m0C35CA580C8673A271835637DA402EAFAD998FE9 ();
// 0x000004EF System.Void Unity.Barracuda.Layer::.ctor(System.String,Unity.Barracuda.Layer_Activation)
extern void Layer__ctor_mD6126A6E72F8AF737235767C4CF4F8A75616FD38 ();
// 0x000004F0 System.String Unity.Barracuda.Layer::ToString()
extern void Layer_ToString_mCC4C66126907C2E4D0C7B7750F403AFA4FE31503 ();
// 0x000004F1 System.Collections.Generic.List`1<Unity.Barracuda.Model_ImporterWarning> Unity.Barracuda.Model::get_Warnings()
extern void Model_get_Warnings_mC7B738A80CEB78C9134BDB6B95BE69BA6968BFE3 ();
// 0x000004F2 Unity.Barracuda.Model Unity.Barracuda.Model::ShallowCopy()
extern void Model_ShallowCopy_m2E1ED78A4AE63662DE6A374E24627727EFA9D499 ();
// 0x000004F3 System.String Unity.Barracuda.Model::ToString()
extern void Model_ToString_m25203953049C5B9E3F32EB8BA7D294A95B9436C5 ();
// 0x000004F4 System.Void Unity.Barracuda.Model::.ctor()
extern void Model__ctor_mE7DB62160720315A40D6DA84BCF71B22FCFE7CAF ();
// 0x000004F5 Unity.Barracuda.Tensor Unity.Barracuda.ModelMetadataExtensions::GetTensorByName(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetTensorByName_mF06304C93A3265CF3062B7C21F83912E84A6E465 ();
// 0x000004F6 System.Nullable`1<Unity.Barracuda.TensorShape> Unity.Barracuda.ModelMetadataExtensions::GetShapeByName(Unity.Barracuda.Model,System.String)
extern void ModelMetadataExtensions_GetShapeByName_m222A6C35744DB2EAFCA94B4099821015DB548525 ();
// 0x000004F7 Unity.Barracuda.Model Unity.Barracuda.ModelBuilder::get_model()
extern void ModelBuilder_get_model_m5EBF1CD4BD24FFDE2602FF07AF1CC08127332C2C ();
// 0x000004F8 System.Void Unity.Barracuda.ModelBuilder::.ctor(Unity.Barracuda.Model)
extern void ModelBuilder__ctor_mF4EE844F9B8BE39EDEDE71F5340626A957DEDF60 ();
// 0x000004F9 Unity.Barracuda.Model_Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32[])
extern void ModelBuilder_Input_mA032E660B8028813D48B9959BA899C028DA72096 ();
// 0x000004FA Unity.Barracuda.Model_Input Unity.Barracuda.ModelBuilder::Input(System.String,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Input_mC288A9C2E774C54B071DACEF42EF3ACB651DEF54 ();
// 0x000004FB Unity.Barracuda.Model_Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32,System.Int32)
extern void ModelBuilder_Input_m103742E658E0D6543D7CB38BB9AE432E741C7D28 ();
// 0x000004FC Unity.Barracuda.Model_Input Unity.Barracuda.ModelBuilder::Input(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern void ModelBuilder_Input_m67A5119CC29BC352D83181DDD64EE2D8C6C9D84E ();
// 0x000004FD System.String Unity.Barracuda.ModelBuilder::Output(System.Object)
extern void ModelBuilder_Output_mAE89783C2800ABC157DD80F8B2BA2FFA6F976176 ();
// 0x000004FE Unity.Barracuda.Model_Memory Unity.Barracuda.ModelBuilder::Memory(System.Object,System.Object,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Memory_m78755CD28E66C2D4EAEF7190559EC3CF3500F6E1 ();
// 0x000004FF System.String Unity.Barracuda.ModelBuilder::ResolveInput(System.Object)
extern void ModelBuilder_ResolveInput_mA0595F1F0F77DBDB58D6894A7E90B1B4356600A9 ();
// 0x00000500 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Const(System.String,Unity.Barracuda.Tensor,System.Int32)
extern void ModelBuilder_Const_m407EE4204FFC2336DA5A8168E4C76939D225C516 ();
// 0x00000501 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::ScaleBias(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_ScaleBias_mEF8005F72B9723D4B710B07486830FFC33857C41 ();
// 0x00000502 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LRN(System.String,System.Object,System.Single,System.Single,System.Single,System.Int32)
extern void ModelBuilder_LRN_m076F4BE295A682A2738F2C98955C1920584039AB ();
// 0x00000503 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Normalization(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single)
extern void ModelBuilder_Normalization_m4D490B6F8B411995A4F6E65C477291CD1B91FB80 ();
// 0x00000504 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Dense(System.String,System.Object,Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Dense_m0504D4E99D3E7CF97A71E64A7DA7DB699320C835 ();
// 0x00000505 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv(System.String,Unity.Barracuda.Layer_Type,System.Object,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv_mA6DF99779F07CA8D01492D4038F75162540793A2 ();
// 0x00000506 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv2D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv2D_mEE1E5FCBC1597123F8808CC634279ED3E3CC6717 ();
// 0x00000507 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::DepthwiseConv2D(System.String,System.Object,System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_DepthwiseConv2D_mEC0927053168AA61F4512FD1A9C87249C6D05C15 ();
// 0x00000508 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Conv2DTrans(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[],Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void ModelBuilder_Conv2DTrans_m65AC9ABA8534300420BC726A025749C7C624DD75 ();
// 0x00000509 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pool(Unity.Barracuda.Layer_Type,System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_Pool_m1570C68CB071A39A45A44CABE79CC92E618883D0 ();
// 0x0000050A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::AvgPool2D(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_AvgPool2D_m3E18A63B70B7D5EB07B5738FE9E894C2F1579A55 ();
// 0x0000050B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::MaxPool2D(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_MaxPool2D_m847085CA914A09F3C41EFCB39894D122C17D11CB ();
// 0x0000050C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GlobalAvgPool2D(System.String,System.Object)
extern void ModelBuilder_GlobalAvgPool2D_mD4F9E32E4C84288A15EBB499CCE7AF6167D9EE4D ();
// 0x0000050D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GlobalMaxPool2D(System.String,System.Object)
extern void ModelBuilder_GlobalMaxPool2D_mFEE37A470FAFA41DA229DF884B49845435689789 ();
// 0x0000050E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample2D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Upsample2D_m6D226D5057FB7F92D820B728FE58649EB679D1CF ();
// 0x0000050F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Upsample2D(System.String,System.Object,System.Object,System.Boolean)
extern void ModelBuilder_Upsample2D_m8C98F245E4F33803C67DAF815A863D3060350767 ();
// 0x00000510 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Resample2D(System.String,System.Object,System.Int32[],System.Boolean)
extern void ModelBuilder_Resample2D_m0E7EA8B219A66221D0A20A222625E4E49E02BDDA ();
// 0x00000511 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::DepthToSpace(System.String,System.Object,System.Int32,System.String)
extern void ModelBuilder_DepthToSpace_m1A2CF707E22C5DD367A53DF6B060372B58FDC897 ();
// 0x00000512 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::SpaceToDepth(System.String,System.Object,System.Int32)
extern void ModelBuilder_SpaceToDepth_mA5AE18538F28911E0415391019681D72D829721E ();
// 0x00000513 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Reshape_m093B78877A0961B961AC652D9B7D84E8DAF56E73 ();
// 0x00000514 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,Unity.Barracuda.TensorShape)
extern void ModelBuilder_Reshape_m1EA2FC96AD3D8A5051BCDCDA4CB42F2FBCA28B67 ();
// 0x00000515 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reshape(System.String,System.Object,System.Object)
extern void ModelBuilder_Reshape_m7CD923FDE16452625C8E6194BFA4463D08DE5410 ();
// 0x00000516 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Expand(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Expand_mADD55C852754A57D28332B65EED01CD567D65A2C ();
// 0x00000517 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Flatten(System.String,System.Object)
extern void ModelBuilder_Flatten_m3A4D2AA9F9391E61CF9677C701A3030DCF247108 ();
// 0x00000518 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Concat(System.String,System.Object[],System.Int32)
extern void ModelBuilder_Concat_mE55D778241A6172BA01C25E445B47B15CF04339B ();
// 0x00000519 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::StridedSlice(System.String,System.Object,System.Int32[],System.Int32[],System.Int32[])
extern void ModelBuilder_StridedSlice_m9BA4663BD33A2E5622C0F393199D3F8687E43FFA ();
// 0x0000051A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::OneHot(System.String,System.Object,System.Int32,System.Int32,System.Int32)
extern void ModelBuilder_OneHot_m7550923BC2D3C8BA70288DABD802ADCCFF347598 ();
// 0x0000051B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Activation(Unity.Barracuda.Layer_Activation,System.String,System.Object)
extern void ModelBuilder_Activation_mEF7DD20109A32C3777E6CE8D7EA3657D8247E5F0 ();
// 0x0000051C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Identity(System.String,System.Object)
extern void ModelBuilder_Identity_m32FC2BF832EB7825820CA86E9AE0E13C9C1727E9 ();
// 0x0000051D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Relu(System.String,System.Object)
extern void ModelBuilder_Relu_m7468573B51E40451607E43DCC82089F9309076A4 ();
// 0x0000051E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Softmax(System.String,System.Object)
extern void ModelBuilder_Softmax_m85A1F028885505F6F854D8E278DFE51FED8A1879 ();
// 0x0000051F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogSoftmax(System.String,System.Object)
extern void ModelBuilder_LogSoftmax_m6CC35D122D1E715E3BB351960EF349BB05A10CE0 ();
// 0x00000520 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sqrt(System.String,System.Object)
extern void ModelBuilder_Sqrt_mDFFC786EF1637A634C9027DB303883F7572F612D ();
// 0x00000521 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Tanh(System.String,System.Object)
extern void ModelBuilder_Tanh_m401D4EB6497D8B10CD13DBC17305F2135F9EF588 ();
// 0x00000522 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sigmoid(System.String,System.Object)
extern void ModelBuilder_Sigmoid_m6B4595C0E5DFF3F0D5E9A9AEA3476CCF9C6860C2 ();
// 0x00000523 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Elu(System.String,System.Object,System.Single)
extern void ModelBuilder_Elu_m5E500D1E3EA95388E227F9448C7129795896787E ();
// 0x00000524 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Relu6(System.String,System.Object)
extern void ModelBuilder_Relu6_mB69087212E5F7E2991740E1123EFFF92888F1759 ();
// 0x00000525 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LeakyRelu(System.String,System.Object,System.Single)
extern void ModelBuilder_LeakyRelu_m1FE102C8B8D6596D33FE167FA9903BBF83227639 ();
// 0x00000526 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Selu(System.String,System.Object,System.Single,System.Single)
extern void ModelBuilder_Selu_mD0A5F8CC804CCD835526FC36AAD4C77A3F831981 ();
// 0x00000527 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::PRelu(System.String,System.Object,System.Object)
extern void ModelBuilder_PRelu_mB236DA191386FFD69BE87DEEA6A34B55627F6B69 ();
// 0x00000528 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Swish(System.String,System.Object)
extern void ModelBuilder_Swish_m6F23CCA3A601C975BB610A94D937224FC8E44FCB ();
// 0x00000529 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Clip(System.String,System.Object,System.Single,System.Single)
extern void ModelBuilder_Clip_m17861DE7363E98667685ACD220B92FA8422BC525 ();
// 0x0000052A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Exp(System.String,System.Object)
extern void ModelBuilder_Exp_mF018D7C25156DE90162D7A0A79D542BF7FA328D9 ();
// 0x0000052B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Log(System.String,System.Object)
extern void ModelBuilder_Log_mE4A293681F46B8D6F6F52FBA971C75C303D96EE0 ();
// 0x0000052C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Neg(System.String,System.Object)
extern void ModelBuilder_Neg_m0371D8E20628F1722018EFF8D9AE044E24BAF3AE ();
// 0x0000052D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reciprocal(System.String,System.Object)
extern void ModelBuilder_Reciprocal_mC7FFF3CB9A7147D8B9ECF6513913785C07C2BA05 ();
// 0x0000052E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Abs(System.String,System.Object)
extern void ModelBuilder_Abs_m2E2E3BBC9F34273A3A464FF16CB4EFFA96A142BC ();
// 0x0000052F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Ceil(System.String,System.Object)
extern void ModelBuilder_Ceil_mE9AB23A37A1DBDFFFE1476B08C28AC400BE5DB26 ();
// 0x00000530 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Floor(System.String,System.Object)
extern void ModelBuilder_Floor_m56988847D5DE0633A7A5A6CD790775903A0F0535 ();
// 0x00000531 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Round(System.String,System.Object)
extern void ModelBuilder_Round_m96B6E07278AAB972E30D8A22295046855D65A38C ();
// 0x00000532 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Broadcast(Unity.Barracuda.Layer_Type,System.String,System.Object[])
extern void ModelBuilder_Broadcast_mDD7D56873FDBDBF81433F76EDFA242674AD30F7C ();
// 0x00000533 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Add(System.String,System.Object[])
extern void ModelBuilder_Add_mE769F11A14149A38793DB9BD4F6B7A6C0A457F91 ();
// 0x00000534 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Sub(System.String,System.Object[])
extern void ModelBuilder_Sub_mF60B7FC61141CC79752707787A4633E6F92F1215 ();
// 0x00000535 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Mul(System.String,System.Object[])
extern void ModelBuilder_Mul_m0786D094487BE3050EA3A721D47361261271C02A ();
// 0x00000536 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Div(System.String,System.Object[])
extern void ModelBuilder_Div_m1E483FD46C8D5FF266060941D79A194ED22D3E36 ();
// 0x00000537 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pow(System.String,System.Object[])
extern void ModelBuilder_Pow_mCC128C9485EC22751C519D371288FED5751758FA ();
// 0x00000538 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Min(System.String,System.Object[])
extern void ModelBuilder_Min_mA388F18C836B55B43EBC733E0AE347C60A87DE35 ();
// 0x00000539 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Max(System.String,System.Object[])
extern void ModelBuilder_Max_m7B33EED82528CD9ACC4CC39146B880A6818B0C09 ();
// 0x0000053A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Mean(System.String,System.Object[])
extern void ModelBuilder_Mean_mC24CAACA2DA2078621AE2BA38D080D0E30F2839F ();
// 0x0000053B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Greater(System.String,System.Object,System.Object)
extern void ModelBuilder_Greater_m828380061A6122FE5B792EC0B87277DD50A1F672 ();
// 0x0000053C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::GreaterEqual(System.String,System.Object,System.Object)
extern void ModelBuilder_GreaterEqual_m51B863FE76B43477B28BEDF526FF07FE1D16FCDC ();
// 0x0000053D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Less(System.String,System.Object,System.Object)
extern void ModelBuilder_Less_m27C07092CEB53102B2CD1EE9AB01164CC1D5DA15 ();
// 0x0000053E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LessEqual(System.String,System.Object,System.Object)
extern void ModelBuilder_LessEqual_mF7DA8162102CC453A57A404C45283D5C65B1A72B ();
// 0x0000053F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Equal(System.String,System.Object,System.Object)
extern void ModelBuilder_Equal_m0402C5702B20655739CDBEB35F83CCCBFDD94641 ();
// 0x00000540 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalAnd(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalAnd_mA5622054E5D4F30BB710020E85F438E4FAC6863F ();
// 0x00000541 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalOr(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalOr_m1D8C73816E89A8BF1A02E4236026CF5D91996042 ();
// 0x00000542 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalXor(System.String,System.Object,System.Object)
extern void ModelBuilder_LogicalXor_m380E8E0491CCC9FDDAC466E1DF72C0D2B28D44BA ();
// 0x00000543 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::LogicalNot(System.String,System.Object)
extern void ModelBuilder_LogicalNot_m7A6AFBE864F31D8C85404A43B9BC15CE122AC08A ();
// 0x00000544 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad(Unity.Barracuda.Layer_Type,System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Pad_mB425700CC8EA1C4197462671483A657ECA3642A1 ();
// 0x00000545 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Border2D(System.String,System.Object,System.Int32[],System.Single)
extern void ModelBuilder_Border2D_m5D5695B4F559AF37876A0D9CC612BBCE5D085130 ();
// 0x00000546 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2DEdge(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2DEdge_m68F25D99D0CD9BA700BF1B370EDA1F58E09A96CF ();
// 0x00000547 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2DReflect(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2DReflect_mAB74A4E5A6B12B08C4AED04D9654F4C265B3DEEC ();
// 0x00000548 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Pad2Symmetric(System.String,System.Object,System.Int32[])
extern void ModelBuilder_Pad2Symmetric_mDAAD7317F24338AAF7448FD10E8E107E14AA1D2F ();
// 0x00000549 Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomNormal(System.String,System.Object,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomNormal_mCC455688FCAF45ECC72BC3C825AD3E0B90DF5033 ();
// 0x0000054A Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomNormal(System.String,Unity.Barracuda.TensorShape,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomNormal_mD98E97A40E51CA28EDA8FB79D5E79B0E192FEBA6 ();
// 0x0000054B Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomUniform(System.String,System.Object,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomUniform_mFA72F011D1E3907FED8B173312A8264B0198DFBE ();
// 0x0000054C Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::RandomUniform(System.String,Unity.Barracuda.TensorShape,System.Single,System.Single,System.Single)
extern void ModelBuilder_RandomUniform_m23D5F72C238C7EDB7D886DE5AB471A96FDFE437D ();
// 0x0000054D Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Multinomial(System.String,System.Object,System.Int32,System.Single)
extern void ModelBuilder_Multinomial_mE53C1F6389EBAEB808E8F95903F42EE253198C83 ();
// 0x0000054E Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Reduce(Unity.Barracuda.Layer_Type,System.String,System.Object,System.Int32)
extern void ModelBuilder_Reduce_m21A98FABAD4B77E69DD1A9770CB8137064584B28 ();
// 0x0000054F Unity.Barracuda.Layer Unity.Barracuda.ModelBuilder::Gather(System.String,System.Object,System.Object,System.Int32)
extern void ModelBuilder_Gather_mF3E8191417FF39358FDD3A02CAB50386497AA669 ();
// 0x00000550 System.String Unity.Barracuda.ModelBuilder::<Concat>b__35_0(System.Object)
extern void ModelBuilder_U3CConcatU3Eb__35_0_m082DD4CBC90E6432C8FC55D17977A5C9A4AE5F3A ();
// 0x00000551 System.String Unity.Barracuda.ModelBuilder::<PRelu>b__50_0(System.Object)
extern void ModelBuilder_U3CPReluU3Eb__50_0_m2F38CD90EC01C0626DCA441509EB52187C438B38 ();
// 0x00000552 System.String Unity.Barracuda.ModelBuilder::<Broadcast>b__61_0(System.Object)
extern void ModelBuilder_U3CBroadcastU3Eb__61_0_m47A805FD887C245D61372B9191DEBC9EBD53A420 ();
// 0x00000553 System.String Unity.Barracuda.ModelBuilder::<Gather>b__90_0(System.Object)
extern void ModelBuilder_U3CGatherU3Eb__90_0_mF222A3DDBAA3BD3D3692E41AA820B103C61A62F3 ();
// 0x00000554 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(Unity.Barracuda.NNModel,System.Boolean,System.Boolean)
extern void ModelLoader_Load_mDF489DC2D576B3231D525B35DC2022A920736C98 ();
// 0x00000555 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::LoadFromStreamingAssets(System.String,System.Boolean,System.Boolean)
extern void ModelLoader_LoadFromStreamingAssets_m3B20F0D660B7FDE47FE76921159BEE931428B04D ();
// 0x00000556 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.String,System.Boolean,System.Boolean)
extern void ModelLoader_Load_mD4006628659FAE053BE0C141C93D03DAC2DF669C ();
// 0x00000557 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.Byte[],System.Boolean,System.Boolean)
extern void ModelLoader_Load_m9B489DAB1F355726DB6DA0EC18226472B9DE096C ();
// 0x00000558 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.Byte[],System.Boolean,System.Boolean,System.Boolean)
extern void ModelLoader_Load_m58F36351DF3889EA6F7DCDB3EB940C2330082202 ();
// 0x00000559 Unity.Barracuda.Model Unity.Barracuda.ModelLoader::Load(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Boolean)
extern void ModelLoader_Load_mE31EBC1E45014D1E6E7A33BC16008EAA358CA483 ();
// 0x0000055A System.Void Unity.Barracuda.ModelLoader::PatchLayer(System.Collections.Generic.List`1<Unity.Barracuda.Layer>,Unity.Barracuda.Layer)
extern void ModelLoader_PatchLayer_mAB45150E5ECD6CBFE0B81A494DE632F40FD9CE78 ();
// 0x0000055B System.Int32[] Unity.Barracuda.ModelLoader::ReadInt32Array(System.IO.BinaryReader)
extern void ModelLoader_ReadInt32Array_m58A0D9C0017D192849E4CBD9996B7C471ABB2C07 ();
// 0x0000055C System.String Unity.Barracuda.ModelLoader::ReadString(System.IO.BinaryReader)
extern void ModelLoader_ReadString_m8D37A10ADE128F9FAEFE1BF5CED5FB0ABD31D706 ();
// 0x0000055D System.String[] Unity.Barracuda.ModelLoader::ReadStringArray(System.IO.BinaryReader)
extern void ModelLoader_ReadStringArray_mCD34539D3287565F28853EDF7D75F9AF528A5A5B ();
// 0x0000055E System.IO.BinaryReader Unity.Barracuda.ModelLoader::Open(System.String)
extern void ModelLoader_Open_m8B580C2510487B48B86BE95F8B5FE758469F6765 ();
// 0x0000055F System.IO.BinaryReader Unity.Barracuda.ModelLoader::Open(System.Byte[])
extern void ModelLoader_Open_mAE7E583BB8FEED507E3B3ABD9137057680E4CE2E ();
// 0x00000560 System.Void Unity.Barracuda.ModelWriter::Save(System.String,Unity.Barracuda.Model,System.Boolean)
extern void ModelWriter_Save_m190651552793EE4597AE0A51D94F69CE8768B703 ();
// 0x00000561 System.Void Unity.Barracuda.ModelWriter::Save(System.IO.BinaryWriter,Unity.Barracuda.Model,System.Boolean)
extern void ModelWriter_Save_m1533E39E2022AF2BF549126509841BAC034FFF18 ();
// 0x00000562 System.Void Unity.Barracuda.ModelWriter::WriteInt32Array(System.IO.BinaryWriter,System.Int32[])
extern void ModelWriter_WriteInt32Array_mFD4C10F5D1E0A631119111351657BC6D1B72D4D5 ();
// 0x00000563 System.Void Unity.Barracuda.ModelWriter::WriteString(System.IO.BinaryWriter,System.String)
extern void ModelWriter_WriteString_m08B6841F5613530E44AD77265DF57C8684A16CD6 ();
// 0x00000564 System.Void Unity.Barracuda.ModelWriter::WriteStringArray(System.IO.BinaryWriter,System.String[])
extern void ModelWriter_WriteStringArray_m0C2D17E82A71FE60D4FBF22D13224C5E28D6180F ();
// 0x00000565 System.Void Unity.Barracuda.ModelWriter::WriteStringArray(System.IO.BinaryWriter,System.Collections.Generic.List`1<System.String>)
extern void ModelWriter_WriteStringArray_mF80F146A80A6405037899FE11895042674C1C623 ();
// 0x00000566 System.Void Unity.Barracuda.ModelWriter::.ctor()
extern void ModelWriter__ctor_mE74D748A8817DC042314166BA84DAA8184CD2333 ();
// 0x00000567 System.Boolean Unity.Barracuda.BLASPlugin::IsNative()
// 0x00000568 System.Boolean Unity.Barracuda.BLASPlugin::IsCurrentPlatformSupported()
// 0x00000569 System.Void Unity.Barracuda.BLASPlugin::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x0000056A Unity.Jobs.JobHandle Unity.Barracuda.BLASPlugin::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
// 0x0000056B Unity.Barracuda.BLASPlugin Unity.Barracuda.BLASPluginFactory::CreateBLASPlugin()
extern void BLASPluginFactory_CreateBLASPlugin_m40A6243267A427DF31A91C4CA9196A0A464F215D ();
// 0x0000056C System.Void Unity.Barracuda.BLASPluginFactory::.ctor()
extern void BLASPluginFactory__ctor_m2D8C1B6F13AE289BC85535DAB8F8755DE50013DE ();
// 0x0000056D System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape__ctor_m126ECFD140866891D66C2E913D48F1FB38E0ADC3_AdjustorThunk ();
// 0x0000056E System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32,System.Int32)
extern void TensorShape__ctor_m07791CB2BAE2B0B736012C35C5698D08778A3DD4_AdjustorThunk ();
// 0x0000056F System.Void Unity.Barracuda.TensorShape::.ctor(System.Int32[])
extern void TensorShape__ctor_mC5CDD8CF7566EDEC57579D1AF14A57F2586242C1_AdjustorThunk ();
// 0x00000570 System.Int32 Unity.Barracuda.TensorShape::get_kernelHeight()
extern void TensorShape_get_kernelHeight_m1235C903239C4CB6BB0F3A8EF798A6F175924B65_AdjustorThunk ();
// 0x00000571 System.Int32 Unity.Barracuda.TensorShape::get_kernelWidth()
extern void TensorShape_get_kernelWidth_m3C9AAD4BAF8891A299481B61B3393665BE76825C_AdjustorThunk ();
// 0x00000572 System.Int32 Unity.Barracuda.TensorShape::get_kernelDepth()
extern void TensorShape_get_kernelDepth_m26D725DF19D2D6ADF2997AA87642258A7224887C_AdjustorThunk ();
// 0x00000573 System.Int32 Unity.Barracuda.TensorShape::get_kernelCount()
extern void TensorShape_get_kernelCount_mD3B5820538EAFE4E6CE03E908DE8BB149E646E21_AdjustorThunk ();
// 0x00000574 System.Int32 Unity.Barracuda.TensorShape::get_flatHeight()
extern void TensorShape_get_flatHeight_m9807DDA1090F6CADDC842B89DF4DB80FE00425CD_AdjustorThunk ();
// 0x00000575 System.Int32 Unity.Barracuda.TensorShape::get_flatWidth()
extern void TensorShape_get_flatWidth_m4D83D4BA0CA4D860F75563A271726BAF1428A043_AdjustorThunk ();
// 0x00000576 System.Int32 Unity.Barracuda.TensorShape::get_length()
extern void TensorShape_get_length_m3254646D887BE50BDC395C94B0821B95D17FBB49_AdjustorThunk ();
// 0x00000577 System.Int32 Unity.Barracuda.TensorShape::get_rank()
extern void TensorShape_get_rank_m45956F2F4AFBA43DA6C05FBF8655007C60A5CDA5_AdjustorThunk ();
// 0x00000578 System.Int32 Unity.Barracuda.TensorShape::get_dimensions()
extern void TensorShape_get_dimensions_m44A4A5D5DD22A63EACDE7761F27DACC19127C782_AdjustorThunk ();
// 0x00000579 System.Int32 Unity.Barracuda.TensorShape::Axis(System.Int32)
extern void TensorShape_Axis_mA5C01C16551954065A667BE84FA30DE42AE2DA10_AdjustorThunk ();
// 0x0000057A System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndex(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndex_mE5C866C657C681DDA9B6258B494754C417805860_AdjustorThunk ();
// 0x0000057B System.Void Unity.Barracuda.TensorShape::GetPositionsFromIndexNCHW(System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern void TensorShape_GetPositionsFromIndexNCHW_m53788681C72DB7EED79256BC131A7AF3CF55234B_AdjustorThunk ();
// 0x0000057C System.Int32 Unity.Barracuda.TensorShape::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithBroadcast_mA0B0B5ADA68C419E54A6BB27B1DDC2515FA35DEB_AdjustorThunk ();
// 0x0000057D System.Int32 Unity.Barracuda.TensorShape::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexWithClamp_mEA115511D0A78424EA0845E5FC5B7D2C795C950B_AdjustorThunk ();
// 0x0000057E System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_Index_mB433AAA3540DE53DB6BC1BF98BAF9AA0EFFC21C0_AdjustorThunk ();
// 0x0000057F System.Int32 Unity.Barracuda.TensorShape::IndexNCHW(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TensorShape_IndexNCHW_m23D44081E8514B4BA3348C565F3832DC1F48C73A_AdjustorThunk ();
// 0x00000580 System.Int32 Unity.Barracuda.TensorShape::Index(System.Int32,System.Int32)
extern void TensorShape_Index_mCDBC71CBC9BEE41F08AA7956E403F93C9FE6CC66_AdjustorThunk ();
// 0x00000581 System.Int32 Unity.Barracuda.TensorShape::get_Item(System.Int32)
extern void TensorShape_get_Item_m767CAA4C2DA33216A89FD4B172FA2330BC0883B0_AdjustorThunk ();
// 0x00000582 System.Void Unity.Barracuda.TensorShape::set_Item(System.Int32,System.Int32)
extern void TensorShape_set_Item_m31AA423BA61AB3E59B4C224AB7573C347106411E_AdjustorThunk ();
// 0x00000583 System.Int32[] Unity.Barracuda.TensorShape::ToArray()
extern void TensorShape_ToArray_m05715825A4570959A1EDEB105EFFA1CC6DD93986_AdjustorThunk ();
// 0x00000584 Unity.Barracuda.TensorShape Unity.Barracuda.TensorShape::Squeeze()
extern void TensorShape_Squeeze_mB7AB4D7D0F6BD939256F99D12920FCC80E0B97C4_AdjustorThunk ();
// 0x00000585 Unity.Barracuda.TensorShape Unity.Barracuda.TensorShape::Flatten()
extern void TensorShape_Flatten_mD03A028CAB6CCC0B7F954BA596E8C79678EC39AD_AdjustorThunk ();
// 0x00000586 System.Boolean Unity.Barracuda.TensorShape::op_Equality(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorShape_op_Equality_m2A085DB7C603A6CB46CA09B15B5BB77556567AFB ();
// 0x00000587 System.Boolean Unity.Barracuda.TensorShape::op_Inequality(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorShape_op_Inequality_m5065CE0A362315ED66FF27533A0CC6792D071068 ();
// 0x00000588 System.Boolean Unity.Barracuda.TensorShape::Equals(System.Object)
extern void TensorShape_Equals_m188E12EF5B55215311887E20C56487454E213E24_AdjustorThunk ();
// 0x00000589 System.Int32 Unity.Barracuda.TensorShape::GetHashCode()
extern void TensorShape_GetHashCode_mF682CEEA6F3B86C52DF40338E7085A49886FA92C_AdjustorThunk ();
// 0x0000058A System.String Unity.Barracuda.TensorShape::ToString()
extern void TensorShape_ToString_m4A44B993E6DA23D11508E38C4F1C1D627C1C92DD_AdjustorThunk ();
// 0x0000058B System.Boolean Unity.Barracuda.Tensor::get_disposed()
extern void Tensor_get_disposed_m1B59F106F3D9E6AE0FC22F973A732A1FD4A8EA98 ();
// 0x0000058C Unity.Barracuda.ITensorAllocator Unity.Barracuda.Tensor::get_allocator()
extern void Tensor_get_allocator_mD495AED6DA1D5ED875A40BC44573D8FC68EE649C ();
// 0x0000058D System.Int32 Unity.Barracuda.Tensor::get_batch()
extern void Tensor_get_batch_m04F2D1943755E0534373384D4F9FEADD04A2476B ();
// 0x0000058E System.Int32 Unity.Barracuda.Tensor::get_height()
extern void Tensor_get_height_m39F21DA94B50A8A58755120E4954682AB9FEE2D0 ();
// 0x0000058F System.Int32 Unity.Barracuda.Tensor::get_width()
extern void Tensor_get_width_mE7DD92B0A66BC39879663DF667BE23D0612FA6FC ();
// 0x00000590 System.Int32 Unity.Barracuda.Tensor::get_channels()
extern void Tensor_get_channels_m1A78B5AEE3F6C4D5C33F4924F62589C75FCBF14D ();
// 0x00000591 System.Int32 Unity.Barracuda.Tensor::get_kernelWidth()
extern void Tensor_get_kernelWidth_mD4A5EB74F4B3F08B38E2700750EFF5A5A00212C4 ();
// 0x00000592 System.Int32 Unity.Barracuda.Tensor::get_kernelHeight()
extern void Tensor_get_kernelHeight_mDC7FF39D2B303D6B5E57F853FF38B72895B67B1B ();
// 0x00000593 System.Int32 Unity.Barracuda.Tensor::get_kernelDepth()
extern void Tensor_get_kernelDepth_m18CB986B39B0E65220E21F8E1EBBE331C6125B5F ();
// 0x00000594 System.Int32 Unity.Barracuda.Tensor::get_kernelCount()
extern void Tensor_get_kernelCount_m0AE8B870F6F98E16CDF842AF011B654E6710190D ();
// 0x00000595 System.Int32 Unity.Barracuda.Tensor::get_flatHeight()
extern void Tensor_get_flatHeight_mA2425A53E58C3F13DE29FB12A244A6FAE454EA95 ();
// 0x00000596 System.Int32 Unity.Barracuda.Tensor::get_flatWidth()
extern void Tensor_get_flatWidth_mF6291E1F78ABCC39DE6DC40F17466A1293502F59 ();
// 0x00000597 System.Int32 Unity.Barracuda.Tensor::get_length()
extern void Tensor_get_length_m45F7144BDFE6F27F3442BF2BD5BB3EA9091CBDDC ();
// 0x00000598 System.Int32 Unity.Barracuda.Tensor::get_dimensions()
extern void Tensor_get_dimensions_m99AB8558A576E33B67AB54BD44994C7C19485B6D ();
// 0x00000599 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[],System.String)
extern void Tensor__ctor_m20F3355CA261D431CE0BD608E93B3B1C2D6DF162 ();
// 0x0000059A System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[],System.String)
extern void Tensor__ctor_m8B8F1BFD8DC5ED3D7141125D28E67057B9696050 ();
// 0x0000059B System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[],System.String)
extern void Tensor__ctor_m313B92179DDE6F954C47E5C4B3F5805C21D31242 ();
// 0x0000059C System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[],System.String)
extern void Tensor__ctor_m7CB3644485C78282A3DB6963CBC96882ECAD9EC5 ();
// 0x0000059D System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.Single[][],System.String)
extern void Tensor__ctor_m0C2EBE0329D764AD5AC555C45D98E9093DD6B030 ();
// 0x0000059E System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single[][],System.String)
extern void Tensor__ctor_m16FB274008595F6E06B2EB83CA205C2851FD3E04 ();
// 0x0000059F System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Single[][],System.String)
extern void Tensor__ctor_m4D727D3EBED0CF6A2F4040514ABFAC024EE578BA ();
// 0x000005A0 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.Single[][],System.String)
extern void Tensor__ctor_mC505D8F258EF4E62A018421FAB95E231B26084E0 ();
// 0x000005A1 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_m231A76C110457ACBB7EEF80BEBB5177416F2C804 ();
// 0x000005A2 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mD1B5DF1C693678E259FA8D756F44019E9170F300 ();
// 0x000005A3 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_m6A61AA6016C19032C262268961194731A002FA22 ();
// 0x000005A4 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,UnityEngine.ComputeBuffer,System.String)
extern void Tensor__ctor_mB458FDE0CC4F6B728B4AF516AD55F353FDA6D535 ();
// 0x000005A5 System.Void Unity.Barracuda.Tensor::.ctor(UnityEngine.Texture,System.Int32,System.String)
extern void Tensor__ctor_m4205ECAC3D098EA8497C077C8311DB742831DC10 ();
// 0x000005A6 System.Void Unity.Barracuda.Tensor::.ctor(UnityEngine.Texture[],System.Int32,System.String)
extern void Tensor__ctor_m41B4D551F4F90020D904D287338B3BAD0379A249 ();
// 0x000005A7 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_mD34C0B8FC063A29E6B0D2F9258A001019264F306 ();
// 0x000005A8 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m553F2FC3B1774E362285B4EA2B913320D75CF15E ();
// 0x000005A9 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_m5A8B6CDAB537167B55D573A02712EEA997EC65B8 ();
// 0x000005AA System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData,System.String)
extern void Tensor__ctor_mE7C829956C38FF0A3B742C18D5706B0D208E1694 ();
// 0x000005AB System.Void Unity.Barracuda.Tensor::.ctor(System.String)
extern void Tensor__ctor_m1C52EF8FF36E7B96214ECC3F4D9DDDCC61D1B62B ();
// 0x000005AC System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],System.String)
extern void Tensor__ctor_mE87DFF4C78DCBFC1CA9682F8CB71A84EB343E4BE ();
// 0x000005AD System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern void Tensor__ctor_m75E84F76CD3B31274D2B79864158E615649AF3BE ();
// 0x000005AE System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.String)
extern void Tensor__ctor_mC6CC56AD45C4B41C6292E3836235DE06FF3A5532 ();
// 0x000005AF System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,System.String)
extern void Tensor__ctor_m417C4F16DB613105C34273FE7885DB550E0F2BDB ();
// 0x000005B0 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m9967E03A1826F0737BF67FA6D0A90B9A3BD21E31 ();
// 0x000005B1 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mA5B7A92813B1E8FE41144B6570CEB7E38E7B9299 ();
// 0x000005B2 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mE389D1741870D04E67792307AE40ACC12380AF7F ();
// 0x000005B3 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mA1C833E07417D7E9E2B06FAAB66BE55DA236E651 ();
// 0x000005B4 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m9363FAB521CF9460F96A5477F1B704553A13461B ();
// 0x000005B5 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32[],Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mD3D8B14154B337198A06DBE5BC91B5A4FF6C2CF4 ();
// 0x000005B6 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mD9D4B975A655A8F4CAC8FE8B2B0A40909ED96DAD ();
// 0x000005B7 System.Void Unity.Barracuda.Tensor::.ctor(System.Int32,System.Int32,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_m7828454CB3D5D2B039E5C2DD79B96A480D86A019 ();
// 0x000005B8 System.Void Unity.Barracuda.Tensor::.ctor(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorAllocator)
extern void Tensor__ctor_mFA0A019B85B1C151C4527963F5FA75C30CCC34E8 ();
// 0x000005B9 System.Void Unity.Barracuda.Tensor::Finalize()
extern void Tensor_Finalize_m1992EF741EE2FF9A5B8894633C7133DC704662FC ();
// 0x000005BA System.Void Unity.Barracuda.Tensor::PinToDevice(Unity.Barracuda.ITensorData,System.Boolean)
extern void Tensor_PinToDevice_m3F7A85ACF8A7141960A2EE29CF0195EE689D9494 ();
// 0x000005BB System.Void Unity.Barracuda.Tensor::UploadToDevice(Unity.Barracuda.ITensorData,System.Boolean)
extern void Tensor_UploadToDevice_m3BE5B7DFE2E7E6E524D2C5CFF27D4D869F202F16 ();
// 0x000005BC System.Void Unity.Barracuda.Tensor::AttachToDevice(Unity.Barracuda.ITensorData)
extern void Tensor_AttachToDevice_m9E445AC49BDBE2B15EE9553C94B4D563630F4660 ();
// 0x000005BD Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::DetachFromDevice(System.Boolean)
extern void Tensor_DetachFromDevice_m589956BCE22B738F75B355A95A3C41EFDF9B2C9A ();
// 0x000005BE System.Void Unity.Barracuda.Tensor::UploadIfDirty()
extern void Tensor_UploadIfDirty_m0E11942DA16DEEE372D9613B781A1B1AEA5030F4 ();
// 0x000005BF System.Void Unity.Barracuda.Tensor::UploadAndInvalidateCache()
extern void Tensor_UploadAndInvalidateCache_mC37D8AA40696669A26328EBFC17F9C57BE567625 ();
// 0x000005C0 System.Boolean Unity.Barracuda.Tensor::PrepareCacheForAccess(System.Boolean)
extern void Tensor_PrepareCacheForAccess_m4BAD797724D6671872128679BF7B274F23E6C79E ();
// 0x000005C1 System.Void Unity.Barracuda.Tensor::FlushCache()
extern void Tensor_FlushCache_mA214E5DEA6A27A43B97A7A7ED16773065EBC85B4 ();
// 0x000005C2 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::ShallowCopy(Unity.Barracuda.TensorShape,System.String)
extern void Tensor_ShallowCopy_m2A6D7F7E84A9F5E3A9CC3FB652114DDEF9168158 ();
// 0x000005C3 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::ShallowCopy(System.String)
extern void Tensor_ShallowCopy_mFF6625C66E11AC08AED9914A4221CAF45005C12F ();
// 0x000005C4 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::Flatten(System.String)
extern void Tensor_Flatten_m8EE5554EC0F558E0CDB85963045CFF382FEFEC7E ();
// 0x000005C5 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::Reshape(Unity.Barracuda.TensorShape,System.String)
extern void Tensor_Reshape_mFBE19495F2AC4544047AF6FA7F480ABD2C3D9A82 ();
// 0x000005C6 Unity.Barracuda.Tensor Unity.Barracuda.Tensor::DeepCopy()
extern void Tensor_DeepCopy_m405B8E24D39FE2F02C22253E0ECFD1933F0CCA9F ();
// 0x000005C7 System.Void Unity.Barracuda.Tensor::TakeOwnership()
extern void Tensor_TakeOwnership_mDFDC166C8DED59805A6C7F4FBBC3697D4549E2BC ();
// 0x000005C8 Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::Invalidate()
extern void Tensor_Invalidate_m5B0B6D898B79104FF55961A80AF339D065F28C90 ();
// 0x000005C9 System.Void Unity.Barracuda.Tensor::Dispose()
extern void Tensor_Dispose_mF1407F9C0B46C8B59041EB3FAEBD1A57A61031A0 ();
// 0x000005CA System.Void Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_mE463C9AA4A5053F43D868F38F1714875F2D2E3F3 ();
// 0x000005CB System.Void Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTexture,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m32DD44B46E0604BF7836F6D6898F76FB132E93BA ();
// 0x000005CC UnityEngine.RenderTexture Unity.Barracuda.Tensor::ToRenderTexture(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_m7B43D8279EE3F4D33F473988E02B4DBAEF576B56 ();
// 0x000005CD UnityEngine.RenderTexture Unity.Barracuda.Tensor::ToRenderTexture(System.Int32,System.Int32,System.Single,System.Single,UnityEngine.Texture3D)
extern void Tensor_ToRenderTexture_mE2D5950E0FADDA45F34C4A264DC89F41C0D25607 ();
// 0x000005CE System.Int32 Unity.Barracuda.Tensor::Axis(System.Int32)
extern void Tensor_Axis_m5ACE99AFFEE89B499C52F6BD85A953A7D40BDCB7 ();
// 0x000005CF System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_Index_mA843A11992EBF19F4CEDA191D651E2C1ADF518D2 ();
// 0x000005D0 System.Int32 Unity.Barracuda.Tensor::IndexWithClamp(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithClamp_m09BA8BFF3E5F5F17684755FDA80BA64F435D7785 ();
// 0x000005D1 System.Int32 Unity.Barracuda.Tensor::IndexWithBroadcast(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_IndexWithBroadcast_m322B2B2AEEB4D1640E4397D8CD51DB36C54B730A ();
// 0x000005D2 System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32)
extern void Tensor_Index_mD31250DE278540CC6DB4B4A129A736E62690E443 ();
// 0x000005D3 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32)
extern void Tensor_get_Item_m0D3C2133691E0627519CE9E98BE225D47FC67C6A ();
// 0x000005D4 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Single)
extern void Tensor_set_Item_m58F07BA2ECBC27ED9020D908E15361242F088330 ();
// 0x000005D5 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32)
extern void Tensor_get_Item_mCE3B1E75186C93F68E5B5F02FDC0A810AAED072A ();
// 0x000005D6 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_mA6847F921DB35DA91D0FFB66A1D589C97AD0FF55 ();
// 0x000005D7 System.Single Unity.Barracuda.Tensor::get_Item(System.Int32,System.Int32,System.Int32,System.Int32)
extern void Tensor_get_Item_m1A6E21751EC7DD265AD885E147B17486FFAA7217 ();
// 0x000005D8 System.Void Unity.Barracuda.Tensor::set_Item(System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern void Tensor_set_Item_mDEC6E17758D205156952A0458FFC7ED6D41E8376 ();
// 0x000005D9 System.Single[] Unity.Barracuda.Tensor::ToReadOnlyArray()
extern void Tensor_ToReadOnlyArray_mCD52D792D1F92FEAB02530FB3A950A5F801292A5 ();
// 0x000005DA Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::get_tensorOnDevice()
extern void Tensor_get_tensorOnDevice_mE71A3C2765C73CF3F4D689DDBEADF8439F50C31A ();
// 0x000005DB Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::get_data()
extern void Tensor_get_data_m600A13C996A6DB7BC0F679A6C2DABED2F73C4F05 ();
// 0x000005DC System.String Unity.Barracuda.Tensor::ToString()
extern void Tensor_ToString_mE9AD427456DB0A0F91CC5DB292DEF8F7D9B44A10 ();
// 0x000005DD Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::UnpinAndDisposeTensor()
extern void Tensor_UnpinAndDisposeTensor_mF6E4108BD29A7B8F50EDF357BEED0CB30290228A ();
// 0x000005DE System.Single[] Unity.Barracuda.Tensor::get_readonlyArray()
extern void Tensor_get_readonlyArray_m6EA38E6FA503BF40B0CE8EE832EE05D025128B11 ();
// 0x000005DF System.Int32 Unity.Barracuda.Tensor::get_readonlyArrayOffset()
extern void Tensor_get_readonlyArrayOffset_m764EC9495FE9925D670307265B4FA7A558855070 ();
// 0x000005E0 System.Void Unity.Barracuda.TensorExtensions::TestInit(Unity.Barracuda.Tensor,System.Int32)
extern void TensorExtensions_TestInit_mAB73912668C8A2BBF8C77FF08E2E2635FCC896E6 ();
// 0x000005E1 System.Void Unity.Barracuda.TensorExtensions::TestInitCos(Unity.Barracuda.Tensor,System.Int32,System.Single)
extern void TensorExtensions_TestInitCos_m2C5464ECD8C4EA78221FB235221B461CB83FA94D ();
// 0x000005E2 System.Void Unity.Barracuda.TensorExtensions::TestInitValue(Unity.Barracuda.Tensor,System.Single,System.Int32)
extern void TensorExtensions_TestInitValue_mB8E685E20A91CFA3698EBB70C1562E6F0C714345 ();
// 0x000005E3 System.Single[] Unity.Barracuda.TensorExtensions::AsFloats(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsFloats_m1A746AE88018C62853AE3F2CC7B2736AC95D30AE ();
// 0x000005E4 System.Int32[] Unity.Barracuda.TensorExtensions::AsInts(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsInts_m152AA277835D68A73005F5496BDD61278FB92EE7 ();
// 0x000005E5 System.Int64[] Unity.Barracuda.TensorExtensions::AsLongs(Unity.Barracuda.Tensor)
extern void TensorExtensions_AsLongs_m23589CC8FDF5528582727BDE6A9D328AE1DE0905 ();
// 0x000005E6 System.String Unity.Barracuda.TensorExtensions::DataToString(Unity.Barracuda.Tensor,System.Int32)
extern void TensorExtensions_DataToString_mFBCF24AA3864B52038934716408BB4FB228A4660 ();
// 0x000005E7 System.Void Unity.Barracuda.TensorExtensions::Print(Unity.Barracuda.Tensor,System.String)
extern void TensorExtensions_Print_m65CF7C273BDDCEA43A4229F8E4D1DB40ACD031DC ();
// 0x000005E8 System.Void Unity.Barracuda.TensorExtensions::PrintDataPart(Unity.Barracuda.Tensor,System.Int32,System.String)
extern void TensorExtensions_PrintDataPart_mFB54AB02F47BEB60A6473F017F8CA179E7222F3D ();
// 0x000005E9 System.Boolean Unity.Barracuda.TensorExtensions::Equals(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void TensorExtensions_Equals_mB162305D7A1811A7BAA0FDE5FCC3420E29B2F586 ();
// 0x000005EA System.Boolean Unity.Barracuda.TensorExtensions::Approximately(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Single,System.Int32)
extern void TensorExtensions_Approximately_m0091CD0705BCA6417494CAA4AA90AC0B37B95206 ();
// 0x000005EB System.Single Unity.Barracuda.TensorExtensions::MaxDifference(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor)
extern void TensorExtensions_MaxDifference_mA47629D00F613D4F6267E923E0024C073297406C ();
// 0x000005EC System.Int32[] Unity.Barracuda.TensorExtensions::ArgMax(Unity.Barracuda.Tensor)
extern void TensorExtensions_ArgMax_m335657F028DA5AE7B4CB61D9C5E3605AE5FE6D10 ();
// 0x000005ED Unity.Barracuda.Tensor Unity.Barracuda.TensorExtensions::Reshape(Unity.Barracuda.Tensor,System.Int32[])
extern void TensorExtensions_Reshape_m4916E40361D017D9AC9B126E11EBA2D5029A7FD8 ();
// 0x000005EE System.Int32[][] Unity.Barracuda.TensorExtensions::ArgSort(Unity.Barracuda.Tensor)
extern void TensorExtensions_ArgSort_m5869ACA6CD8F72DFF8448D0765307AF150EF5BD3 ();
// 0x000005EF Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Gather(Unity.Barracuda.TensorShape[],System.Int32)
extern void TensorExtensions_Gather_m4E592878BACEB54B093C4E7DDE8909D59E353140 ();
// 0x000005F0 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Concat(Unity.Barracuda.Tensor[],System.Int32)
extern void TensorExtensions_Concat_m21AAA10168D26F4BF9068F7D25ABD51F2227D2DF ();
// 0x000005F1 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Concat(Unity.Barracuda.TensorShape[],System.Int32)
extern void TensorExtensions_Concat_m432CE385FBBF32ED831884491E68CEFFCFF07BA1 ();
// 0x000005F2 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Max(Unity.Barracuda.TensorShape[])
extern void TensorExtensions_Max_mBA6D7EAC739777102317B42B876986913CF81E11 ();
// 0x000005F3 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::MaxShape(Unity.Barracuda.Tensor[])
extern void TensorExtensions_MaxShape_m9C205390BF0578D2D65555B34E8009DFEF1105F8 ();
// 0x000005F4 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Scale(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape)
extern void TensorExtensions_Scale_mFECA286ADA3917E8E7980A8C0AF213ABD9783791 ();
// 0x000005F5 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Scale(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Scale_m475D66FBD991B056A5765A19D020DB25A87F3841 ();
// 0x000005F6 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Reduce(Unity.Barracuda.TensorShape,System.Int32)
extern void TensorExtensions_Reduce_m780ED552FA1CFB41380BA23D53667AE7F9B8C089 ();
// 0x000005F7 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::Reshape(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_Reshape_mFB86AE497DA9B4620E41A954D304C4662B3FFBD4 ();
// 0x000005F8 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyBorder(Unity.Barracuda.TensorShape,System.Int32[])
extern void TensorExtensions_ApplyBorder_m3BDE1F6EECA5CC63466512D231D13C95B42F70DC ();
// 0x000005F9 System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToKernel(Unity.Barracuda.Tensor,Unity.Barracuda.Tensor,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToKernel_m0387AAD441004DEB7492A16D08B4F5707BA8BA87 ();
// 0x000005FA System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToKernel(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToKernel_mE44B8F4D55961439FDBA51F16BEF683F97321034 ();
// 0x000005FB System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_mEE266C66057EB269C0BE49EC74CDC86CE00B3880 ();
// 0x000005FC System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_m34CCFD3513149EB48C3C96C9A7622E498F6DBCD8 ();
// 0x000005FD System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.Tensor,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_m8ED4627D7975C87FFCE6C36E7622B50199628CB4 ();
// 0x000005FE System.Int32[] Unity.Barracuda.TensorExtensions::AdjustPadToPool(Unity.Barracuda.TensorShape,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[])
extern void TensorExtensions_AdjustPadToPool_m05DFBC976077C012E884256B543A9E5A4BFF7BED ();
// 0x000005FF Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyPool(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[],System.Boolean)
extern void TensorExtensions_ApplyPool_mDCD8B79817D906464E2E755772733D68B37197BE ();
// 0x00000600 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyPool(Unity.Barracuda.TensorShape,System.ValueTuple`2<System.Int32,System.Int32>,System.Int32[],System.Int32[],System.Boolean)
extern void TensorExtensions_ApplyPool_mA1D79553CA22280CA62FBF3109E1606A7E3A63BE ();
// 0x00000601 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyKernel(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyKernel_m019F06CBE354D8CA4379140FA6017ED0F1CA4EA9 ();
// 0x00000602 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyKernelInverse(Unity.Barracuda.TensorShape,Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyKernelInverse_m75D46F8DDB42830BF2E209A30847EA6514FDB3FA ();
// 0x00000603 System.Int32 Unity.Barracuda.TensorExtensions::WrapIndex(System.Int32,System.Int32)
extern void TensorExtensions_WrapIndex_mC97F1ADDC9D8F073A95D99B7C044E983AEF33091 ();
// 0x00000604 Unity.Barracuda.TensorShape Unity.Barracuda.TensorExtensions::ApplyStridedSlice(Unity.Barracuda.TensorShape,System.Int32[],System.Int32[],System.Int32[])
extern void TensorExtensions_ApplyStridedSlice_mE71B24E00DDA544A9327C36EE8B6F4193E18AA65 ();
// 0x00000605 Unity.Barracuda.ITensorData Unity.Barracuda.TensorExtensions::CreateFromTexture(UnityEngine.Texture,Unity.Barracuda.TensorShape)
extern void TensorExtensions_CreateFromTexture_m8696563C746850188DF8B08243AE9D0FB35969C7 ();
// 0x00000606 System.Void Unity.Barracuda.BarracudaBackendsFactory_<>c::.cctor()
extern void U3CU3Ec__cctor_mB36C6D214448FDFB325E538B037D835BC687D315 ();
// 0x00000607 System.Void Unity.Barracuda.BarracudaBackendsFactory_<>c::.ctor()
extern void U3CU3Ec__ctor_m3F3ED924BCACD2912D1F1B6F1070B3E1221E041C ();
// 0x00000608 System.String Unity.Barracuda.BarracudaBackendsFactory_<>c::<PatchModel>b__5_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CPatchModelU3Eb__5_1_m8450B49CD3E1254EA757107D1D3CA08C70843A01 ();
// 0x00000609 System.String Unity.Barracuda.BarracudaBackendsFactory_<>c::<PatchModel>b__5_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CPatchModelU3Eb__5_0_m9D7F0B1EDB09B68DDF1F6E09F9689178516D0E42 ();
// 0x0000060A System.String Unity.Barracuda.BarracudaBackendsFactory_<>c::<ValidateModel>b__6_0(System.String)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_0_mCCDD3E4EA0F87A9EF2AFC0839876EEA090EE3951 ();
// 0x0000060B System.Boolean Unity.Barracuda.BarracudaBackendsFactory_<>c::<ValidateModel>b__6_1(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_1_mC154985A84C849B001B1107BCC98089CD566F2AF ();
// 0x0000060C System.String Unity.Barracuda.BarracudaBackendsFactory_<>c::<ValidateModel>b__6_2(System.Linq.IGrouping`2<System.String,System.String>)
extern void U3CU3Ec_U3CValidateModelU3Eb__6_2_mCAF8AA5D02748D8C5860051F6953649BA6A01EF0 ();
// 0x0000060D Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::Schedule(Unity.Jobs.JobHandle)
extern void MatrixMultiplyJob_Schedule_m4B3BC65CF01EA37867703277ACF85DEF1293471A_AdjustorThunk ();
// 0x0000060E Unity.Jobs.JobHandle Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::Schedule(System.Int32,Unity.Jobs.JobHandle)
extern void MatrixMultiplyJob_Schedule_m6B4A5885EC367EF944530BAD739FD5B3BF8BA427_AdjustorThunk ();
// 0x0000060F System.Void Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::Execute(System.Int32)
extern void MatrixMultiplyJob_Execute_m7E8697DD1A45C05CBDF82AD7AA460AA8990A2C01_AdjustorThunk ();
// 0x00000610 System.Single* Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::AllocBlock()
extern void MatrixMultiplyJob_AllocBlock_m256BDEA733BEAABC633755670742E2ECD0E6AC26 ();
// 0x00000611 System.Void Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::FreeBlock(System.Single*)
extern void MatrixMultiplyJob_FreeBlock_m0145064335D4366539D3C2F5F00A9D3B93F6DA0A ();
// 0x00000612 System.Void Unity.Barracuda.BurstCPUOps_MatrixMultiplyJob::MultiplyBlockUnroll16xh(System.Single*,System.Int32,System.Single*,System.Int32,System.Single*,System.Int32)
extern void MatrixMultiplyJob_MultiplyBlockUnroll16xh_mB6D8BCE0DAF81738AB4A314AAA1635465226FECB ();
// 0x00000613 System.Void Unity.Barracuda.BurstCPUOps_Im2ColSliceJob::Execute(System.Int32)
extern void Im2ColSliceJob_Execute_m54A9130AAD3D5A3A165697C8E7BC2039F0A48EC0_AdjustorThunk ();
// 0x00000614 System.Void Unity.Barracuda.BurstCPUOps_MaxPool2DJob::Execute(System.Int32)
extern void MaxPool2DJob_Execute_mF621A7A519DC57B5C1E6095948029B0175BF3581_AdjustorThunk ();
// 0x00000615 System.Void Unity.Barracuda.BurstCPUOps_AvgPool2DJob::Execute(System.Int32)
extern void AvgPool2DJob_Execute_m9E35EFD71CB9F182739FFC31886B0ABD7D59F0F8_AdjustorThunk ();
// 0x00000616 System.Void Unity.Barracuda.BurstCPUOps_DepthwiseConv2DJob::Execute(System.Int32)
extern void DepthwiseConv2DJob_Execute_m8CAE55F236301E4DEAAEEE53B3B0E813FF78A674_AdjustorThunk ();
// 0x00000617 System.Void Unity.Barracuda.BurstCPUOps_PReluJob::Execute(System.Int32)
extern void PReluJob_Execute_mDC5ECE69BAD750F7EC0D51ABAAD00DED3509122E_AdjustorThunk ();
// 0x00000618 System.Single Unity.Barracuda.BurstCPUOps_PReluJob::PRelu(System.Single,System.Single)
extern void PReluJob_PRelu_mA9C901233DC8E66FCCE13A96FEF0E4F890322D0D ();
// 0x00000619 System.Void Unity.Barracuda.BurstCPUOps_ReluJob::Execute(System.Int32)
extern void ReluJob_Execute_m63F71CA9D470439D532F9A7B75E818C2D2AE9978_AdjustorThunk ();
// 0x0000061A System.Void Unity.Barracuda.BurstCPUOps_Relu6Job::Execute(System.Int32)
extern void Relu6Job_Execute_m949791345259593E04ADBB241AABAE52E20F5883_AdjustorThunk ();
// 0x0000061B System.Single Unity.Barracuda.BurstCPUOps_LeakyReluJob::get_alpha()
extern void LeakyReluJob_get_alpha_mAAB1EFD49AF4886D69BE971D64501A1E3BF0AA75_AdjustorThunk ();
// 0x0000061C System.Void Unity.Barracuda.BurstCPUOps_LeakyReluJob::set_alpha(System.Single)
extern void LeakyReluJob_set_alpha_m8791B339DF936B882DB1EBC7C388F2A372E97C27_AdjustorThunk ();
// 0x0000061D System.Void Unity.Barracuda.BurstCPUOps_LeakyReluJob::Execute(System.Int32)
extern void LeakyReluJob_Execute_m82B79F684A55554D31E4EB322110BCF88E22BBDF_AdjustorThunk ();
// 0x0000061E System.Void Unity.Barracuda.BurstCPUOps_TanhJob::Execute(System.Int32)
extern void TanhJob_Execute_m4BF40FBF6579E4343CFFC699BA0B7EE941625EE4_AdjustorThunk ();
// 0x0000061F System.Void Unity.Barracuda.BurstCPUOps_SigmoidJob::Execute(System.Int32)
extern void SigmoidJob_Execute_m69D20C7B7D4C101F400D68CA5EF4CAC3848CCA0F_AdjustorThunk ();
// 0x00000620 System.Void Unity.Barracuda.BurstCPUOps_EluJob::Execute(System.Int32)
extern void EluJob_Execute_m73570AD72D7FBFAD45498D3FE8C35BDA69068114_AdjustorThunk ();
// 0x00000621 System.Void Unity.Barracuda.BurstCPUOps_SeluJob::Execute(System.Int32)
extern void SeluJob_Execute_m20F65C429BEEE871D863CF718A5DC63FE87CBD4A_AdjustorThunk ();
// 0x00000622 System.Void Unity.Barracuda.BurstCPUOps_SwishJob::Execute(System.Int32)
extern void SwishJob_Execute_m655B155C56F3BCC0951BE23A6C3BC7994785DC61_AdjustorThunk ();
// 0x00000623 System.Void Unity.Barracuda.BurstCPUOps_SoftmaxJob::Execute(System.Int32)
extern void SoftmaxJob_Execute_m15E46B97BD6BFA821F8DD6B4F079572E2F3DE7BD_AdjustorThunk ();
// 0x00000624 System.Void Unity.Barracuda.BurstCPUOps_AbsJob::Execute(System.Int32)
extern void AbsJob_Execute_mD9336684F8FB01FD20F7AF10DB720C47099A301B_AdjustorThunk ();
// 0x00000625 System.Void Unity.Barracuda.BurstCPUOps_NegJob::Execute(System.Int32)
extern void NegJob_Execute_mB3168C913BD54490816F7B84D9B7B5D5C8F024E0_AdjustorThunk ();
// 0x00000626 System.Void Unity.Barracuda.BurstCPUOps_CeilJob::Execute(System.Int32)
extern void CeilJob_Execute_mA289B7C9E5B1B56C1D3DC722FE864E10F3BD7B53_AdjustorThunk ();
// 0x00000627 System.Void Unity.Barracuda.BurstCPUOps_ClipJob::Execute(System.Int32)
extern void ClipJob_Execute_mB0287EDD251A5FFC72954ABDB97F8C13AD94DA59_AdjustorThunk ();
// 0x00000628 System.Void Unity.Barracuda.BurstCPUOps_FloorJob::Execute(System.Int32)
extern void FloorJob_Execute_m21072CE14D59A6D22EAE4CC14BF6BC3632B2F52B_AdjustorThunk ();
// 0x00000629 System.Void Unity.Barracuda.BurstCPUOps_ReciprocalJob::Execute(System.Int32)
extern void ReciprocalJob_Execute_m1CCA50027CA8CFF528A3E070A626C2CC3E5F4874_AdjustorThunk ();
// 0x0000062A System.Void Unity.Barracuda.BurstCPUOps_PowJob::Execute(System.Int32)
extern void PowJob_Execute_mC3B49121E9E05229E6122E7DF6941474A9437729_AdjustorThunk ();
// 0x0000062B System.Void Unity.Barracuda.BurstCPUOps_ExpJob::Execute(System.Int32)
extern void ExpJob_Execute_m6DBFD1413DD5836C5CD904A15DA3B78F73400E97_AdjustorThunk ();
// 0x0000062C System.Void Unity.Barracuda.BurstCPUOps_LogJob::Execute(System.Int32)
extern void LogJob_Execute_m743AC6A0C3FEDF60BD4DBE80D0420696C9FE6918_AdjustorThunk ();
// 0x0000062D System.Void Unity.Barracuda.BurstCPUOps_SqrtJob::Execute(System.Int32)
extern void SqrtJob_Execute_m6DB595038FF268AFEAD5680BF22C7337EBDB92AD_AdjustorThunk ();
// 0x0000062E System.Void Unity.Barracuda.BurstCPUOps_ElementwiseAddJob::Execute(System.Int32)
extern void ElementwiseAddJob_Execute_m190D6486CDC4D2FB48340DA3B41219965EBCE184_AdjustorThunk ();
// 0x0000062F System.Void Unity.Barracuda.BurstCPUOps_ElementwiseMulJob::Execute(System.Int32)
extern void ElementwiseMulJob_Execute_m34265B113A022A97457E65B8B1A095E347C11411_AdjustorThunk ();
// 0x00000630 System.Void Unity.Barracuda.BurstCPUOps_ElementwiseDivJob::Execute(System.Int32)
extern void ElementwiseDivJob_Execute_m827F0E434B069D5DD9381295C6F8E6D76D99104B_AdjustorThunk ();
// 0x00000631 System.Void Unity.Barracuda.BurstCPUOps_ElementwisePowJob::Execute(System.Int32)
extern void ElementwisePowJob_Execute_mC7F8D2AEF7A2591DE4CBD2BE75C366278CB2CAD1_AdjustorThunk ();
// 0x00000632 System.Void Unity.Barracuda.BurstCPUOps_ElementwiseMaxJob::Execute(System.Int32)
extern void ElementwiseMaxJob_Execute_m6A0307605916629CF01E0DF57D05AA9E8F3EF0C4_AdjustorThunk ();
// 0x00000633 System.Void Unity.Barracuda.BurstCPUOps_ElementwiseMinJob::Execute(System.Int32)
extern void ElementwiseMinJob_Execute_mE3C610679CAD3309CAA3777B0B0EC6E506A7BDF8_AdjustorThunk ();
// 0x00000634 System.Void Unity.Barracuda.BurstCPUOps_ZeroBroadcastJob::Execute()
extern void ZeroBroadcastJob_Execute_m230E2B30B5F88C1C1E0A42F1CABBCDDD0D17763F_AdjustorThunk ();
// 0x00000635 System.Void Unity.Barracuda.BurstCPUOps_CopyJob::Execute()
extern void CopyJob_Execute_mC581688D9B4D895E57A05A6C455CC43BBD02A03A_AdjustorThunk ();
// 0x00000636 System.Void Unity.Barracuda.BurstCPUOps_VectorBroadcastJob::Execute()
extern void VectorBroadcastJob_Execute_m0B469A437F75CF4189D78DBA4E6C470AED613E34_AdjustorThunk ();
// 0x00000637 System.Void Unity.Barracuda.BurstCPUOps_ScalarBroadcastAddJob::Execute(System.Int32)
extern void ScalarBroadcastAddJob_Execute_m2C0D6C20302A376761F03929919D1331615E730C_AdjustorThunk ();
// 0x00000638 System.Void Unity.Barracuda.BurstCPUOps_ScalarBroadcastMulJob::Execute(System.Int32)
extern void ScalarBroadcastMulJob_Execute_m7262F042822FFA8D6AFD248C3844E56D474A34CB_AdjustorThunk ();
// 0x00000639 System.Void Unity.Barracuda.BurstCPUOps_ScalarBroadcastDivJob::Execute(System.Int32)
extern void ScalarBroadcastDivJob_Execute_m9F35278BAF22833FDBB116534A9AEF4DC6701058_AdjustorThunk ();
// 0x0000063A System.Void Unity.Barracuda.BurstCPUOps_ScalarBroadcastBiasedExpJob::Execute(System.Int32)
extern void ScalarBroadcastBiasedExpJob_Execute_m6BDD63B1913683A21BBC6310AB4444721CE8A532_AdjustorThunk ();
// 0x0000063B System.Void Unity.Barracuda.BurstCPUOps_GenericBroadcastJob::Execute(System.Int32)
extern void GenericBroadcastJob_Execute_m2348E276E68268BA62AFCB73F6BACCD1D7D74C9C_AdjustorThunk ();
// 0x0000063C System.Void Unity.Barracuda.BurstCPUOps_GenericBroadcastAddJob::Execute(System.Int32)
extern void GenericBroadcastAddJob_Execute_mBCECF23861A7E16FF62DA49A57AAE8356CC05DDC_AdjustorThunk ();
// 0x0000063D System.Void Unity.Barracuda.BurstCPUOps_GenericBroadcastMulJob::Execute(System.Int32)
extern void GenericBroadcastMulJob_Execute_m5D11C70808999C77A9808A797CF5F18415B30E7B_AdjustorThunk ();
// 0x0000063E System.Void Unity.Barracuda.BurstCPUOps_VectorBroadcastScaleBiasJob::Execute(System.Int32)
extern void VectorBroadcastScaleBiasJob_Execute_m7D5B20331D3254E324347B052919F1484427C498_AdjustorThunk ();
// 0x0000063F System.Void Unity.Barracuda.BurstCPUOps_ChannelReduceMaxJob::Execute(System.Int32)
extern void ChannelReduceMaxJob_Execute_mA0B1365EAE699042654995AB2E219780B5C76E62_AdjustorThunk ();
// 0x00000640 System.Void Unity.Barracuda.BurstCPUOps_ChannelReduceSumJob::Execute(System.Int32)
extern void ChannelReduceSumJob_Execute_m52C725718D043E4A0DD5200FF93697EE6372B96F_AdjustorThunk ();
// 0x00000641 System.Void Unity.Barracuda.ComputeKernelLibrary_Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,System.Boolean,System.Boolean)
extern void Entry__ctor_m7F3AD3B3764E3AE0873B43E86E4E78354D5AE297_AdjustorThunk ();
// 0x00000642 System.Void Unity.Barracuda.ComputeKernelLibrary_Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,System.UInt32)
extern void Entry__ctor_m5A4DA90D2A886AB15746E9A27376DF851A9F2E9E_AdjustorThunk ();
// 0x00000643 System.Void Unity.Barracuda.ComputeKernelLibrary_Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,Unity.Barracuda.ComputeKernelLibrary_StrictDimensions)
extern void Entry__ctor_mDC90ED772E69A72F285B56AAA5AECA5C13B2D7CE_AdjustorThunk ();
// 0x00000644 System.Void Unity.Barracuda.ComputeKernelLibrary_Entry::.ctor(System.String,System.ValueTuple`3<System.Int32,System.Int32,System.Int32>,System.Single,Unity.Barracuda.ComputeKernelLibrary_StrictDimensions,System.Boolean)
extern void Entry__ctor_mADF36150D2EE495815A242379F060C22A9CD4066_AdjustorThunk ();
// 0x00000645 System.Void Unity.Barracuda.ComputeDebugUtils_KernelAssertInfo::.ctor(System.UInt32[])
extern void KernelAssertInfo__ctor_mC50A38F077ABCC0E61D24269ED53527A5E00CF5F_AdjustorThunk ();
// 0x00000646 Unity.Barracuda.ComputeKernel Unity.Barracuda.PrecompiledComputeOps_CompiledLayer::get_kernel()
extern void CompiledLayer_get_kernel_m7FD0444D1CFBD527785C83894E4B9669C97F112F_AdjustorThunk ();
// 0x00000647 System.Void Unity.Barracuda.ReferenceCPUOps_Seed::.ctor(UnityEngine.Random_State[]&,System.Int32)
extern void Seed__ctor_m33452A89E631B146C69D1F21A08AFCDF8820835B ();
// 0x00000648 System.Void Unity.Barracuda.ReferenceCPUOps_Seed::Dispose()
extern void Seed_Dispose_m36D5E4D49382CEBC0E88B30B7392B37A04A7A640 ();
// 0x00000649 System.Void Unity.Barracuda.ReferenceCPUOps_<>c__DisplayClass25_0::.ctor()
extern void U3CU3Ec__DisplayClass25_0__ctor_mC26ACDA6242A93E1D2D8B896C6DD0AAE4EDAAC45 ();
// 0x0000064A System.Single Unity.Barracuda.ReferenceCPUOps_<>c__DisplayClass25_0::<Border2D>b__0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass25_0_U3CBorder2DU3Eb__0_mFB3849D9CC02B32B229D9D327EB969A1EDC838F7 ();
// 0x0000064B System.Void Unity.Barracuda.ReferenceCPUOps_<>c::.cctor()
extern void U3CU3Ec__cctor_m9B616D3FEA72083ACC3A283B75AB61AA0B8D21CE ();
// 0x0000064C System.Void Unity.Barracuda.ReferenceCPUOps_<>c::.ctor()
extern void U3CU3Ec__ctor_m832CE946FCA2951153E80AC2D5AA919A162E4DEE ();
// 0x0000064D System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Pad2DReflect>g__GetReflectPaddingU7C27_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec_U3CPad2DReflectU3Eg__GetReflectPaddingU7C27_0_mA716490B0F61040624645FE02DEBEE23562F48C1 ();
// 0x0000064E System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Pad2DSymmetric>g__GetSymmetricPaddingU7C28_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec_U3CPad2DSymmetricU3Eg__GetSymmetricPaddingU7C28_0_mA4B60DB9A5DE25CEE459D37B80CD47AD6E22F137 ();
// 0x0000064F System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Pad2DEdge>g__GetEdgePaddingU7C29_0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32)
extern void U3CU3Ec_U3CPad2DEdgeU3Eg__GetEdgePaddingU7C29_0_mFB5FB708613BC4B56E317DF73028D7066D529095 ();
// 0x00000650 System.Int64 Unity.Barracuda.ReferenceCPUOps_<>c::<Concat>b__66_1(System.Int64,System.Int32)
extern void U3CU3Ec_U3CConcatU3Eb__66_1_m6D529F7B5F666718FE7AD624D380D0016227597F ();
// 0x00000651 System.Int64 Unity.Barracuda.ReferenceCPUOps_<>c::<Concat>b__66_0(System.Int64,System.Int32)
extern void U3CU3Ec_U3CConcatU3Eb__66_0_mDAFFE1829A15F19F1587178F0FE3ADF2F261456B ();
// 0x00000652 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Add>b__70_0(System.Single,System.Single)
extern void U3CU3Ec_U3CAddU3Eb__70_0_mF9C44932A856C3A9AEA4CA50314A642CF05C96BE ();
// 0x00000653 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Sub>b__71_0(System.Single,System.Single)
extern void U3CU3Ec_U3CSubU3Eb__71_0_mBD2B97DEC1024FCDA3A29FFF77CDD148BF2DFC80 ();
// 0x00000654 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Mul>b__72_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMulU3Eb__72_0_mB64C1E6ED6522993C0C7111D38F9BE27F4A16BD7 ();
// 0x00000655 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Div>b__73_0(System.Single,System.Single)
extern void U3CU3Ec_U3CDivU3Eb__73_0_m026ADB1B39992123E285E4AB13C0F98990C95765 ();
// 0x00000656 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Pow>b__74_0(System.Single,System.Single)
extern void U3CU3Ec_U3CPowU3Eb__74_0_mD73F42019F1A36C351D0D195170317E59FCBEF75 ();
// 0x00000657 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Min>b__75_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMinU3Eb__75_0_m053DAAEABC015B9CF0BF37A9B029EF08F878B446 ();
// 0x00000658 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Max>b__76_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMaxU3Eb__76_0_m977750F900DE46CC01137C739AA2A6B3406095A2 ();
// 0x00000659 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Mean>b__77_0(System.Single,System.Single)
extern void U3CU3Ec_U3CMeanU3Eb__77_0_mE67884EC5F316439E2E795ED0C8C6B5D45A37CAA ();
// 0x0000065A System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Greater>b__84_0(System.Single,System.Single)
extern void U3CU3Ec_U3CGreaterU3Eb__84_0_m256CD1BEB069E31B6EAE9E5B64AE32127BE12317 ();
// 0x0000065B System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<GreaterEqual>b__85_0(System.Single,System.Single)
extern void U3CU3Ec_U3CGreaterEqualU3Eb__85_0_m2AC32F1AFFA692277208BA36249AC2B38D61035D ();
// 0x0000065C System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Less>b__86_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLessU3Eb__86_0_mD9457AD0295B87F67667DBA1C2C073DEBD7E5B41 ();
// 0x0000065D System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<LessEqual>b__87_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLessEqualU3Eb__87_0_m8DC4BAA245006AF8E619265AD8A3FDE0FA4138C2 ();
// 0x0000065E System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<Equal>b__88_0(System.Single,System.Single)
extern void U3CU3Ec_U3CEqualU3Eb__88_0_mD8C024C0772AD7FB82A7304195FA400EF64FF6AF ();
// 0x0000065F System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<LogicalOr>b__89_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalOrU3Eb__89_0_mD516A21B54639A8AA44F965EDDC7974C8CA6210D ();
// 0x00000660 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<LogicalAnd>b__90_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalAndU3Eb__90_0_mA6A452143366D1589E515BAD9B9162A41DA6948A ();
// 0x00000661 System.Single Unity.Barracuda.ReferenceCPUOps_<>c::<LogicalXor>b__91_0(System.Single,System.Single)
extern void U3CU3Ec_U3CLogicalXorU3Eb__91_0_m1F1D7073703A9D121AEBB4C18932E421DB76DB8D ();
// 0x00000662 System.Void Unity.Barracuda.ComputeTensorData_ConvertFromOnDeviceFormatHelper::.ctor()
extern void ConvertFromOnDeviceFormatHelper__ctor_m114CBE3473F2E3159C0C56BE8E2111CD3B671D2A ();
// 0x00000663 System.Single[] Unity.Barracuda.ComputeTensorData_ConvertFromOnDeviceFormatHelper::GetNHWCData(Unity.Barracuda.TensorShape,System.Single[],Unity.Barracuda.ComputeInfo_ChannelsOrder,System.Boolean)
extern void ConvertFromOnDeviceFormatHelper_GetNHWCData_mFC2A449B13B9933603220C12A4852DF1616E1F2A ();
// 0x00000664 System.Void Unity.Barracuda.ComputeTensorData_ConvertFromOnDeviceFormatHelper::ApplyConversion()
extern void ConvertFromOnDeviceFormatHelper_ApplyConversion_m4A4E8A7978F25FEBE5F71E10CF58D01798AB4F78 ();
// 0x00000665 System.Void Unity.Barracuda.ComputeTensorData_ConvertFromOnDeviceFormatHelper::UnrolledInnerLoop(System.Int64)
extern void ConvertFromOnDeviceFormatHelper_UnrolledInnerLoop_mCEE813CC01DE19C1E34613F2B3D391C551C287AB ();
// 0x00000666 System.Int32 Unity.Barracuda.ComputeFunc_TensorDecl::get_ShapeId()
extern void TensorDecl_get_ShapeId_mF9741A19BFA63CFE5EB7B3FDC22693726787A7BE_AdjustorThunk ();
// 0x00000667 System.Int32 Unity.Barracuda.ComputeFunc_TensorDecl::get_InfoId()
extern void TensorDecl_get_InfoId_m424771C846EEB607C49C5DB573336C17782C869F_AdjustorThunk ();
// 0x00000668 System.Void Unity.Barracuda.ComputeFunc_TensorDecl::.ctor(System.Int32,System.Int32)
extern void TensorDecl__ctor_m57572A76CB48BEA3424A23A06D4EDAE476374D7B_AdjustorThunk ();
// 0x00000669 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass52_0::.ctor()
extern void U3CU3Ec__DisplayClass52_0__ctor_m359D7C87B6B4212F867493855F40EFD2B10314BC ();
// 0x0000066A System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass52_0::<MaxPool2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass52_0_U3CMaxPool2DInnerLoopU3Eb__0_m1D94007AC4F42DD6BBA1625CA4A43531C1F9DFE4 ();
// 0x0000066B System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass54_0::.ctor()
extern void U3CU3Ec__DisplayClass54_0__ctor_m127BC9BB61ED00AC98CDB4409AEDB5E92F1A6164 ();
// 0x0000066C System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass54_0::<AvgPool2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass54_0_U3CAvgPool2DInnerLoopU3Eb__0_mE169B6D550326FD1C17B93AB2278FD9CB200B3DF ();
// 0x0000066D System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass59_0::.ctor()
extern void U3CU3Ec__DisplayClass59_0__ctor_mD6B2FA1643C2D5E643493B9A30B6507F8218B1DF ();
// 0x0000066E System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass59_0::<Im2ColInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass59_0_U3CIm2ColInnerLoopU3Eb__0_mC1AE70B1E4A31CC2983A8F15308DFD52124F4899 ();
// 0x0000066F System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass63_0::.ctor()
extern void U3CU3Ec__DisplayClass63_0__ctor_mECF89AC35C81DB9B0CD856FD022B1AC4BCD4A137 ();
// 0x00000670 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass63_0::<DepthwiseConv2DInnerLoop>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass63_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_mC2ADD4C27AE607E0CE36B2598F5D0F71D2D589FB ();
// 0x00000671 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass64_0::.ctor()
extern void U3CU3Ec__DisplayClass64_0__ctor_m63C807D0B3991A79831FE1C2AA1D1240776CC24D ();
// 0x00000672 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass64_1::.ctor()
extern void U3CU3Ec__DisplayClass64_1__ctor_m1A657AD00E749CB227CAA874AD141A67EC03A7F5 ();
// 0x00000673 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass64_2::.ctor()
extern void U3CU3Ec__DisplayClass64_2__ctor_mE3021464A8ADD01065A477C04BDC23DDCF227E54 ();
// 0x00000674 System.Void Unity.Barracuda.UnsafeArrayCPUOps_<>c__DisplayClass64_2::<ApplyPadding>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass64_2_U3CApplyPaddingU3Eb__0_m20A5BE6C9BF6B792B24D923B688DFED04BCA3A42 ();
// 0x00000675 System.Void Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::.ctor(System.Int32)
extern void U3CStartManualScheduleU3Ed__29__ctor_mBF6BC2B6F85717377F17A502AE213A173EB488B0 ();
// 0x00000676 System.Void Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::System.IDisposable.Dispose()
extern void U3CStartManualScheduleU3Ed__29_System_IDisposable_Dispose_m0B6F76254C6730F23FB1504763C034AAE3155C6E ();
// 0x00000677 System.Boolean Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::MoveNext()
extern void U3CStartManualScheduleU3Ed__29_MoveNext_m1FB0B3A622CC99675432B10055F2D4273B080024 ();
// 0x00000678 System.Void Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::<>m__Finally1()
extern void U3CStartManualScheduleU3Ed__29_U3CU3Em__Finally1_mD2FE1B299D9409442036FE417FBFD7412CF21BC3 ();
// 0x00000679 System.Object Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CStartManualScheduleU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC06EDEE08EDCBAC2C1843C7CE11FA51EF6EA9BC5 ();
// 0x0000067A System.Void Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::System.Collections.IEnumerator.Reset()
extern void U3CStartManualScheduleU3Ed__29_System_Collections_IEnumerator_Reset_mEA0E1394C2DA16B07E89D9467833FDA7126F58C7 ();
// 0x0000067B System.Object Unity.Barracuda.GenericWorker_<StartManualSchedule>d__29::System.Collections.IEnumerator.get_Current()
extern void U3CStartManualScheduleU3Ed__29_System_Collections_IEnumerator_get_Current_m764A209B2F89F49F7AB9C7CE886C3E62A21AB8F7 ();
// 0x0000067C System.Void Unity.Barracuda.CSharpBLAS_SGEMMJob::Execute()
extern void SGEMMJob_Execute_m666A5DAE508DD327A386BF8C43080AAB2317F6B5_AdjustorThunk ();
// 0x0000067D System.Void Unity.Barracuda.MatrixUtils_<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m4768FDA18ED978EC889B35C11810185BFF7CE5BA ();
// 0x0000067E System.Void Unity.Barracuda.MatrixUtils_<>c__DisplayClass7_0::<MultiplyBlockUnroll8xhParallelWithPadding>b__0(System.Int32)
extern void U3CU3Ec__DisplayClass7_0_U3CMultiplyBlockUnroll8xhParallelWithPaddingU3Eb__0_mB71CC77D32EB39E054AD276E48F76E692F03CC76 ();
// 0x0000067F System.Void Unity.Barracuda.ModelAnalyzer_<>c::.cctor()
extern void U3CU3Ec__cctor_m802414F9BD1D7847E374DE9ABD6EDB192D00CF78 ();
// 0x00000680 System.Void Unity.Barracuda.ModelAnalyzer_<>c::.ctor()
extern void U3CU3Ec__ctor_m07E4F127284F42A7B91C5C8FA3CD450078DF627D ();
// 0x00000681 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindUnusedLayers>b__10_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_0_m0A291954E46FBD52FA19A214984204E5037AA045 ();
// 0x00000682 System.Boolean Unity.Barracuda.ModelAnalyzer_<>c::<FindUnusedLayers>b__10_1(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_1_mBD514B4F48886A144D39018B1DF9553C2B9E8F4A ();
// 0x00000683 System.Boolean Unity.Barracuda.ModelAnalyzer_<>c::<FindUnusedLayers>b__10_2(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_2_m6403179BBC811F39ADE3D17D7F1398B857DE3FFC ();
// 0x00000684 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindUnusedLayers>b__10_3(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
extern void U3CU3Ec_U3CFindUnusedLayersU3Eb__10_3_m980F5664E394B3425CC4056C4F0F661791F7AFD0 ();
// 0x00000685 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindBrokenLinks>b__11_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__11_0_m1AD4696C3FEDA0905B571AEECB315EE43F246EB2 ();
// 0x00000686 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindBrokenLinks>b__11_1(Unity.Barracuda.Model_Input)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__11_1_m4AA14F8715EDCACACB3E37D3D1D3934BB96BD4FD ();
// 0x00000687 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindBrokenLinks>b__11_2(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec_U3CFindBrokenLinksU3Eb__11_2_m3F6AB2F710CE08F4C6066140894FF8F3C4AD28DE ();
// 0x00000688 System.String Unity.Barracuda.ModelAnalyzer_<>c::<FindUnconnectedInputs>b__14_0(Unity.Barracuda.Model_Input)
extern void U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_0_m5C1969ADCD490A393FD42D002DD1B043AAA65317 ();
// 0x00000689 System.Boolean Unity.Barracuda.ModelAnalyzer_<>c::<FindUnconnectedInputs>b__14_1(Unity.Barracuda.Model_Input)
extern void U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_1_m968A1619CBADEDDD7672589DA3B49B63FB9663ED ();
// 0x0000068A System.Void Unity.Barracuda.ModelOptimizer_<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m1E99B67C3E3A43DF62AA39548DA1A86A6FC544D0 ();
// 0x0000068B System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass0_0::<Optimize>b__0(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass0_0_U3COptimizeU3Eb__0_m25848DB3FFA7CEB2BA1F029ECB1AD62E4F712FFD ();
// 0x0000068C System.Void Unity.Barracuda.ModelOptimizer_<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m15CE0A226B8387995A4748F7616AFF3A224F6BF8 ();
// 0x0000068D System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass3_0::<FuseActivation>b__0(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec__DisplayClass3_0_U3CFuseActivationU3Eb__0_m108D41CAB34ACA484398FB00C625D07AD9E6E0F4 ();
// 0x0000068E System.Void Unity.Barracuda.ModelOptimizer_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m35E0E87F3D0AA270BA0EDA364D6C5BE2B1E0EA84 ();
// 0x0000068F System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass4_0::<FuseActivations>b__1(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass4_0_U3CFuseActivationsU3Eb__1_mC4D853FE07021F4FCF73FAD800C3FF0D1F2B1CF5 ();
// 0x00000690 System.Void Unity.Barracuda.ModelOptimizer_<>c__DisplayClass4_1::.ctor()
extern void U3CU3Ec__DisplayClass4_1__ctor_m3ACDFAFEA9071C914908F5DFC9A88726943E7233 ();
// 0x00000691 System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass4_1::<FuseActivations>b__2(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec__DisplayClass4_1_U3CFuseActivationsU3Eb__2_m88125E36EC54850F5DAA54983EB93985DA977AB9 ();
// 0x00000692 System.Boolean Unity.Barracuda.ModelOptimizer_<>c__DisplayClass4_1::<FuseActivations>b__3(Unity.Barracuda.Layer)
extern void U3CU3Ec__DisplayClass4_1_U3CFuseActivationsU3Eb__3_m4F58D49AD74E881BF66C0EAE97D08A81B62A4A38 ();
// 0x00000693 System.Void Unity.Barracuda.ModelOptimizer_<>c::.cctor()
extern void U3CU3Ec__cctor_mD2EE4E61D9361DDC937809B66C4FE56201924AED ();
// 0x00000694 System.Void Unity.Barracuda.ModelOptimizer_<>c::.ctor()
extern void U3CU3Ec__ctor_m3CAD9CD3EE037525D9876DCF532C8CF9A6628E39 ();
// 0x00000695 System.Boolean Unity.Barracuda.ModelOptimizer_<>c::<FuseActivations>b__4_0(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CFuseActivationsU3Eb__4_0_m1A4A8BC58EE96FE694F3026F0703258E24C7D82D ();
// 0x00000696 System.String Unity.Barracuda.ModelOptimizer_<>c::<RemoveNoop>b__5_0(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec_U3CRemoveNoopU3Eb__5_0_m911E7F1E9C2FECA3B40B2B529C69000B74101B2E ();
// 0x00000697 System.String Unity.Barracuda.ModelOptimizer_<>c::<RemoveNoop>b__5_1(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec_U3CRemoveNoopU3Eb__5_1_m6F973863CBB081364D8FBAC8FDC92B98C4F5CDC5 ();
// 0x00000698 System.Void Unity.Barracuda.StatsOps_Transcendental::.ctor()
extern void Transcendental__ctor_m3C527DD8EE9E684D431F1ABFBA2A0D3B8C1A7984 ();
// 0x00000699 System.Void Unity.Barracuda.TensorCachingByShapeAllocator_<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_mBC6294A7F24820AD6DEDBFADF9C3661308B7DA56 ();
// 0x0000069A System.Void Unity.Barracuda.TensorCachingByShapeAllocator_<>c__DisplayClass13_0::<MoveToDevice>b__0(Unity.Barracuda.ITensorData)
extern void U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_mDDE0567B5D3EA9CB3D28A25FF0D25A57EDE3E615 ();
// 0x0000069B System.Void Unity.Barracuda.WorkerFactory_WorkerConfiguration::.ctor(Unity.Barracuda.WorkerFactory_Type,System.Boolean,Unity.Barracuda.CompareOpsUtils_LogLevel,System.Single)
extern void WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342_AdjustorThunk ();
// 0x0000069C System.Void Unity.Barracuda.Layer_<>c::.cctor()
extern void U3CU3Ec__cctor_mA773A4FA14ED85D0B29C57383212ED890457A290 ();
// 0x0000069D System.Void Unity.Barracuda.Layer_<>c::.ctor()
extern void U3CU3Ec__ctor_m492DA628675F0C266CDBE95267DA898E069EFA7A ();
// 0x0000069E System.String Unity.Barracuda.Layer_<>c::<ToString>b__21_0(Unity.Barracuda.Layer_DataSet)
extern void U3CU3Ec_U3CToStringU3Eb__21_0_mE302038CA1EAA5F09F187203271D35A05BF860A3 ();
// 0x0000069F Unity.Barracuda.Model_Input Unity.Barracuda.Model_Input::WithName(System.String)
extern void Input_WithName_m9641C89363FBFF257E49929E1E35F31D9ECAE229_AdjustorThunk ();
// 0x000006A0 System.String Unity.Barracuda.Model_ImporterWarning::get_Message()
extern void ImporterWarning_get_Message_mA04EF18357421B453DD0B7FF69770EF6034F52EE ();
// 0x000006A1 System.String Unity.Barracuda.Model_ImporterWarning::get_LayerName()
extern void ImporterWarning_get_LayerName_m08A4A4BC382BEAD5FC46573671525F1F13D433B0 ();
// 0x000006A2 System.Void Unity.Barracuda.Model_ImporterWarning::.ctor(System.String,System.String)
extern void ImporterWarning__ctor_m54D1637436668C6C77FE13986CABC0DD96C430A3 ();
// 0x000006A3 System.Void Unity.Barracuda.Model_<>c::.cctor()
extern void U3CU3Ec__cctor_m56152A519C7FF2EB6932303E9ADB49AACAF75E2D ();
// 0x000006A4 System.Void Unity.Barracuda.Model_<>c::.ctor()
extern void U3CU3Ec__ctor_m88AC841E1287921F3BBF56FFB0602B6B5BE03281 ();
// 0x000006A5 System.String Unity.Barracuda.Model_<>c::<ToString>b__15_0(Unity.Barracuda.Model_Input)
extern void U3CU3Ec_U3CToStringU3Eb__15_0_m127AA4324E81873F516655722806455E68958270 ();
// 0x000006A6 System.String Unity.Barracuda.Model_<>c::<ToString>b__15_1(Unity.Barracuda.Model_Memory)
extern void U3CU3Ec_U3CToStringU3Eb__15_1_m4E2CB6C8A3732CBDA67D7229E43305EDB037D9EE ();
// 0x000006A7 System.String Unity.Barracuda.Model_<>c::<ToString>b__15_2(Unity.Barracuda.Layer)
extern void U3CU3Ec_U3CToStringU3Eb__15_2_m69DC3F2E8C81800157341EC8DA1CFA775D349B68 ();
// 0x000006A8 System.Void Unity.Barracuda.TensorExtensions_<>c::.cctor()
extern void U3CU3Ec__cctor_mBF3C7CA5DA0AA45A9A6711ED1A340AB62153D48F ();
// 0x000006A9 System.Void Unity.Barracuda.TensorExtensions_<>c::.ctor()
extern void U3CU3Ec__ctor_m774C988336D39A2CBB9E714D7027C815D5B162E7 ();
// 0x000006AA System.Int32 Unity.Barracuda.TensorExtensions_<>c::<AsInts>b__4_0(System.Single)
extern void U3CU3Ec_U3CAsIntsU3Eb__4_0_m6BDB28735322B220F3D78DEA480DA1261535B90B ();
// 0x000006AB System.Int64 Unity.Barracuda.TensorExtensions_<>c::<AsLongs>b__5_0(System.Single)
extern void U3CU3Ec_U3CAsLongsU3Eb__5_0_m71BF1201359406877AAD4050097DEC8B9D71EC09 ();
// 0x000006AC System.Void Unity.Barracuda.TensorExtensions_<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_mB6D0A4A46BA74B11B2D77F7EA35F56358E7C71F7 ();
// 0x000006AD System.Void Unity.Barracuda.TensorExtensions_<>c__DisplayClass14_1::.ctor()
extern void U3CU3Ec__DisplayClass14_1__ctor_m1A9510486060D8F71BE60AB9B4AB6BBB6462E828 ();
// 0x000006AE System.Int32 Unity.Barracuda.TensorExtensions_<>c__DisplayClass14_1::<ArgSort>b__0(System.Int32,System.Int32)
extern void U3CU3Ec__DisplayClass14_1_U3CArgSortU3Eb__0_m10574AF063CEA44100AF5B69104347D547D39EB7 ();
static Il2CppMethodPointer s_methodPointers[1710] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BarracudaBackendsFactory_ResolveAutoType_m6330F6A994BAF98556AF57DCB19862FF7F2B3233,
	BarracudaBackendsFactory_GetBestTypeForDevice_m8FD9451309406BB2AFD8A158EBF6A3794A5D8689,
	BarracudaBackendsFactory_ValidateType_m2CBFC1545CE27DB8F0534FE6FF644D02EBDCE35E,
	BarracudaBackendsFactory_CreateOps_m4C64232979B8D99C9AAE1FC9E7BC09D0725890C8,
	BarracudaBackendsFactory_CreateWorker_m91A8F0E25FF5200C4A922D6DCFBA38E6430940C1,
	BarracudaBackendsFactory_PatchModel_m4AD49D85A46F944C311E922AA7D808F54DFC2A76,
	BarracudaBackendsFactory_ValidateModel_m1C954A295C15C21A6A0BEF3FBF3C0FAF4C87E086,
	BarracudaBackendsFactory__ctor_mB157991999008205E23B08F202CB8BA5315CB72C,
	BurstTensorData_get_fence_m63FA7C13B9AE95A94BF1F82DAA79563FFD4D908F,
	BurstTensorData_set_fence_m5C04CA6E44F8D96090B33221DCB85BF7F84A42C1,
	BurstTensorData_get_reuse_m39F51882133211D133E9DB4A7D47350D76A9A713,
	BurstTensorData_set_reuse_mF43FDE403E66BF3B267270BC60FDD73BC131B435,
	BurstTensorData__ctor_mA57B9286FEB32582BEC345CF26D54A0CE614A1A1,
	BurstTensorData__ctor_mFA350C800C6D7B270A6905AA4C3DE0022ED35C59,
	BurstTensorData__ctor_m001F3656268A1F91BBB059F016E809FD42F8E6DF,
	BurstTensorData__ctor_mA2933FD030205F5CEADD74C6711DEA1642A13A22,
	BurstTensorData__ctor_m2CBC80FD12F73711663D68E0CF31BACA900E355D,
	BurstTensorData_Finalize_mFFCBA7B4E50E40FF773DD53E5C0330F474B547AD,
	BurstTensorData_Dispose_m70E96C18BB1665E4CED8312EB588DD1A10DB74C0,
	BurstTensorData_CompleteAllPendingOperations_m776DC90EBD1796E4F69E47A9B855F7AE1BF54A3E,
	BurstTensorData_Reserve_m9D0D1A05BCD302EC8013DD1DC1F00DF3CD0ECA80,
	BurstTensorData_Upload_m8521D7BFE2FBD0D8E2F28D4C44D895F3A4118B4D,
	BurstTensorData_Download_mB126B1426A5DFBD116DE67C05F2431031416216F,
	BurstTensorData_SharedAccess_m6B0D887CE75C0B21402CE4D2763636A274AC2E05,
	BurstTensorData_ScheduleAsyncDownload_mBC1F5C84C607BD92025840F4323BA8260C1733A9,
	BurstTensorData_ToString_mE5C243236BC949647DBE97DA7AB1DC69918BE0EA,
	BurstCPUOps__ctor_m020AC23C6FDBCFF8582A59FD4FF7BF806749C2D8,
	BurstCPUOps_Pin_mD6A9F1C832C6382C9F67A36C380707BDE7935167,
	BurstCPUOps_Prepare_m203135F8250D9A7F411E2F67584914DDBC55CCA2,
	BurstCPUOps_Dependencies_m13E111F886BAFC9D4E045C56F0DE35F38955633C,
	BurstCPUOps_Dependencies_m79384517A4A93BD0715D970C7C65A5D5C0AEFBBD,
	BurstCPUOps_MatMul_m58A6DBEE2EFC31962938637F7357353E7E95C892,
	BurstCPUOps_Dense_mA938B657EC5982CE005FD2B6927BC87E32372AA6,
	BurstCPUOps_Conv2D_m5F277E4BAD4225957B50EE94CE9B2FA09BBAF6F0,
	BurstCPUOps_Conv2DUsingIm2ColSliced_mAB49F1B39D96B319186C189F52B7908AC3FFC402,
	BurstCPUOps_MaxPool2D_m7E984090F957FF37B3FCC082DF392E9DB0D9F8EB,
	BurstCPUOps_AvgPool2D_m11B98716AB2C34F230D129E241F33CA917F3CEFB,
	BurstCPUOps_GlobalMaxPool2D_m2C26A5F02B3CFD3D8D7749680E2C4548C9FCD0F8,
	BurstCPUOps_GlobalAvgPool2D_m84691125E4E8A87B046650087A735C6857D50DAE,
	BurstCPUOps_DepthwiseConv2D_m4E5323691622220F73B5C5AA907BACCE35F2E4A5,
	BurstCPUOps_ScaleBias_mAC4A670FC4264AC98CB02ABEABECF7370296C2A9,
	BurstCPUOps_Relu_m554E0D88C242AC7214083F78FDFE8946CEEDE593,
	BurstCPUOps_Relu6_m9B2F915392ACB2EE26BAE03576E014F396905B80,
	BurstCPUOps_LeakyRelu_m9D01C5BD8C1FA0515AE917151380D44D174440CB,
	BurstCPUOps_Tanh_m5F6F3A88BEF2FF4376EC7FACF705A8467D63B15D,
	BurstCPUOps_Sigmoid_m16B743FA0AC719B93D7C8F91B884CCDB1079E115,
	BurstCPUOps_Elu_m1090A600C38C62D4FC79BA1608432063EFE10B9F,
	BurstCPUOps_Selu_mCD5F27B7B5AD036690CF9EE6B53D16836D2FCBF4,
	BurstCPUOps_Swish_mE2E5FE6D17783F6F03D0FD650B676EF2020CF594,
	BurstCPUOps_PRelu_m7F7BBAE50A782F251D636646A24E59EB4E94BFF0,
	BurstCPUOps_Softmax_m27603EE7AFAC073309230C695089482AA5FFB3FA,
	BurstCPUOps_LogSoftmax_m67918B810F524497A974D080140895BA76A63ED2,
	BurstCPUOps_Abs_m6ED18EF7BAC77CC87FD9C9305CB40612667F401D,
	BurstCPUOps_Neg_mC26307E65BAA3E8814C642000CC314950CDEDF84,
	BurstCPUOps_Ceil_m1E4ADC91C9664AC2B1AA65E3EF6F4A7032806D16,
	BurstCPUOps_Clip_mA3398C4740706DE09EFD14E0914477B0BF731624,
	BurstCPUOps_Floor_m96498F9D86730D8B90F0B5132166E741E2D598CC,
	BurstCPUOps_Reciprocal_m229778FE1B9029E794D8BCE49EA74358A0A27AAC,
	BurstCPUOps_Pow_m898F891A21E63E530E6A1B75D05C35B6D1AD22C0,
	BurstCPUOps_Exp_mD2525A1DA423E8501CFADDDF1FBF8DA850F31BA7,
	BurstCPUOps_Log_m932BB82C37DBFF457C21E1C9DC60CFE4EAB91ACA,
	BurstCPUOps_Sqrt_m2AAE8F9306F1DCD4127FCF79C392DB097E9DFA17,
	BurstCPUOps_GenericBroadcast_m67E44392FE6F4BFE9F0D0B6FAD09619053CE0F30,
	BurstCPUOps_BroadcastAdd_m72B9FD3AFE8827B2C171CC91F6FCD32FE117F66A,
	BurstCPUOps_BroadcastSub_m980BBA34DC028DD9F6933027F2643B5CB9E17384,
	BurstCPUOps_BroadcastMul_mBB4DC8680C83670C974D2C277CCFC39F3F69204C,
	BurstCPUOps_BroadcastDiv_mADAF2D0F9A1763A12B90956A35DD4A6B63557849,
	BurstCPUOps_BroadcastPow_m8AD755132AF093E69964F3EC4A4E5B68D8D6D105,
	BurstCPUOps_BroadcastMin_mF74456F6D86AAE876567E692040FEFAFF572D6BF,
	BurstCPUOps_BroadcastMax_m6E53CF2E4B2D15627D71A622E333D4F929AB2216,
	BurstCPUOps_Add_m56D7EFECC28D3C8AAA5430A147052B702B9B9A28,
	BurstCPUOps_Sub_m3DD02DC13ECE00235E5F4F37655479FC851ECAA9,
	BurstCPUOps_Mul_m829797A6ACE4F840135E4C5CAA78F6EAC906D32D,
	BurstCPUOps_Div_mD0EB88A8B7FF8B53E78EE67430F65220592A08AE,
	BurstCPUOps_Pow_m155D6B4861FB759C5C675A3687E2334C03DEA788,
	BurstCPUOps_Min_m9C8E1D198A0E647377A2560C4FDA8A07DD0103DB,
	BurstCPUOps_Max_m81C9C9E8B5B66D6965206E2F700C333460A19CAD,
	BurstCPUOps_CopyAndReshape_m95940C3CBE6BEA65CCEFDCF050E02D087F988ECD,
	ComputeKernelLibrary_Dense_m99D2205E1D9DCA5216660F051FE8C37A3EFA6432,
	ComputeKernelLibrary_IsT8x8_R8x8KernelValid_mC258E258DA344DF4AACAC1FDB701845987CE043A,
	ComputeKernelLibrary_IsT2x32_R8x8KernelValid_m610B3A3E62E18786BFCC74570135A93D9754CB19,
	ComputeKernelLibrary_Conv2D_m7A9017F110677C43F27ED46110486A3DFA68C32E,
	ComputeKernelLibrary_DepthwiseConv2D_m27F4BD0A80145E28FFCE60E521F8B62E43200E51,
	ComputeKernelLibrary_Conv2DTrans_m79F1AD3949DDA21B39B9D8DF62300B4E6C28F288,
	ComputeKernelLibrary_Activation_m42C07606B6E6994E283051EAB2CFB8A267015619,
	ComputeKernelLibrary_PRelu_m1219573359E197B1D66EF6D98BBB40A27478469D,
	ComputeKernelLibrary_Softmax_m4E91C696087F44DCC037AE44E736DDB61EA94F3C,
	ComputeKernelLibrary_LogSoftmax_m1A76F5008D6A41212271B29D9B1DBEC025C8499E,
	ComputeKernelLibrary_ScaleBias_m7D1EF63BC835C0653581996C6EE71293D3039A44,
	ComputeKernelLibrary_Upsample2D_m8472F9C4B14CAA5D65EC8C99DF947AC9A200412C,
	ComputeKernelLibrary_Pool2DReduce_m725A906C898424982BD37A3B81A387B797BD60CB,
	ComputeKernelLibrary_Pool2D_m8F1B93D5B10FF9F4049667668F30C6538E7FCCE7,
	ComputeKernelLibrary_PoolAvgVar2D_mA08DB345D9061D9614EA1DF0A6640F554E50DF59,
	ComputeKernelLibrary_GlobalPool2D_mCFAB95DE1D56E6E4EDD11A950D4F92ABB4CA9493,
	ComputeKernelLibrary_NormalizationTail_mA8C28576BFDC8541B72D99C5FBBD2ACC1F1BC207,
	ComputeKernelLibrary_Copy_mE038C080C9B7C64F86E758AE1DF7F897F09A887F,
	ComputeKernelLibrary_ReshapeFromNHWCModel_m12EE85C427EB828D2C2F3DB3DA2FD96D86998D4C,
	ComputeKernelLibrary_Padding_m69DE7CFE84589FAFCC73070663A7E51B719F3E44,
	ComputeKernelLibrary_Broadcast_m7DE240290C169B28F87A2CD85875D9DF0613E358,
	ComputeKernelLibrary_Int3_m44A2A3B250962403C33957A19A8FCE646EF06863,
	ComputeKernelLibrary_BigO_m1DE8D9FCE295F86BEF1A6040CB0C9788D0C6BBDD,
	ComputeKernelLibrary_StrictAnd_m553EBE633A8336686DFC1628203C548D768AEB71,
	ComputeKernelLibrary_Strict_m66550BA2D4D1A364FEF85DD17BD2B0183347012C,
	ComputeKernelLibrary__ctor_mEB06FBD8784B47208A05869FAED2748B184AAE1A,
	ComputeKernelLibrary__cctor_m2C02AB9039675A88199219A9E5557EE05A7C7570,
	ComputeKernel_get_shader_mE390432CB7F5C680303E413AD59A80D5A1131450_AdjustorThunk,
	ComputeKernel__ctor_m1906D71A4B14C5AEA32BBE952C8D52D03FE76096_AdjustorThunk,
	ComputeKernel_SetTensor_mFC6EB464BE5B6D5E51BD30953F2C279E6ADEC2B3_AdjustorThunk,
	ComputeKernel_SetTensor_m0C63A6A07F15DA93D93DB034BCE5EB453DABBEF7_AdjustorThunk,
	ComputeKernel_SetTensorDecl_m315056AC698EE19EE43717F4853A469F9824CB7C_AdjustorThunk,
	ComputeKernel_SetTensorDecl_m27ECEDE7036A50A33ACB5155110035D9AAE896E3_AdjustorThunk,
	ComputeKernel_SetTensorBuffer_m8CF53145BD1F73D49D22246058E59E314142332B_AdjustorThunk,
	ComputeKernel_SetTensorBuffer_mA19F9F6C1AEB0E230A0B55C69A03B725E5C97275_AdjustorThunk,
	ComputeKernel_Dispatch_m1EF6B1340E5B17727F59C0E512CF9E05DBEF64AE_AdjustorThunk,
	ComputeKernel_CalculateEntryScore_m4347B32A011DACA09BF5E1C3CEB83E82B7005C1A,
	ComputeKernel_BestKernel_mE06B961723093BCD09DEA6A73A079EB46DFBEBDD,
	ComputeOps__ctor_mB38C17E7CAA0BA2BFE8C2016395185974A09F403,
	ComputeOps_BestKernel_m7B0B08466DC0AF8E619B8EC0E9D623C8DE1B11F4,
	ComputeOps_CompileKernel_m8D140C96DEDD6E417F7099C30A8B84214DBFF64F,
	ComputeOps_Dense_m16EB96F66DBED4C44690064780FB9C8D85CE2914,
	ComputeOps_Conv2DWinograd_m4D554F5A933859C10488ADF0AB33987A39FDA006,
	ComputeOps_Conv2D_mF02DEB0769A7479BE99DFC42F6AA587E031F96C1,
	ComputeOps_DepthwiseConv2D_mA4A4B6B967DCFE64D140B1FEAB2CE0300E73D959,
	ComputeOps_Conv2DTrans_mB7C7EF39F3172873106DCAD6E22045FF3BE5F187,
	ComputeOps_Upsample2D_mA42EFF27492C3A534A190AAA5751702DE36010B8,
	ComputeOps_Pool2D_mE8FD61AB63DAADC9C2DA519B280A73C61B08468B,
	ComputeOps_GlobalMaxPool2D_m81F9339B5A60A48483994F2AEB62657A3ACE1907,
	ComputeOps_GlobalAvgPool2D_m70782D359D69EFE574E3A127EE2263D091D659F9,
	ComputeOps_GlobalAvgVariancePool2DReduce_mF9529C10E2FF0B26AF0B5BCA66B005D01EB60FD6,
	ComputeOps_GlobalAvgVariancePool2D_m03A82B565AE2EE9B6BBC66220E3DAA1C7415B4BD,
	ComputeOps_GlobalPool2DReduce_m145F57DFBBD8777EF6D56A3B9FB24B39A4A73E14,
	ComputeOps_GlobalPool2D_m9B7BD2306C0E6378BB9B3A7C2A0EC0505E0769EE,
	ComputeOps_ScaleBias_mFDE06679B6E58098AE06EBE011673D05F6EBBB31,
	ComputeOps_Normalization_m902025D75DF028C08FB888C439ADD8A41D51A898,
	ComputeOps_Activation_m6027F4C1427B69C1270B91BE8102A8E33F141C5E,
	ComputeOps_PRelu_m6DD31E9F7999E4D5F126E21CA1527CD897BB2CA3,
	ComputeOps_Softmax_m412B8B64BFF295F63AED1F1B57501E737F2DE11F,
	ComputeOps_LogSoftmax_mADFD0583121ED3653211C87FC225C436BEE13E68,
	ComputeOps_RandomNormal_m077DD2CB48C6CE30DC13594D9B6D170C7FC07C18,
	ComputeOps_RandomUniform_m60047E4F0ED97714638ACA1B0A41BDAD0A39629A,
	ComputeOps_Concat_mFB1F84F4B7E042C4042780CF84A7E9DB70CF3A14,
	ComputeOps_GetInputTensorStridesOnDevice_mA7BC21B78CC6E096EEB032452EB95ED2123977A1,
	ComputeOps_ElementwiseWithBroadcast_mD73A3C7A2070A96BE1CA95DE676F995E036DC198,
	ComputeOps_ApplyPadding_m4833811751E0BE337991E30C7ADA15B29E3A2031,
	ComputeOps_LogicalNot_m814B8119D2E78D97884A94F74FE34E4F07846C6D,
	ComputeOps_CopyAndReshape_NCHW_m72820E0DD15D45C01A8A108C76C173171341062C,
	ComputeOps_CopyAndReshape_m95A2251FA98AD70CECE3759FA26EB2A15BA62E7D,
	ComputeVarsWithSharedModel_Dispose_mC2599EE186D894951E6F4A92936904E2A79D0F22,
	ComputeVarsWithSharedModel_PrepareLayerInputTensors_mC330648370B536334E45303E12C06F7D960054FD,
	ComputeVarsWithSharedModel_CreateComputeBufferForModelTensors_m088D8018EF04666E71154729CEF4778D3F3A53D4,
	ComputeVarsWithSharedModel__ctor_m53AC08AFD81B74D59F266DD90DF88BD03B45D7C3,
	ComputeDebugUtils_LogAssertion_mDFDFAA676479E961F61250F42DE0AF3DD37AF38C,
	ComputeDebugUtils_PrepareDispatch_mA9046DDE4C6FC78395F21DB842C8B317CD616996,
	ComputeDebugUtils_VerifyDispatch_m4A3747A7778A8F94D524686771D719D31F5583DC,
	ComputeDebugUtils__ctor_m81317CA097C9D97C6EB1580BB8C7471EF7201CB8,
	ComputeDebugUtils__cctor_mEDAD1A4114938722A93C68B2B7E1702892E47073,
	PrecompiledComputeOps__ctor_m6B360274F10A0A0F3A0531EFAF670FBB5702090C,
	PrecompiledComputeOps_NewComputeBuffer_m8F005EC3ABD484F8816DA2D82B41F9B92531DC1E,
	PrecompiledComputeOps_ResetAllocator_mDB5145372A046761367B4ECCA0A5475AE12B5D1B,
	PrecompiledComputeOps_CalcModelWithInputsHashCode_mAC00A1B2B4488438964045B8A10A16225907FAB7,
	PrecompiledComputeOps_PrepareConv2dWinograd_m677FB541206DD6EF6A2A018DE1B6A931AD571D37,
	PrecompiledComputeOps_PrepareConv2DTrans_m39706D915109A9987F689017AEA93BC4FD090550,
	PrecompiledComputeOps_PrepareModel_mC380642E4BCCAA26729D89157893A02B6D1B05BB,
	PrecompiledComputeOps_PreExecuteLayer_m34F7D5D01FE5EC93C41F1DC28D705B5450D120DC,
	PrecompiledComputeOps_ApplyUnsupportedFusedActivationIfNeeded_mAFE332CFCE072047A44C013B07BCFC5C45513935,
	PrecompiledComputeOps_Dense_m4021BED5D315D58DC48A852AE15EE842EB692D32,
	PrecompiledComputeOps_Conv2D_m51EAF92F31CE79816B0F40E22D4E146A71D17669,
	PrecompiledComputeOps_DepthwiseConv2D_mC756BEAC4B33A3801F530AA7577606A4D222B255,
	PrecompiledComputeOps_Conv2DTrans_m2CD651728FB2E7A438DB932148FAA8C1C3B105DE,
	PrecompiledComputeOps_Upsample2D_m262C3CB82D2E0DADD60CC1EE7740F5C9F13429B2,
	PrecompiledComputeOps_Pool2D_mB390E278C5E653A36509B0D8F5419874010A256C,
	PrecompiledComputeOps_ScaleBias_m63078CEF76E452BB5199DB856168BAEB1DD6D669,
	PrecompiledComputeOps_GlobalPool2D_m53864565B7DB76E7822B68CF00B130AA8A27C2AB,
	PrecompiledComputeOps_GlobalMaxPool2D_m4C2F3B62C8C14EB026FC54F1853203BD628B0CD6,
	PrecompiledComputeOps_GlobalAvgPool2D_mDC2CB50D2CC329C7BDDAC65267D780249EC71D49,
	PrecompiledComputeOps_Normalization_mC2684C843282C64A73539B03B8FB48C218415EC4,
	PrecompiledComputeOps_Activation_m95F3150B2DAF5290148A413CA19202CA2FE454EA,
	PrecompiledComputeOps_PRelu_mB31E22FC5042C123082D493B7F5DC3B649629A96,
	PrecompiledComputeOps_Softmax_m85498CE7E7CD74758908D65F1EAA2DB56FBC824F,
	PrecompiledComputeOps_LogSoftmax_mAF9FA1788146A5B134B9E206EB2430EEC9B3378E,
	PrecompiledComputeOps_ElementwiseWithBroadcast_m1EB14692AA2CE33FDC07B41F1C0D080DBD4442D9,
	PrecompiledComputeOps_Concat_mAE5A82B79EDB97A8A8989E527B7568ADE1A09C1B,
	PrecompiledComputeOps__cctor_m5FFB5BA2AF49669AAFEBF6F709260E806C0F1564,
	ArrayTensorData_get_array_m425EC1AAC3517996F08F8D7FD0FF45ED8DAEFBCF,
	ArrayTensorData__ctor_m3BAEAEA76F3BD0926C10EEA11EB0BBB0C513F505,
	ArrayTensorData__ctor_m0394B4998667B55315AE38EBE4140C852872EB00,
	ArrayTensorData_Finalize_mC5B382A68793DBF18AE149141FACF20D5A55BE90,
	ArrayTensorData_Dispose_mC11092A3252B4E5F2826F34EF6C3AE598B9BC8DC,
	ArrayTensorData_Reserve_m562860AFDBA9FAA54E383FAB44E9038D8FA64A91,
	ArrayTensorData_Upload_mF9E752C7AE4A9A8CF8B68241BC43FA4610808567,
	ArrayTensorData_ScheduleAsyncDownload_mE43073F7001162DE9AC9B9BCC87A39D0E7D55F2A,
	ArrayTensorData_Download_m618B778A3D5477E82D97F0A8C43D910C4BC86C81,
	ArrayTensorData_SharedAccess_m5FA0296A8DD4196DA519C1D13BD04A7BC620ACAD,
	ArrayTensorData_get_maxCapacity_m63BF03F2CFE9308AA8305C0F4031DF19B1A82CE4,
	ArrayTensorData_ToString_mD843ED3FD11D926683488E4EA61B89B4EEF6F80B,
	SharedArrayTensorData_get_array_m6A1713255C7F9F530000934E023FAAA1DA531600,
	SharedArrayTensorData_get_offset_mDF1319535521E4794F0405DB8CC411C19DC36757,
	SharedArrayTensorData_get_count_mB18D421A20BD58279AF630AAD41BE33CF355EB18,
	SharedArrayTensorData__ctor_m061B3E158FF768356CEDE5717AA8A81AB03D46EE,
	SharedArrayTensorData_Finalize_m1F123F5587D44E5C0FB1DA58776ECFB20B7A019C,
	SharedArrayTensorData_Dispose_mB8775E336F0A065F8E4D9A24E41F1A52A6C7C938,
	SharedArrayTensorData_Reserve_m8088182776B5F9F1F6B4688010F68910E0BF0DCB,
	SharedArrayTensorData_Upload_m335C32EF165A3404752607CEDBB93DC7F654905D,
	SharedArrayTensorData_ScheduleAsyncDownload_m37E7CCCE07306292F260F26D45FD14929ADD70AE,
	SharedArrayTensorData_Download_mE0983C259A0E2AFE40C31ACDA361B89BAA0A8339,
	SharedArrayTensorData_SharedAccess_mC3864C6F17132D4AB24F810AF0E6C09A53365C50,
	SharedArrayTensorData_get_maxCapacity_m8B0E26E4E4D1997CCE21C3E5CE72D8F38B08C078,
	SharedArrayTensorData_ToString_m4393A3BC86D6C7D5DF1FAFE4A1B6E7FA9727D6AD,
	ReferenceCPUOps__ctor_mDD68313AA0AD0E4B3ECB362546DB874526A68483,
	ReferenceCPUOps_NewTensor_mBD643440683183217FAC7EDB138AD54A81436551,
	ReferenceCPUOps_NewTensorLike_mF0182ADB2311F237C2F4140B83CB9796E37E2523,
	ReferenceCPUOps_NewTensorLike_m703B77927A501A1A3AAC47484BF76216A6E55AD0,
	ReferenceCPUOps_NewTensor_m1817E7ACF6AC544CC15A3F9AFCB212A86C480485,
	ReferenceCPUOps_NewTensor_m07B8B052FC1F3B617FF91561A3656C99DCDCE861,
	ReferenceCPUOps_ResetAllocator_mA728F83697B010DDD170422A53DDA59AABDDE7A4,
	ReferenceCPUOps_ApplyFusedActivation_m05172403114B4E4E9F35491CCE1A8ED71E035254,
	ReferenceCPUOps_MatMul_m13514652547CDEC66825D6BC556869DA2CCE61D2,
	ReferenceCPUOps_Dense_mEFCA7EEC2EBA814C676D21D234C09EA2D1C4715D,
	ReferenceCPUOps_Conv2D_m07E2E87A178BEBD17FBAD8FD28B0874C1C253DAD,
	ReferenceCPUOps_DepthwiseConv2D_m73C8B24FAFCBA2FE7A9494A99250C01A23DC3EA6,
	ReferenceCPUOps_Conv2DTrans_mD9A5A30F12040F0303A4E496276F0CFD25AEAD45,
	ReferenceCPUOps_Upsample2D_m01E9A806A5F8DAD84360D692D37E49313594058A,
	ReferenceCPUOps_Resample2D_m8D6DD9FFA248C69A88D130AA2ADB33CFC330C8A7,
	ReferenceCPUOps_DepthToSpace_mF499CAC2FA3DA5899E31922EC6A575B911F57043,
	ReferenceCPUOps_SpaceToDepth_m5E82FE9690838B45FCC8E6CC9B7B1B391BCA0808,
	ReferenceCPUOps_MaxPool2D_m320CF62FDA441D22760BBC2E5A778A3C1A0AE1EE,
	ReferenceCPUOps_AvgPool2D_mD26387F41F0062303867838F1F68355004FB53EA,
	ReferenceCPUOps_GlobalMaxPool2D_m66A888F14F371102A0E1D616DC9EAC53B419772E,
	ReferenceCPUOps_GlobalAvgPool2D_mE320546DD7BE55883159237F5BE04358178B0DA2,
	ReferenceCPUOps_GlobalAvgVariancePool2D_mAC929DC6D37D3FE99341514E8F9301FE393B556D,
	ReferenceCPUOps_ApplyPadding_m48718A3753DE1DBD8CB9CB332DD863350EFE1A89,
	ReferenceCPUOps_Border2D_m680F5B5655DD910F5DBD81C953406CA7B512BC79,
	ReferenceCPUOps_ClampHWToTensorShape_m7EF808F1485CFF8C731581D18F9EAE4644416696,
	ReferenceCPUOps_Pad2DReflect_mA412CC06954A1582F35D4E4F96C51F3A6E77FA50,
	ReferenceCPUOps_Pad2DSymmetric_mAA68F3D34FC79FF70F2613E188B3BF6EEBA307AF,
	ReferenceCPUOps_Pad2DEdge_m996F89B3F311802A09074CE8A7C5250031251A43,
	ReferenceCPUOps_ScaleBias_m70953C381FAE153EC2310D8301C9BAD640A7FA6E,
	ReferenceCPUOps_LRN_mAAE61B8878ADBFB725BB6ABDBD2ACBCB6D976A9C,
	ReferenceCPUOps_Normalization_m2ED31A30113B1BB8A784EC7A3C2FF4F7568EAFF7,
	ReferenceCPUOps_Bernoulli_m2DB9CA8B791B86779D366EC8D610D0AEBF2B8EC9,
	ReferenceCPUOps_Gaussian_mDE4188CF9C56266E565FC02673871436F0F037D5,
	ReferenceCPUOps_Dropout_m2E823A74837A9B2678179918084C585C29E73E37,
	ReferenceCPUOps_RandomNormal_m424B58F2A4466C131AEA20A2646F69396F7A925E,
	ReferenceCPUOps_RandomUniform_m7C70F539293BC4425944B57CEF77904B0E6B3520,
	ReferenceCPUOps_Multinomial_mF69B6C2FB1592C07D411E69970FB6E45C9842825,
	ReferenceCPUOps_OneHot_m3B6325547C606922D98AEFF90D07422923D98187,
	ReferenceCPUOps_Relu_m92679AC0AC8A63AF997F8444A1EF8F6A4DBCB805,
	ReferenceCPUOps_PRelu_mA3D8CEB59B1CFB7601CB8A0CECBE5AFD1498DAE8,
	ReferenceCPUOps_Softmax_m91B4BF50BA12A1A1838A00254E9A28B93D720CD9,
	ReferenceCPUOps_LogSoftmax_mDF265E9435CA01F38AAB45737679DA70BC6D61DF,
	ReferenceCPUOps_Tanh_mB56E7BF351EF4BB8C2E8127FF8EEB1CDC3E7C1A8,
	ReferenceCPUOps_Sigmoid_mBB24C442E6C52813B8F88B37A0B84F83AE94BD7C,
	ReferenceCPUOps_Relu6_m96AB9D708DE9915552FA0E65EC7B36022BE16EC4,
	ReferenceCPUOps_Elu_m97AF4B2C5097AF293894C90E094ABA1E8C03AEBE,
	ReferenceCPUOps_LeakyRelu_m9DC9902A41AD63EC10F75CA6D915F5ABDA989096,
	ReferenceCPUOps_Selu_m84778AAE1201BA497044DB6585915A98AC3C23DB,
	ReferenceCPUOps_Swish_mA06078D884AAB6513060B056D4D4683F56E46330,
	ReferenceCPUOps_Abs_m16D7650CA82CC980337B7A73A06BE68F551400C7,
	ReferenceCPUOps_Neg_m1EEF26B40EE67A5244FF17296E4AFDAE6B26AA49,
	ReferenceCPUOps_Ceil_m72311738280162653F8909A29907DB81F6AFE36B,
	ReferenceCPUOps_Clip_m5000204BF97E4307FC201B6E8E80F5C8A18A7C99,
	ReferenceCPUOps_Floor_m48E352F9762B00D63DF18D1FD7BBE86486B1E3E6,
	ReferenceCPUOps_Reciprocal_mF52325CF174F00D51D96728FC3E2ECD98A926213,
	ReferenceCPUOps_Pow_mFC94307DF9E66C66A6D7468A10E94D5CC0EA50A4,
	ReferenceCPUOps_Exp_m67316964FBD3A32C4418CB1C20360EF40CE6C4B2,
	ReferenceCPUOps_Log_m0AF0B3FDB552EE0987D72BA08BB4FEDFC655E707,
	ReferenceCPUOps_Sqrt_m62CF32F28B603E87F13914883A56EF8B6D2E2A6E,
	ReferenceCPUOps_Concat_mC99310C69F6BB2C7790B19DE85EA4142FC5D0C9E,
	ReferenceCPUOps_StridedSlice_m6F1209623D7D0B776776B2190CD976A41BE95978,
	ReferenceCPUOps_Tile_mCF0D378F0D57E2061C6291CDDBDE1DE52ADA33D8,
	ReferenceCPUOps_ApplyElementwiseWithBroadcast_mD578750D9814A784131CE00DF6D4806036ED8952,
	ReferenceCPUOps_Add_m832C6717D064ADD9F36C28C3C9A9409B8E0A10A8,
	ReferenceCPUOps_Sub_m4241789C5D7331370DD79D57A0B0B1144CEC94B1,
	ReferenceCPUOps_Mul_mB949E937C8EF61E497040DBB43A5040E0F62644E,
	ReferenceCPUOps_Div_mFB7B56872C8F3485D092280327670CCACFE2EBEE,
	ReferenceCPUOps_Pow_mB472035818303C23588EE342379A72B8B4E00D59,
	ReferenceCPUOps_Min_mBD34B42BF2A091153E3D517D3D5699DC0A225CC4,
	ReferenceCPUOps_Max_m4478640CCE0CB7D59AD3EA71455AAFBDA8948784,
	ReferenceCPUOps_Mean_mFA6C46BCDA576F621C0E5C23857C085B3396A445,
	ReferenceCPUOps_ReduceMin_mBB30FBD3E42B49123E09F974257D6ADD537018C5,
	ReferenceCPUOps_ReduceMax_m8750B53D6ABD567BDDE8D601B492D0D2FDB8AA39,
	ReferenceCPUOps_ReduceSum_m2934A5552782EBA55F70FC10FD1EDB7F506311B4,
	ReferenceCPUOps_ReduceMean_m66030455D2F1C4BE0903C7C082F69E2BA4EE5FFF,
	ReferenceCPUOps_ReduceProd_mAAE7D65CB7A324AA54BC39FA143A6946D3170EAD,
	ReferenceCPUOps_ApplyLogicalOperator_mE2B63CEDEEF7F65C487332EADBD1256284E44289,
	ReferenceCPUOps_Greater_m158723A4FD46DEB0B34A5034F8CABAFA8874C7E2,
	ReferenceCPUOps_GreaterEqual_m1EF3776AFE921FF7CFE3CF3D14E79E78ABAED7BD,
	ReferenceCPUOps_Less_m71FF3E77ED60CBC2A449252B7BF41F95C3C9C4E4,
	ReferenceCPUOps_LessEqual_m05A45CD45870FBDAF7B543D7DAC582D7A8584099,
	ReferenceCPUOps_Equal_m5F2B18B62B3B50C5392BFC4B2F8A94843E24D02B,
	ReferenceCPUOps_LogicalOr_m45FB732DD72D712C6F0AF0A27D4DEBDE40F443FB,
	ReferenceCPUOps_LogicalAnd_m0C271EA6B0C442D1D951EDE8D1AA30AEA480D1DD,
	ReferenceCPUOps_LogicalXor_m1B2256B6277928ECE5E5C86E20EE4154A9FBAECC,
	ReferenceCPUOps_LogicalNot_m32DEE4E3F3AABA57D92D99CE49F5E5C0CBC87D3F,
	ReferenceCPUOps_CopyAndReshape_m0E89D9BD0123F00DB7516680923A2D5104EB51D0,
	ReferenceCPUOps_Copy_mA57BDB46A072C47351A9544B30D7D335AC2E6774,
	ReferenceCPUOps_Flatten_m6441BF942441411CC5015335C6E9404911FCFFB4,
	ReferenceCPUOps_Reshape_m138BF2735A1FA82BAC8275434A7AA14BA8898912,
	ReferenceCPUOps_Expand_mFE4772FE2A93882372BE73EBAE6EE08C93E33EDC,
	ReferenceCPUOps_Gather_m0BC10E31AD901F74E9040FE4EF5D470863843D8D,
	ReferenceCPUOps_Transpose_mB3ACC6DED198139B04D62D65CF6A24E65CE0D799,
	ReferenceCPUOps_Prepare_m8D16A95B269A20EF3EE6BDE0730EFAD008E73125,
	MathfEx_Tanh_mFCF880CD99AB7C86874BEE5762FA6B00858D3DB1,
	MathfEx__ctor_m19F1B179511AC5F847D92FE7BCB0B623F4D89525,
	ComputeHelper_IDivC_mA3B38C57C659A35C1666E5542FBE4B023E5F21EC,
	ComputeTensorData_get_buffer_m00042906C6FF966FB479D635EEB05021433F19D3,
	ComputeTensorData_get_offset_m197D65AF529C80E56203B0B842504ED8C6642FC9,
	ComputeTensorData__ctor_m73BBBAF5AC9967655757A9FBC2C099AB01B8F14E,
	ComputeTensorData__ctor_m6A3F32FE7C166A940485A0C417151C935D09BF10,
	ComputeTensorData_Finalize_m823C3E319668A7EA495518DB5479BD0262186BFB,
	ComputeTensorData_Dispose_mF194B2F3CB0A8BEFA1BF223AB18173C8C692DC42,
	ComputeTensorData_Reserve_m6BB1C6430D11D82A329C9698C85DD81221E1FBDF,
	ComputeTensorData_Upload_m773DEEE77CD6A3C7542424A3F0732CF0B88F16B7,
	ComputeTensorData_ScheduleAsyncDownload_m51CCFE07A549D8FA2899468CEC544D88894A8A0B,
	ComputeTensorData_WaitFor3Frames_m02CD3D747F936E7E6B243A2E9A6A0DFE66D01C7B,
	ComputeTensorData_WaitForAsyncReadback_m4BBCE2CE95EE976209EB43FB638D9BD3B1F6EA9B,
	ComputeTensorData_ConvertFromOnDeviceFormat_mD95495794E831B1ED40FEE91D58749ED23C57F56,
	ComputeTensorData_Download_m56A6F1EC7ADEB9DC4C8232430EAC908DBD47E707,
	ComputeTensorData_SharedAccess_mF9F0FC422A436363F46E855E257001D42FF18A8F,
	ComputeTensorData_get_maxCapacity_m06CB626FA139D48666A2D3C183B66888252091EC,
	ComputeTensorData_ToString_m97A2135C89BC71861E8E8C50198C5858E5A80E31,
	SharedComputeTensorData__ctor_mA34AC8C4B252B988962C09698210203CDFCDDD87,
	TextureFormatUtils_IsRedOnly_m321D4F187F5D9FDF32F12D1266A907206FA98138,
	TextureFormatUtils_IsRedOnly_mB982835083BDAD7F0727121D7D57135E3E250D34,
	TextureFormatUtils_IsRedGreen_m4D94BA443D95587B15762705095DBD254B8D699C,
	TextureFormatUtils_IsRedGreen_m2C17E81A34288FCC27DB8C22D2935E259E894C54,
	TextureFormatUtils_IsRedGreenBlue_mA6AA26D8A58D89B92BE248455468CD78A306E89D,
	TextureFormatUtils_IsRedGreenBlue_m139CD6B56E79C0E2AA427EA866546B0F41AFB976,
	TextureFormatUtils_IsAlphaOnly_m5D282815F90297EB1896254672E50D0CFFD326A9,
	TextureFormatUtils_IsRedOnly_mC19FBF22277299D1E34C02B74A7C790E0A892EA8,
	TextureFormatUtils_IsRedGreen_m8F79D94B3BC7E9B2152CAC509D5F3DDAF2D15624,
	TextureFormatUtils_IsRedGreenBlue_mEAF24101BA58205C089EC2512E98B30E8578AC9C,
	TextureFormatUtils_FormatToChannelCount_m463CFF702D2313CC71421FD57DF7D9EDB02C1413,
	TextureFormatUtils_FormatToChannelMask_m230AC8C9A0F483E2F739DA5C1FA4040175CCB2A3,
	TextureFormatUtils_FormatToChannelMask_m396E95504355E9C0AD2EA00EAB90C664900D37A3,
	TextureFormatUtils__ctor_m39ADFB1C8B0D6C185C19AB6F2949BE695131206D,
	TextureAsTensorData_get_shape_m8FEE1327E20053918C281E6389DC6C1F92D7C862,
	TextureAsTensorData_get_textures_mA222AE3B4ADE24ED24A217B89FFC8A43C0B45CF7,
	TextureAsTensorData_get_interpretPixelAsChannels_mB0364FF86DFB61C05F24E496273DC7AD10C0274C,
	TextureAsTensorData_get_interpretDepthAs_m48227AF78035F9570EF181BD10ADF1FD7556C79B,
	TextureAsTensorData_get_interpretColorAs_m3F56E385750C561076C5B86613C35FEEC9F45378,
	TextureAsTensorData_get_flip_mCD5F9757B60718901108EFB69E310ABA44EC3E8C,
	TextureAsTensorData__ctor_m31D0AC0EDA63D735CE59C1971F0A68D0FED5BCB3,
	TextureAsTensorData__ctor_m8073C55DAD3D36A64874AB6109E8C2BD23D50225,
	TextureAsTensorData_Reserve_m0CB61F3084A4F6A3CC53479257369A0F1615FC2F,
	TextureAsTensorData_Upload_mD5BA8E11BCAA6199FB5C4E42EC1C28F2FB0DE180,
	TextureAsTensorData_ScheduleAsyncDownload_m8A8364C67FE1FA4C1AB4D5858717224E0F5BA4B7,
	TextureAsTensorData_Download_m5B60DDCF5DF915CE03C3847DF7E7C2F5640BC287,
	TextureAsTensorData_SharedAccess_m1241A9CB7C7E7DCD3246FF2C25BC671B2781B383,
	TextureAsTensorData_get_maxCapacity_mFF48ADD0FE7F014A62C808676288D65AF9BC0B84,
	TextureAsTensorData_Dispose_m0E6AD90FEF1EB60B062081D491FDC00FD381A5CF,
	ReferenceComputeOps__ctor_m78970125AC9B963679BD5F395EBD1B71B292E0A6,
	ReferenceComputeOps_Pin_mB288085B43CD3374FE22867BC69E7989DC2077E6,
	ReferenceComputeOps_SetTensor_m79CAC2ABBD6E50372674EF04D7E7855A61DB140B,
	ReferenceComputeOps_NewTensor_m8F4AF91303CFD2D62FB90E95C2075F280EF66284,
	ReferenceComputeOps_Dispatch_m232F61BD10C152F053DEFAC5B2EB647FF54B6A5F,
	ReferenceComputeOps_TextureToTensorData_mD41A0E4D25638035BD04819CF8C9EF9BEF3DCCF4,
	ReferenceComputeOps_TensorToRenderTexture_m3988DA9DA59D7DF60E12F12EDBF67E1933416259,
	ReferenceComputeOps_ShouldFlattenInputForDenseLayer_m39A5315255B9EFDE4B73F8044AF7D1737FC90C81,
	ReferenceComputeOps_IsFusedActivationSupported_m2724A2A311A2144A3E05F98231286CEDDBA14835,
	ReferenceComputeOps_MatMul_m6514C53106AB4286DAE52D0AC9D51D6EEFB77D11,
	ReferenceComputeOps_Dense_mA362B631E059B41E0DC048BEF06C86EFE05BC158,
	ReferenceComputeOps_Conv2DWinograd_m9131121F5A0F7EC94100E1BCC62F57D9876B1213,
	ReferenceComputeOps_Conv2D_m32E1D72441E9F0D1BEFCF747A9CAE3C298B1D379,
	ReferenceComputeOps_DepthwiseConv2D_mD0543FD16C18EAA40F82E29617A86EF7757A8A48,
	ReferenceComputeOps_Conv2DTrans_mC42EE657C717F7D77D8BADE961EF704AE255CE48,
	ReferenceComputeOps_Upsample2D_m42BDB89695D9FC310F956F9B8C461025A65C3DF9,
	ReferenceComputeOps_Resample2D_m6421B498F31E7C1A4C3751967F602FB2D7B67B95,
	ReferenceComputeOps_DepthToSpace_mCACCFA6479C3FF21E842AC68A47785FE80928C8E,
	ReferenceComputeOps_SpaceToDepth_mAC34378C035CF1CB1E2492F35B29CE2E526719FD,
	ReferenceComputeOps_Pool2D_m9DC194E6198CC0BBE462C62B723EEF66A8531D0A,
	ReferenceComputeOps_MaxPool2D_mCD3B432F8A5DFF00D1CC298F50661AECCC257414,
	ReferenceComputeOps_AvgPool2D_mE2B305117136C4ADE1A329CA854A9DF9E26FF84B,
	ReferenceComputeOps_GlobalPool2D_mF67CD0407EB528D51116E619685A79CAD3981F89,
	ReferenceComputeOps_GlobalMaxPool2D_m16D88D91DB3F4EE2F4D0DCC1CF7BF96E5EDE2CDC,
	ReferenceComputeOps_GlobalAvgPool2D_mD6E68919EBAAF3269233AAFA6CC7451CFD215B83,
	ReferenceComputeOps_GlobalAvgVariancePool2D_m43367BA7D20B624C53B70CEE8CB433EC8D9163A1,
	ReferenceComputeOps_ApplyPadding_m52137EA74836862E7C92A89FFD55780CF1F95D6B,
	ReferenceComputeOps_Border2D_m9E2F8E425A466FD3B8BD8722222986E1ADF209B2,
	ReferenceComputeOps_Pad2DReflect_mDFE81E8F0C92BA36024E372AB8883146A5F65B74,
	ReferenceComputeOps_Pad2DSymmetric_mED67CB2B1324EE59209FE69436F47696BA102636,
	ReferenceComputeOps_Pad2DEdge_m450FCE26FEFE026D56625287AD8864AC15F947BD,
	ReferenceComputeOps_ScaleBias_mDFE456548C700C14F900CE39E14DE20166A54055,
	ReferenceComputeOps_Normalization_mF7C5C3C80361CADA3269B18AA3738DA14B8C77EB,
	ReferenceComputeOps_LRN_m4C61E5506E8FF0FEA5FBEE2A3B08532FF4DD3A7C,
	ReferenceComputeOps_Dropout_m1B8AD2ADAF07D5D156D9141EDFC9889269A844AC,
	ReferenceComputeOps_Activation_mAFF6D364E313C17E5769755CD04896C550072F1F,
	ReferenceComputeOps_Relu_m39EAA8E5B3E6E37F37EAE6E85CBBA4EB7D5072A2,
	ReferenceComputeOps_PRelu_m9F04D170BE452D5A9F75B48603D1A844C98DD194,
	ReferenceComputeOps_Softmax_mD93635250134EAFFAD6E680D386E4636B09BE095,
	ReferenceComputeOps_LogSoftmax_m403BF63649343FF97B033CAD45993BF0ADD3F58F,
	ReferenceComputeOps_Tanh_mD65EDCF25CCA8F77CCA040E848F06DB15D536900,
	ReferenceComputeOps_Sigmoid_mBDAFE69AFEED29AA8B87F049F0583C9B52924112,
	ReferenceComputeOps_Relu6_mD2D288001F5E45C9F535B823620D8332711606EA,
	ReferenceComputeOps_Elu_m64A491A8C9F1A15D21819D24D99CFFE58A54ED69,
	ReferenceComputeOps_LeakyRelu_m2DC5C6A715212F5DD7B6EE8162CE7933BFAB4DF5,
	ReferenceComputeOps_Selu_mFBD79D9EE3969B56A59B182231BF46198579AEEB,
	ReferenceComputeOps_Swish_m0F2797F6B162157B3AD1E1AB513422F1CF1F1F74,
	ReferenceComputeOps_Abs_m33E76048163548BC039465F73E1BE9574F7E973E,
	ReferenceComputeOps_Neg_mC7DD206ABF96DBF2504BF290A439CE442A211DF3,
	ReferenceComputeOps_Ceil_m4525F2421B75E83E579975AEB4781454B5CA8E5C,
	ReferenceComputeOps_Clip_m0EBA5A582A747788E6F23DF3166A3288FB9B7CBF,
	ReferenceComputeOps_Floor_mE7C099E2F696E7DA4C69EE5DFFD3E24BA2421032,
	ReferenceComputeOps_Reciprocal_mE36309D0D30F8A9A1A5FB234F24B1DCA7BB615B6,
	ReferenceComputeOps_Pow_m21DD6C2116B533DC977A1C6EFF6549508EF0F4E7,
	ReferenceComputeOps_Exp_m6D2F897F0C482962DDBBD9D8B128045A24498570,
	ReferenceComputeOps_Log_m26E892CE44353769485B0FB1D8A4205D734B50A8,
	ReferenceComputeOps_Sqrt_m335AC3B56704799ABF738C5A99CC2C259453E722,
	ReferenceComputeOps_Expand_m0CA1715C027A4773F0505ADCE615A56D8B377BC9,
	ReferenceComputeOps_ElementwiseWithBroadcast_mC67B4ACED328458E8371545743D45E273117E84A,
	ReferenceComputeOps_Add_mB4CDC6ED67AD3B8047705C5EE5502C1AB9AC2A9E,
	ReferenceComputeOps_Sub_mE1E7AD3EF81F91546723D67807207D510E0FF3DF,
	ReferenceComputeOps_Mul_m9DBAEF69F72F1944E96729C74DA7AE3B34B9C606,
	ReferenceComputeOps_Div_mF6D55B329BDDBA8F34156D7C6793A9C02A0EB48B,
	ReferenceComputeOps_Pow_m4490F5C4562D19EE1EC80CA5322D790A813C6793,
	ReferenceComputeOps_Min_m47602A8FC31D2DCB3DC060FCA7DBC7DE3C8E0723,
	ReferenceComputeOps_Max_mD629CBC759A681964C446832901B6D103202E44A,
	ReferenceComputeOps_Mean_m8BF848D64A96CA11F15D9DA5D9570861114FBE77,
	ReferenceComputeOps_Reduce_mCB5F475BEB9CBB2703C5D98A6D4E8A0F9487B9B3,
	ReferenceComputeOps_ReduceMin_mB45626444ECBC2EBA33E9DE8EF627D019D72C6C9,
	ReferenceComputeOps_ReduceMax_mB4FE3689151450CA6DD35F13603FCE5BC8898765,
	ReferenceComputeOps_ReduceSum_mC6088AFADD85CBBD2A178F6E0D7A6623EBA8110C,
	ReferenceComputeOps_ReduceMean_m24A3DF2BD140E376B3A555FFEC100920E08DF1B3,
	ReferenceComputeOps_ReduceProd_mB3FFF9B9AF1835951EC8816AEDECC718A4A09BCF,
	ReferenceComputeOps_Greater_m27A074761DDD1C38FDC81CE883290DC91C0EA083,
	ReferenceComputeOps_GreaterEqual_m85438CDA913ED9C82F48D66EDF62DAA67A6E6397,
	ReferenceComputeOps_Less_m48697328022764E76DD14CEBD13560D0C096B7DF,
	ReferenceComputeOps_LessEqual_m1051108674C6601A96202B3B97589968E9ADCBA7,
	ReferenceComputeOps_Equal_m44FF30511C709EE55FA8AE69770C3B25B2375536,
	ReferenceComputeOps_LogicalOr_mF53F15EEA3870230D1C3D63F0BFB69669078F6A3,
	ReferenceComputeOps_LogicalAnd_m91CFD2EDC17665B706D28752F90EB60517652E45,
	ReferenceComputeOps_LogicalXor_m6F4EDCEB88B4B7BD4A3DC80D76C095EFC92FD182,
	ReferenceComputeOps_LogicalNot_mA2F7A1347771126110141E365B35BAF6C0AF4D63,
	ReferenceComputeOps_CopyAndReshape_NCHW_mBCAFD1F9D61770AA9B04FE080C5C98775725FF74,
	ReferenceComputeOps_CopyAndReshape_mF640E1C24B238B6B5AC7DBF3263F4C82EF0348BF,
	ReferenceComputeOps_Flatten_m4547FCEB30C6FAFA59FC4313A6A55988E0BB37DD,
	ReferenceComputeOps_Reshape_m86B0290E8C8CBE00E3961A456474E62478B099C6,
	ReferenceComputeOps_Transpose_mA74836F4FF9D7993774428747823A3C3433338BA,
	ReferenceComputeOps_Concat_m68019851C02D07ED1DBCBA80B783F0DA2F44748F,
	ReferenceComputeOps_StridedSlice_m36ADD677093043D14492E81BE526AD58258AA1B1,
	ReferenceComputeOps_Tile_m322E3060A0FCEB2D56CDE8B0AD7AD917DDC444CD,
	ReferenceComputeOps_Gather_mC940057F2CA1876107B4FDC195682794D9F9901E,
	ReferenceComputeOps_Copy_mE4A78A65DBD76120AE1768BDB0CA8C9228BB69F7,
	ReferenceComputeOps_Prepare_m5AD3ADDC254546AF06443106AF3F3D43DE4E0F06,
	ReferenceComputeOps__cctor_m494817A327C6DCF92B250E72C41DCE0AE2742545,
	ComputeFunc_get_threadGroupSize_mD3791CE3D5BE600F10AC28AFB040841838C49002_AdjustorThunk,
	ComputeFunc_get_width_m3FB4CF254EF494300BC7DAD8AB01294B96BD4354_AdjustorThunk,
	ComputeFunc_get_height_m01483F070B7165BA2D3041290B6CE8FBA0A344AF_AdjustorThunk,
	ComputeFunc_get_depth_mAAD50C0ECF48E4D4CF0F08EE46C07D2C14ED9E88_AdjustorThunk,
	ComputeFunc_GetTensorDecl_m7FAAA5A004132B7BD531A89E367DF240BF41383D,
	ComputeFunc_GetTensorData_mBF1E716080528FB9388E523295F1B20AD48BBD80,
	ComputeFunc_get_dummyTexture2D_mB000C07FB2ED6CAB171217A0DDBFE94B44A0FB08,
	ComputeFunc_get_dummyTexture3D_mB1B5DC2EDB3229981BEEBFE0D91BC67D1878F3B4,
	ComputeFunc_get_dummyTexture2DArray_mCE714E4C1BDF830A20E8B199EFE5272B7A1323C2,
	ComputeFunc__ctor_m9529DDA568AEF1EF65664009421F458EFC91FE89_AdjustorThunk,
	ComputeFunc__ctor_m3BE3478CD6285D34342977049F9FABD427B81664_AdjustorThunk,
	ComputeFunc__ctor_mD3D8FAC46E094A73FFA160178E6C87D3B9331F5B_AdjustorThunk,
	ComputeFunc__ctor_mEFCF989D5D68895324F50475DE69E4706B3880A9_AdjustorThunk,
	ComputeFunc_SetTensor_mA150FEBFBB8726D495B585530C9B86D7C450A7BC_AdjustorThunk,
	ComputeFunc_SetTensor_m6AB062D9F53452BB3E2974A07EF7082FD9D2331F_AdjustorThunk,
	ComputeFunc_SetTensor_m0812492D6BFDB6757427722F8D2DC2D6DA91ADFC_AdjustorThunk,
	ComputeFunc_SetTensorDecl_mA2D7527BA08F00734B04A2A8BA583825BA07A404_AdjustorThunk,
	ComputeFunc_SetTensorDecl_m67309E8200A7E6E820F6896BADE0125E9F3AE2B9_AdjustorThunk,
	ComputeFunc_SetTensorBuffer_m9522CCD1FF83F3FE670A42F3B8FACA18BBDF647C_AdjustorThunk,
	ComputeFunc_SetTensorBuffer_mBEBA7B4DFD6B45597E7D0A625DB639479EE2FF07_AdjustorThunk,
	ComputeFunc_SetTexture_m17967F3D3C2284C81269241017CB4278F58C3CD5_AdjustorThunk,
	ComputeFunc_Dispatch_mCC2EADE09C8B6FFC4CCBBCF18D8E0B7E184630D6_AdjustorThunk,
	ComputeFunc_Dispatch_m205BBCB031C45D7CD1B6CA071670945CA6CBC624_AdjustorThunk,
	ComputeFunc_IntDivCeil_m46ED6F038D3E03282F8CE1BADDC59CF9D99F1685,
	ComputeFunc_FindBestKernelMatchingDimensions_mD37205B0B51943B7F7A16C0BEAC3831293CF367F,
	ComputeFunc__cctor_m4699F6AF4669ECF8524F82EC716CA4FFAEB240AA,
	UnsafeArrayTensorData__ctor_m149C5BEB7CA0DFE1E1B09BFCF42ADC81D4C1E070,
	UnsafeArrayTensorData__ctor_m5D3F13F688B842A90B40BF320C8F60DB93F8DF0D,
	UnsafeArrayTensorData__ctor_mFAB80477EFA759A27E8F7EEB2D52756D673BED4F,
	UnsafeArrayTensorData__ctor_m618776D2DDC9618F839EC5C22A210F3CEAB39D7C,
	UnsafeArrayTensorData__ctor_mD4009B50DCE0B86F4C8C6AE3A6857F7E5FAE6C52,
	UnsafeArrayTensorData_Finalize_m3CC6F9BB70460923D33E6F2783AFF2984E830999,
	UnsafeArrayTensorData_Dispose_mB5D75E1B3D8BA406CD273DC0756D72513476879A,
	UnsafeArrayTensorData_Reserve_m7CF5FB68A4C3780B0C5AED9AA13F3152613B44CA,
	UnsafeArrayTensorData_Upload_m27D28A8AA9041355D411665509EE6EFF908994F9,
	UnsafeArrayTensorData_Download_m29CA2F0B08DE449D1FD92C6080B5A21CD6FFDE36,
	UnsafeArrayTensorData_ToString_m7C24DAA2A28E317A27EA40439E19D04FE23EAD4C,
	UnsafeArrayCPUOps_get_blas_m23D3123C2FD1FFEEBCC575252E1C135E18B13476,
	UnsafeArrayCPUOps__ctor_m5FB84147B3829CB24E248ABA4F5518A08435AB3E,
	UnsafeArrayCPUOps_Pin_m016E0895EA7E0FCE9840DCF073F2177C2DA395D0,
	UnsafeArrayCPUOps_Parallel_For_m47802FA70625B1120955CE0AA91B8430577B5E46,
	UnsafeArrayCPUOps_Neg_mED3231CE876BD30415D7524A91FD28DA8C10C06E,
	UnsafeArrayCPUOps_NegInnerLoop_m742E8C5C40A5B4E55AA74242EFDE34DB3B989EF4,
	UnsafeArrayCPUOps_Relu_mE12EBFE0388C47544CE5E39BDFFDE41CEE0C268C,
	UnsafeArrayCPUOps_ReluInnerLoop_m6F4DBD96C2C25078F5FD07849273816CEEF54CA2,
	UnsafeArrayCPUOps_Relu6_m22A80FE6FF0B4CF5C3561071C5B0447DB51B3B41,
	UnsafeArrayCPUOps_Relu6InnerLoop_mB1E79BBEA04B38F9D9E03428D7B8E994A5C10A71,
	UnsafeArrayCPUOps_LeakyRelu_m009BEBFA78A7BE629C687A4FB1F5519EB2DA95CD,
	UnsafeArrayCPUOps_LeakyReluInnerLoop_m4334D4E0D512298D6BB01D329211BE67395FE952,
	UnsafeArrayCPUOps_Elu_mECA511B48B7DA6615BDDF29433BD34121148AFA1,
	UnsafeArrayCPUOps_EluInnerLoop_m39BF6D936379CDD5EF175F7ED31604BF79BE0E21,
	UnsafeArrayCPUOps_PRelu_mDBD3FE604240E9ECE426FDFBBE8FFC9928BE70D5,
	UnsafeArrayCPUOps_PReluInnerLoop_m43A22D7E0D569CEE12131931BBB5FE61713B57F0,
	UnsafeArrayCPUOps_Sigmoid_m277A4006A10A618CE90003BCA3FFDE8C34B73313,
	UnsafeArrayCPUOps_SigmoidInnerLoop_mB364299D9E14C37FDC12A6932D652A4E84D6E224,
	UnsafeArrayCPUOps_Swish_mD0D85B3B04F57E454C0C47B0ECB91F0E7CBBB16E,
	UnsafeArrayCPUOps_SwishInnerLoop_mADC040DF3B7F031FA5D4A1B1689DEF54D0D58D37,
	UnsafeArrayCPUOps_Exp_m3444D1EBA1302FBF61308DBE8B810F4B03FD0F3E,
	UnsafeArrayCPUOps_ExpInnerLoop_m0905664C0529197AF54BFCEDBA639D8F83532A49,
	UnsafeArrayCPUOps_Sqrt_mF30362F7D779FDEB47AB556B7D05D3DA56F26D17,
	UnsafeArrayCPUOps_SqrtInnerLoop_m17D2DAFD37F3231F171F9E95A867215A4D7FCA0E,
	UnsafeArrayCPUOps_Tanh_m44D616261EE532B6A799513A61918A87C62D300B,
	UnsafeArrayCPUOps_TanhInnerLoop_m800AC9BFE09D016169A4E10F09C8EE24A12A9E8E,
	UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m71C8DD6BC8F385A62C4EFB388708DBF39BD1A2FE,
	UnsafeArrayCPUOps_CanUseModuloForBroadcasting_m7DA75DCDA2BD597A1BABB224EC11E13BE15204FC,
	UnsafeArrayCPUOps_ApplyElementwiseWithBroadcast_m48E495B0E43A20769937DC234EBE286DFE93678E,
	UnsafeArrayCPUOps_Add_mB281518C168C523128B0AAFFEE9E0944FCE27047,
	UnsafeArrayCPUOps_Sub_mE25B33E9755F5AE6DD601E3C5EBF6C08B57C3A56,
	UnsafeArrayCPUOps_Mul_m1F760D8D969309F7D03EEBE129D80970173E159E,
	UnsafeArrayCPUOps_Div_mB302C8413D83D00D273423F1DCD3F407509CB89C,
	UnsafeArrayCPUOps_Min_m000155015712705432342CDDB0DE735CF03AA4C4,
	UnsafeArrayCPUOps_Max_mFCD3FCA8727DC634B838AD02662A13289C8941B0,
	UnsafeArrayCPUOps_Greater_m0C0B2A3B1FB07344C9A7E55EEFB85656252643EF,
	UnsafeArrayCPUOps_GreaterEqual_m22E0D820A8BDBF8977833C8DEEF309003426930E,
	UnsafeArrayCPUOps_Less_mCE8F11B993A0CBF1A5042F2F20B226B302F2F82B,
	UnsafeArrayCPUOps_LessEqual_mB64EC5A565E99CF5093025536630483241E4BEB6,
	UnsafeArrayCPUOps_Equal_mBF07FB080180521BA9212ADCD4BA44ABBF0B0A5D,
	UnsafeArrayCPUOps_LogicalOr_mB7A9DA7428A63FBE82D3EB6CB657F8E33E968B11,
	UnsafeArrayCPUOps_LogicalAnd_m93060C5AC53B8AC82DF75A4642CAA7E3CC58774C,
	UnsafeArrayCPUOps_LogicalXor_m867D8EF47A807699683A368781154657F9A2705E,
	UnsafeArrayCPUOps_LogicalNot_m6D34ABB8AEF2D44FF2F1D33A774971556A21834D,
	UnsafeArrayCPUOps_ApplyLogicalOperator_mDCB2F4E1D2A012605C041E72E9B124F975EB91D9,
	UnsafeArrayCPUOps_MatMul_m7318F15FF30AFEEEAFDB74ADF1179C5F0EE616DF,
	UnsafeArrayCPUOps_Dense_m3EF273082D0C5B6E1DE62C22DF1C9DAE17288795,
	UnsafeArrayCPUOps_ApplyFusedActivation_m10FDB5336F2E1E1708E387B386FF5DD6349E67AD,
	UnsafeArrayCPUOps_MaxPool2D_mA7699AEAA51C669FC11C1CF04F913903BB2C1C94,
	UnsafeArrayCPUOps_MaxPool2DInnerLoop_m6590EAE3DB6EF66B01AFC4D91CAF90FEA628AE52,
	UnsafeArrayCPUOps_AvgPool2D_m6B662FEAA3FD820189CB3B5669D32B30847527E0,
	UnsafeArrayCPUOps_AvgPool2DInnerLoop_m7AAE195D21D8739D38693097AD011C81DF174648,
	UnsafeArrayCPUOps_GlobalMaxPool2D_mF5D4116C938FC9369BD42F9195F8E744DCF51E82,
	UnsafeArrayCPUOps_GlobalAvgPool2D_m3D97CF91208529D8F76796A06AF358FF50DBF1B3,
	UnsafeArrayCPUOps_Conv2D_mAF80BBDC75F5BA7361C8E91283DD038BB2028FB0,
	UnsafeArrayCPUOps_Conv2DUsingIm2Col_m2BD0E0D55D2FD22BCA12970E809AD342BD6C6158,
	UnsafeArrayCPUOps_Im2ColInnerLoop_m3D0E21BB7668F3CF52B26E342F4C1B1A7CC84520,
	UnsafeArrayCPUOps_SafeIntDivCeil_mB8D602D4782F3CA41AE0378D2363DBA477F2A861,
	UnsafeArrayCPUOps_Conv2DUsingIm2ColSliced_mA51FF0091CD020D651AF63798C1BE55E7F61E807,
	UnsafeArrayCPUOps_DepthwiseConv2D_m6FA428703B94BF146D2A002B459B721E04884147,
	UnsafeArrayCPUOps_DepthwiseConv2DInnerLoop_m056B60DE40EF6689465533A80B5749A749B18355,
	UnsafeArrayCPUOps_ApplyPadding_m2694F05950F8885FE88A9F105F8955585654DC9B,
	UnsafeArrayCPUOps_Border2D_mE5650EF66F3017B6EE1A4A543CD9BDEE708503A0,
	UnsafeArrayCPUOps_Pad2DEdge_m1AD2BCF5C5EBBE9BDED51DD4B5DEF1C7CD596116,
	UnsafeArrayCPUOps_Pad2DReflect_m3D722CCEAAB52F29F42C150B8C0EA641A8C48748,
	UnsafeArrayCPUOps_Pad2DSymmetric_m7214D530C33202353FF057FACB61E7B33FA8569B,
	UnsafeArrayCPUOps_CopyAndReshape_m1E01903F67CBB3824ABF6A2515E6B80246922F49,
	UnsafeArrayCPUOps_ScaleBias_mC1792119408639D9C99A84777ADEF71D067E28B2,
	UnsafeArrayCPUOps_ScaleBiasInnerLoop_mE416969E845DE39D8A1DE41D8A8EF177D6BCBDD8,
	UnsafeArrayCPUOps_Prepare_mD014DEE7AB00CD26FB3D762EC5564BC19AF4DEC4,
	InnerLoop__ctor_mC09F5DFC192A0808429039EFA5B3982B22B510CF,
	InnerLoop_SetState_mA441C72E23213D113ECF41E2C927062E6E575837,
	InnerLoop_SetState_mABD244914264DCD09A8B274A32442A2A7A58FFE9,
	InnerLoop_SetState_mF679DA5D504159DE4333927CFDB47467D6325ACD,
	InnerLoop_SetState_m9E2AFD80C4ECB833913A3DCFDCE97B2B4BF16059,
	InnerLoop_SetState_m781FADCDCB0B78C9FAEA2C367002209E82654244,
	InnerLoop_SetState_m8CA2932BC10DFD77B34062784AA3FF667E1A6ACD,
	InnerLoop_SetState_m906A7769BE54BA5B89BB1267635ACF546814E319,
	InnerLoop_SetState_m506F13B1D0693700C242E8A2F64F0E5F44877949,
	InnerLoop_SetState_m6CE47C9ADFF1E720C1DC3BA5A3B47467631507D0,
	InnerLoop_NegInnerLoop_mCD3F00CA34B85C01C56A32D2E7C8137D4F48937D,
	InnerLoop_ReluInnerLoop_m114BABF4E6A7D16BDC3B2D0DC06F23039573E31E,
	InnerLoop_Relu6InnerLoop_m8C4257AF9D5A3A2D158D1F6E73B4760B20D74905,
	InnerLoop_LeakyReluInnerLoop_m1F3D3F965CA15A025BB207F33C0CE40C8F1822D2,
	InnerLoop_EluInnerLoop_m7138FA9B038F69A26732BB935C7E1731B6F87061,
	InnerLoop_PReluInnerLoop_mC0665B402B470A49867403B1CC78AACA111FD0A9,
	InnerLoop_SigmoidInnerLoop_m62CE116232C8E08707F37AE7E9C5BFFD76E9235F,
	InnerLoop_SwishInnerLoop_mDD07B5F374F66E629E4995DFF424C252870319A3,
	InnerLoop_ExpInnerLoop_m7854066B1897BCBCA8FF1AF27A077161CB383B47,
	InnerLoop_SqrtInnerLoop_m2DD86BDF8F0E4AED996F9072D73C0681D2510F48,
	InnerLoop_TanhInnerLoop_m543FBB8B6FD558C36F918CF7DEA01C816256DAB8,
	InnerLoop_AddInnerLoop_mC684B7B5A6E3E9574C1557E63E388BA8D02D98FE,
	InnerLoop_SubInnerLoop_mC067D83B419DC436265C58F8021176F0849C6FF3,
	InnerLoop_MulInnerLoop_m2C40981A795D000F438C30EA496859D84D77DA5B,
	InnerLoop_DivInnerLoop_m97ED44595BAE44A4FA74F83E47A1B7657C525E0B,
	InnerLoop_MinInnerLoop_m30DD7E1E796439012E688EF77653CD13833DE2E5,
	InnerLoop_MaxInnerLoop_m43449607A29FF59C31EF949F416A1E59FDDF294B,
	InnerLoop_GreaterInnerLoop_m9D3363DCDBF53925A785A888D0DC47D0479DF73F,
	InnerLoop_GreaterEqualInnerLoop_mC78A3C27B24A935EB925CB87DC507813DB5D072C,
	InnerLoop_LessInnerLoop_m912C35FD610B49290ACEB78F7E97667E7E134209,
	InnerLoop_LessEqualInnerLoop_mAF29463BD6D79447D00EDE0662213165B1BED8B8,
	InnerLoop_EqualInnerLoop_m3712B3BD5BF261416626C0F8D2FB027412C669D8,
	InnerLoop_LogicalOrInnerLoop_m9F20D3E07BF94B1A658CF7722E9F6A03675C39C3,
	InnerLoop_LogicalAndInnerLoop_mE195A5B79E99BE018182735FBC2F053B05C72532,
	InnerLoop_LogicalXorInnerLoop_m95B428956105D50C03BCADC199E3CB4D0F5F78F2,
	InnerLoop_AddInnerLoopNoBroadcast_m653773C2756CB809B14D8158BE8233527A663318,
	InnerLoop_SubInnerLoopNoBroadcast_mA2AC87338AA7AEA659440B982041E4A680BE9893,
	InnerLoop_MulInnerLoopNoBroadcast_m55E88B57869AE61220724020DFAFE62A30AF9C1F,
	InnerLoop_DivInnerLoopNoBroadcast_m2EBF79D9F8B1DBDC4400BF5CFF4111381AABFA96,
	InnerLoop_MinInnerLoopNoBroadcast_m49481941BBBA5A05B749914B969C4E9E399EF95A,
	InnerLoop_MaxInnerLoopNoBroadcast_m989C31C97754AA7A85B3953B8432917699D6F6C5,
	InnerLoop_GreaterInnerLoopNoBroadcast_m7D6F5F401F4841804811BB8C6B5B6BEC4CDD4CAB,
	InnerLoop_GreaterEqualInnerLoopNoBroadcast_m2A2D3526151D415DEDE6D2703131C41A31452136,
	InnerLoop_LessInnerLoopNoBroadcast_mCF6EF7A0ABB6BF635FC9DBBD32D1C5642C857446,
	InnerLoop_LessEqualInnerLoopNoBroadcast_mA316F897B7E7FA63DEA61004BB640CDD133A0E15,
	InnerLoop_EqualInnerLoopNoBroadcast_mA968D2837183FEB428DF886B60CF3578725D8F7D,
	InnerLoop_LogicalOrInnerLoopNoBroadcast_mF8253431622E0AF7F95CD0599156DA4CE7EFFBA3,
	InnerLoop_LogicalAndInnerLoopNoBroadcast_m72D7EAB83B500EAF22467BEB56D6E84F1DDB0D08,
	InnerLoop_LogicalXorInnerLoopNoBroadcast_mD313701661570F64327E3A98E188E40A169ACE92,
	InnerLoop_LogicalNotInnerLoop_m50F2D6976B1292917568019C98D236821C89522F,
	InnerLoop_ClampHWToTensorShape_m3D570F1CD2B3765DB49847F3E4C62738338E3022,
	InnerLoop_Border2DInnerLoop_mEB524197D53910E49E3713B50CEB7DE564689EEA,
	InnerLoop_Pad2DEdgeInnerLoop_mED202FCC0D99C9FAF61D5FFFF94A485C77A30A25,
	InnerLoop_Pad2DReflectInnerLoop_mE9F93CFEED513B44BBEBBF5739C5D9EA9A99F50E,
	InnerLoop_Pad2DSymmetricInnerLoop_mD5C1F242304858DF07D7881AC79F2A7A43182E40,
	InnerLoop_ScaleBiasInnerLoop_m511E4AF77A64D4D5D479A313E54C5115E47A2739,
	InnerLoop_Add_m6F9C9CE68EB9E36A8DC74B888D73DFB4C33AC98C,
	InnerLoop_Sub_mF203DBBD53C4F400BEA7FCAF0E1F3373E1527945,
	InnerLoop_Mul_m759F5856B2C433942248FB6740A166F9A68382EA,
	InnerLoop_Div_m2BD343D21D6FE72478AB379444132558C2D5942A,
	InnerLoop_Min_m516560C042AA0B791010CE7799CCB2A2670AD2F8,
	InnerLoop_Max_m1D0B4A08DE8150358A46349FB4AD6D7A8F67258D,
	InnerLoop_Greater_mF2641650408D1FB1BA08A0F98A03A08A39C18A15,
	InnerLoop_GreaterEqual_mA8E16743B7B9670E06E9C0124D2D8AF1077088EB,
	InnerLoop_Less_mE2063328F76A0114B339EC14AFC76EBE976BEEA1,
	InnerLoop_LessEqual_m11C3BFB78295D1E0EC3A5D328D1C042A6E99A5B3,
	InnerLoop_Equal_m9960F5FEA2599D3E1F45419476A85616242E5A49,
	InnerLoop_LogicalOr_mD59726C93A9681C9515A70F20306ACC324A03CFC,
	InnerLoop_LogicalAnd_m3CAD64137682243373F59BF480B6F41BF2A224E3,
	InnerLoop_LogicalXor_mFDE0CAF1BE6B010D310397B5CDBDBB83AC2FD829,
	InnerLoop_LogicalNot_m13D0B4341954C78EF2970043D34DE8D956716473,
	CompareOps__ctor_m40C1F14D7520DE49ADCCDC5B10FF405475F4104D,
	CompareOps_PrepareModel_m40B5036AC70FD8178E8CA76B33B4E11F5E36EB34,
	CompareOps_PreExecuteLayer_m55984F60FEA762480E10304D47B5AC8C14F482FA,
	CompareOps_Unity_Barracuda_IOps_MatMul_m35DC5258611D3ACC9D86EEE5A8E342B5B794EF13,
	CompareOps_Unity_Barracuda_IOps_Dense_m1AAF22BCA4F47F64E5AE91D6217B7B783AF6C0E8,
	CompareOps_Unity_Barracuda_IOps_Conv2D_mAEC5E24D77D854DDA537D8945496C910F950B8DD,
	CompareOps_Unity_Barracuda_IOps_DepthwiseConv2D_m482443A8D3FD66645A52CE7710EF0435B6CA8649,
	CompareOps_Unity_Barracuda_IOps_Conv2DTrans_mB36078FBA40C8F761EB39ABEF80C9C4F62759629,
	CompareOps_Unity_Barracuda_IOps_Upsample2D_m890FD5274654D6265CCC5255ED39C2EA2A71F185,
	CompareOps_Unity_Barracuda_IOps_Resample2D_mF7BEECC751EA2FF9559733750A152CF15E602D42,
	CompareOps_Unity_Barracuda_IOps_DepthToSpace_m71B6D6CBA47644B5E59BB9852D1DB9F565F20888,
	CompareOps_Unity_Barracuda_IOps_SpaceToDepth_m376FE40D7F9FEB45165CBF2CB39BDE2C9B952B84,
	CompareOps_Unity_Barracuda_IOps_MaxPool2D_mD8CDED12DC004DB68BE8A1A35B40C753620F2FFF,
	CompareOps_Unity_Barracuda_IOps_AvgPool2D_m23640D92757776F2DAEE937E654A8A5A0A5D003B,
	CompareOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m3226D66818944AC938F07CA854C154B1D45803BD,
	CompareOps_Unity_Barracuda_IOps_GlobalAvgPool2D_mB240BF491446ACEE2C09981B41E0CDD26C107E51,
	CompareOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m103DF03C28C2AAB53C3872A0777351EB055314DE,
	CompareOps_Unity_Barracuda_IOps_Border2D_m4F2806C460182BD885195346B602BFF757AF20F7,
	CompareOps_Unity_Barracuda_IOps_Pad2DReflect_m6ED5DAAD803E13D922DB50FFC594EBF6ADCB7F4A,
	CompareOps_Unity_Barracuda_IOps_Pad2DSymmetric_m990423A4C4B51DF1F9ECB7492275B99B4097EEA5,
	CompareOps_Unity_Barracuda_IOps_Pad2DEdge_m0B801D1CA1261FE080378FD34ED71CC47522C76D,
	CompareOps_Unity_Barracuda_IOps_ScaleBias_mB83E32EB3CACDFB8F9993ECF98424271C0BFF4CD,
	CompareOps_Unity_Barracuda_IOps_Normalization_mE7B27BB9E553D8863BEFAF5F12D0E5575BF7FF26,
	CompareOps_Unity_Barracuda_IOps_LRN_m134DC38D01A7451CC509D92B80F3E12CB54FB90B,
	CompareOps_Unity_Barracuda_IOps_Dropout_mD7F6327A7B8AEF6E6B78927EC62DB8A88D5B7DC8,
	CompareOps_Unity_Barracuda_IOps_RandomNormal_m9E7786DC65B2E0E154AED8CF9A8EBA281C293299,
	CompareOps_Unity_Barracuda_IOps_RandomUniform_m2333C7738AF133B2E8BA33309DB1038E206541FA,
	CompareOps_Unity_Barracuda_IOps_Multinomial_m4E14DA18651C96C558BC829F97077BDDFCCC3ADF,
	CompareOps_Unity_Barracuda_IOps_OneHot_m493EE96915CD8E998EE9C9A180ED5C9FDE8F15E4,
	CompareOps_Unity_Barracuda_IOps_Relu_m60EAE243D1FDA1A530A8EE12602335C52F6795D6,
	CompareOps_Unity_Barracuda_IOps_Softmax_m594FA846BE91E6CEFC1343780992D52D00BEA4FF,
	CompareOps_Unity_Barracuda_IOps_LogSoftmax_m47C9A7AAC9607B8EDABB7FC6009FE2F733DFDAC3,
	CompareOps_Unity_Barracuda_IOps_Tanh_m269C58DAD17371140BFF53DF34C96A8C390D1EAE,
	CompareOps_Unity_Barracuda_IOps_Sigmoid_m06A8DEB4A5EF888D8C9706CD8DC540D95C395689,
	CompareOps_Unity_Barracuda_IOps_Elu_mC207E7156ADEE68696DDB1BEEC15930EEF1004B0,
	CompareOps_Unity_Barracuda_IOps_Relu6_mA707D5E00C4255ED04F5EC84CD56196D306FDB6F,
	CompareOps_Unity_Barracuda_IOps_LeakyRelu_m21CB9FB32D8E482D5879A54C9C526B924DE7ACA5,
	CompareOps_Unity_Barracuda_IOps_Selu_mC7DFB80D6FC75FD606B8A6B1CA85A6437E784E32,
	CompareOps_Unity_Barracuda_IOps_PRelu_m215197B7A61B1AF8B205EF7CDDF8EABA46161ABB,
	CompareOps_Unity_Barracuda_IOps_Swish_mFE824E96526B11EA479B81C88EAADB1F9375D912,
	CompareOps_Unity_Barracuda_IOps_Abs_m199AB35F017249990030542CC2A16DCF4B21744C,
	CompareOps_Unity_Barracuda_IOps_Neg_mFD2A3AD87C26D401657BEDECE0DD5F1973CC572E,
	CompareOps_Unity_Barracuda_IOps_Ceil_mEAEDF78FC5C010DF7EE49C24790DD0183F53159B,
	CompareOps_Unity_Barracuda_IOps_Clip_m0CD49B081F3647B92242EA3601ECE2B12345111D,
	CompareOps_Unity_Barracuda_IOps_Floor_m7E5769AAC562FF6A2CA3D246E126BE1758D19F04,
	CompareOps_Unity_Barracuda_IOps_Reciprocal_m2E55059D7380EACCF1FC2C46C981708940979CA2,
	CompareOps_Unity_Barracuda_IOps_Pow_m92888192338893F12C880F28CA0196DC4D9955A2,
	CompareOps_Unity_Barracuda_IOps_Exp_m454A2A2E721E9DF8854DE74DDED083D05E9A135D,
	CompareOps_Unity_Barracuda_IOps_Log_mE38DA5994CFDD0BF27DB2E14F4440942F5F10BAA,
	CompareOps_Unity_Barracuda_IOps_Sqrt_m09F025CB8CBDEE693029735F6F9CE4820CD5DAE7,
	CompareOps_Unity_Barracuda_IOps_Add_m4838BEBA0102D35734F7A2095350C1EFA7ED89C2,
	CompareOps_Unity_Barracuda_IOps_Sub_m77956951C8B338B0936AFF70B7225B8D398851A5,
	CompareOps_Unity_Barracuda_IOps_Mul_mE2241E0C7542FBFD6D2A6DFA181139B49A7EF93A,
	CompareOps_Unity_Barracuda_IOps_Div_mB1B69D87CA2C41439368F5BD04D377FD32574A0A,
	CompareOps_Unity_Barracuda_IOps_Pow_m841664BFCF0DB2E053046079D076D9CD14EB76D0,
	CompareOps_Unity_Barracuda_IOps_Min_mCE07D2E03A70974C46E050FBCFC81BECDEAF9B00,
	CompareOps_Unity_Barracuda_IOps_Max_m87285BED59019A919B5B11DBE2AAA72B1E321559,
	CompareOps_Unity_Barracuda_IOps_Mean_m3DFD532A82D630FB17C7338A36044358AA9E4634,
	CompareOps_Unity_Barracuda_IOps_ReduceMax_m639D1BF9EE07A6B3C72DCCCE01503A71BB272B82,
	CompareOps_Unity_Barracuda_IOps_ReduceMean_mD4CB402DCCFA17C975690084D49CCCCCE81FBDBC,
	CompareOps_Unity_Barracuda_IOps_ReduceMin_m6CC8AD40FBE9F850E8F42D3F82604ADB56C9F17A,
	CompareOps_Unity_Barracuda_IOps_ReduceProd_m34B52DD0AD90EE47145AB2F61B146862E6D6819B,
	CompareOps_Unity_Barracuda_IOps_ReduceSum_mB5C929A36F2A3741227781D316CE7CAD1D72BAB1,
	CompareOps_Unity_Barracuda_IOps_Greater_m3B3149D15375B764ADEC73493A6F95FAC1397F24,
	CompareOps_Unity_Barracuda_IOps_GreaterEqual_m135FC47419930957B451B910F0AD20DB7D7EE702,
	CompareOps_Unity_Barracuda_IOps_Less_mF206C782F40A10FF4E643E8E024E0F6BE4EC4538,
	CompareOps_Unity_Barracuda_IOps_LessEqual_m0B0309A78F1D5377E4E0F6D82DDA2FB09D26C968,
	CompareOps_Unity_Barracuda_IOps_Equal_mB77258FA1D2F5C6B399593A72A9D6C6B4390F6A4,
	CompareOps_Unity_Barracuda_IOps_LogicalOr_m2891E7B2F51C425CC968F3990013002A40376469,
	CompareOps_Unity_Barracuda_IOps_LogicalAnd_mC8D2DCB19EE818FF0F545981E25A0EA37222EA79,
	CompareOps_Unity_Barracuda_IOps_LogicalXor_mC2026E0813882C30993217D0F4FB1E581AA0F38F,
	CompareOps_Unity_Barracuda_IOps_LogicalNot_m3E595E314851EA1D9520BFB4959568BE3CA01267,
	CompareOps_Unity_Barracuda_IOps_Flatten_m81213E7AE156715FD738F9AC6C47BA1E2AB7A5A6,
	CompareOps_Unity_Barracuda_IOps_Reshape_mE6E12AFD6EBC8A024CE69664C4F55C028923374B,
	CompareOps_Unity_Barracuda_IOps_Expand_m4A0C6148CDE7F152E4B94B8B86217D1AB72F9E1D,
	CompareOps_Unity_Barracuda_IOps_Transpose_m7F93F3BC217156FA5522CAB4776B7CBA8A876E27,
	CompareOps_Unity_Barracuda_IOps_Gather_m1FEF0F4CFCD0775BD79D68A671FA373AC3E4B8F5,
	CompareOps_Unity_Barracuda_IOps_Concat_m265FF33ECA07A92A19CE34039791651FDD4F3908,
	CompareOps_Unity_Barracuda_IOps_StridedSlice_mB682943AB060A530C8C91D552CB11115B20B6128,
	CompareOps_Unity_Barracuda_IOps_Tile_mACFDE7CD9AC806094717413E35DA184E462FBC32,
	CompareOps_Unity_Barracuda_IOps_Copy_m9A5BEDE034617FB67B3C007F70736C2F11BD3C3B,
	CompareOps_Unity_Barracuda_IOps_Prepare_m0F6CC51BC73CB003703434D8CDD76003B93F1B78,
	CompareOps_Unity_Barracuda_IOps_ResetAllocator_m0AADF517AA5474BC4177E3CA2CF92840072E511F,
	CompareOps_CheckSame_mC0845E04033C1E0D38564A3B8A06B85E1D1716D9,
	CompareOps_CheckSame_mEA0EB17D3D0D7A87D97450E14F6AFDB18ECAFC8E,
	CompareOpsUtils_CheckSame_mEAEA493AA1DD42BE0D0FAE72BAB31C65FEAC1C00,
	CompareOpsUtils_CheckSame_m397F642264B14A487F2A06BD11A0CAA12D55D434,
	CompareOpsUtils_CheckApproximately_m8D8617516CD57ECCCD27545EEB7F067A3436F569,
	CompareOpsUtils_CheckApproximately_m65BED740971D379D66220A37BFCD953FD283B3AF,
	CompareOpsUtils__ctor_m8A8B7A374C8DCAE89247EE5F0A99025925F4A74B,
	ComputeInfo__cctor_m29A4E8442008B5FA066FE6A2B73C91A044AA7392,
	ComputeInfo__ctor_mC92C64D3BAA424F8836C7085C3986557EE929C3C,
	ComputeShaderSingleton__ctor_m672FE766A50154232E287FA9429BBD029BFBFBB1,
	ComputeShaderSingleton_get_Instance_m073E80F4D1A664CA32CF1359CB8FE087AF7AAA71,
	ComputeShaderSingleton_LoadIf_m35FDF7355172E2186D447560E60D434430F4A63A,
	ComputeShaderSingleton_LoadIf_mE813BE7F6559E6F594AA30A5E07A1DB0F94ECB85,
	ComputeShaderSingleton_get_supported_m515D2852D56013050D187A03681B9E3A6AB2F9A5,
	ComputeShaderSingleton__cctor_m3CF399F8043F08661C3DDE5029D25A25EA365DE4,
	GenericWorker__ctor_mCAC72E3CF67FB2F3E3A0CC3543C7AA97611E8B47,
	GenericWorker_Finalize_mFC47C6932A34BCC09C4634512958790CDBC7F64E,
	GenericWorker_ResetAllocatorIfRequested_m0FBA68B42AFC329139D28DD12C69BF0A3B66DBDA,
	GenericWorker_Dispose_mED508F2CE3DC6EEA1E64A677A25A00E2040D4E07,
	GenericWorker_PrepareForInput_m6F35B4ADF1B3350B5593E8696BA16EE6C0147426,
	GenericWorker_SetInput_mEF403E0602311E72C6EAAEBA72CD52E740594E18,
	GenericWorker_SetInput_mD25CC4B99FBE7B2A6826B390312EAD3D070D2709,
	GenericWorker_Execute_mF0E288AFE254876BEE5DD925B28CAC8BFD40BC77,
	GenericWorker_Execute_m153700E3DA6375DE1A4222769505C53F5274846C,
	GenericWorker_Execute_m3E8710173DF17A7A0447E97EA69795E21843B954,
	GenericWorker_StartManualSchedule_m4861715F1A3A37DFCB4998110DDAF10AC17311C3,
	GenericWorker_FlushSchedule_m999957159B0A2CEF66AC2C2ED96253A46DC642DC,
	GenericWorker_StartManualSchedule_m12289BBE3D70087FBDD480B85FE56EF59999F6C0,
	GenericWorker_get_scheduleProgress_m6527F763F91A39BD2F0A0984AFADECD49A28AC1D,
	GenericWorker_GetAndVerifyFusedActivation_mD7D294BB66650F98EDBFAFC324010D1A1594649C,
	GenericWorker_StartManualSchedule_mA0B0150DF1E4240B1600A7180A645310A5E366D2,
	GenericWorker_PeekOutput_mF1EDDBF381704C0ACDD7A09DA875F79F31D8D0F6,
	GenericWorker_PeekOutput_m409A1515DAA0ADF4B4DFF0473E8C2F419C820700,
	GenericWorker_PeekConstants_m51798E959E3D53D3F620A580699E6D4C852EBA16,
	GenericWorker_Summary_m467AF0D0CEE5AA1E6F79DEA026761A9846EA9ED8,
	GenericVars__ctor_m279EE2E5BE7B7917A5341AEB131D97181CCC7282,
	GenericVars_Finalize_m1284660FA4822ED0AF56901EF6AE7F5F45963229,
	GenericVars_Dispose_m374A804F76374AF300BB74EFF2862447D7FA5909,
	GenericVars_GetAllocator_m0485A0712F082DB5AAE10B9374DD194768FAEA4D,
	GenericVars_IsTensorOwnedByInternalAllocator_mC39E2E90CBC8960C00439D0E1BBBB7B034A0EBEC,
	GenericVars_ValidateGlobalInputs_m7A31C67243D52D2CBFE8FF961DCA9BA9DBBC327A,
	GenericVars_PrepareLayerInputTensors_m5099157B1360AE81FBB30EED0EBDC2E6E84B6BA7,
	GenericVars_SetInput_m53EE1D0B68C6BE2A288E5D75EA33C0E43F4CD038,
	GenericVars_PrepareStorage_m6C94627B3F702D401B65EF03E1D67B1D35EF84FC,
	GenericVars_GatherInputs_mD59D868EFE4DA0308C015FFAC28E44B9FCA2DC7C,
	GenericVars_PrepareStorage_m9FF46D24F434C8FD450BB414E4EE36BA676FA38E,
	GenericVars_Store_mC9DEE60E99338DBF6DF1E6458BDA7702E46815B1,
	GenericVars_PeekOutput_m60F18AA694055EECDA345BA86FD1A2724B8A4C2C,
	GenericVars_PeekConstants_m60AE41D3A45893D951C46C58FA1AE051143089E1,
	GenericVarsWithReuse_get_layerRequiresStorage_mF13B751E56278562D632C6565D825532A753857C,
	GenericVarsWithReuse_get_temporary_m45DDE40BA6794C03B8165F6B4CDB376FE0C760A3,
	GenericVarsWithReuse_ReleaseTemporary_mB57C9BD2E57FC0C6DC54A51735C945CC380BAE94,
	GenericVarsWithReuse_PrepareStorage_m14B3CF600AD3009D16506530A102F14D1CD4F4FB,
	GenericVarsWithReuse_PrepareStorage_mACE3CAB05EDAB7BD13FA377368A69BB9C41CDBA7,
	GenericVarsWithReuse_Store_mC2B548CA5A76DB5C7CB5EA1CFA65BB5C9B1A6F2A,
	GenericVarsWithReuse_PeekOutput_m77F8F42ABFEF0FE226A9569E08B3A4E949D021E6,
	GenericVarsWithReuse__ctor_m9ABF90D23DDDDF4F6B1B2D894B76B53891EF3902,
	GenericVarsWithPreallocation_PrepareStorage_m4C6E46CF51DF91CBAAE8FBA12ED4599777B53376,
	GenericVarsWithPreallocation_GetAllocator_mDCB874620221B6A55B50244168D25CAF67B0E7CA,
	GenericVarsWithPreallocation_IsTensorOwnedByInternalAllocator_mE6E1AAB6A7CC4BAEA4BB39F9B22D6BA42E2AF4E7,
	GenericVarsWithPreallocation_Alloc_m04F3D8136D4D4FF0E56C88C7BA0B3DEEFC0868CE,
	GenericVarsWithPreallocation_Alloc_m859F863725CC4012B0D34F3DD49ACD407F91545A,
	GenericVarsWithPreallocation_MoveToDevice_m535DD68CEB412C14827DF9D417AC8808FF9D868E,
	GenericVarsWithPreallocation_Release_m3747EEFBA75386965EE4EE36A7B49CBC5CC4B26E,
	GenericVarsWithPreallocation_WaiveOwnership_m4D02772F121F1F091AD3A40910C4491A47E27299,
	GenericVarsWithPreallocation_Reset_m003D0E57C5B7FFD59BAB294EF55FC6B9719FAA4E,
	GenericVarsWithPreallocation_get_busyBytes_m7F67D7DEF25A21028C5924D228BDD0C52975FB90,
	GenericVarsWithPreallocation_get_freeBytes_m789FFD87B2B7C7AE04B4784637AD54612588921F,
	GenericVarsWithPreallocation_get_totalBytes_mC8F3CC8975C2EE8662C98978368CDA8246843841,
	GenericVarsWithPreallocation_ToString_m8B3647694066F75D2037F3D1BA78D2FC1B19347D,
	GenericVarsWithPreallocation__ctor_m036B4EBF636A166466277D31EA6E9A94E31D5F97,
	DefaultTensorAllocator__ctor_m87FB83CF1D12D83B8AB300CA02D0112B85F78F6E,
	DefaultVars__ctor_m2F0D20A8F662D4BFA2487003D03CB96F327A3CDC,
	CSharpBLAS_IsNative_mD9DD10B597990781BB45F772312ACE55691F75CD,
	CSharpBLAS_IsCurrentPlatformSupported_m380924B60C2B4181A9136690996EE9F501057AF7,
	CSharpBLAS_SGEMM_m2B1CEE26B981BF12685E76CC981AA2DE6EC72A9C,
	CSharpBLAS_ScheduleSGEMM_m6AE562450BF1287633A069AB099B97543BDD474C,
	CSharpBLAS__ctor_m9064383A1425CA9C5267F0EFC09E758C0860EC6E,
	MatrixUtils_CopyBlockWithPadding_m6DE82D53221DCCA0ACA5203AF06A95A9C5A6BD6B,
	MatrixUtils_ClearFloatArray_mE98F8608AA5262C55D17AF058FA6236A051A878F,
	MatrixUtils_CopyFloatArray_mF9112FD679CAB562DF83ED5B7026C114912CF962,
	MatrixUtils_CopyBlockWithPadding_m037B84B616743E6D95ED42B752144A6677167E32,
	MatrixUtils_CopyBlockWithPadding_m91C650394C4FCE097FC56C3456A0CB8C08A2B5B1,
	MatrixUtils_CopyBlockWithPadding_m1761CF983BC7618B87926E7C8913E82BDCFD9976,
	MatrixUtils_MultiplyBlockUnroll8xhPadded_m2279E5A55D38FC55483B576AB16539E367078F82,
	MatrixUtils_MultiplyBlockUnroll8xhParallelWithPadding_m7D367E6CE375E615E8DC46A25B53A3B57308268F,
	MatrixUtils__ctor_mB45DBFEC13BAB6AABFDC39763C019F13F3F060C2,
	ModelAnalyzer_GetDefaultInputName_mF3A50A9645E9A11A594F7F4360C1E1793FD40A4C,
	ModelAnalyzer_GetDefaultOutputName_mCAD7240286CFBA8FB58B7808DCB11863D51AD1F8,
	ModelAnalyzer_ListTemporaryTensorShapes_mC3E75E1EFFC0A6B2A020666351BC7ECEC419192E,
	ModelAnalyzer_ListTemporaryTensorShapes_mF461A195724ADA70037952E3E2E17495B2F7BCAD,
	ModelAnalyzer_TryGetOutputTensorShape_m33999F79507E70CFD72773E028A9C39F287FAC2C,
	ModelAnalyzer_TryGetOutputTensorShape_m1C1EE99CBEB7313E0E03B6C0AC6DFBEF508485E6,
	ModelAnalyzer_FindLayersThatRequireStorage_mE79BA4352FC4A55A9AB04A1CFD882791855B4DFF,
	ModelAnalyzer_FindUpstreamLayers_m59713A8D06860694B64B7FE06B2A9B38BE8BE333,
	ModelAnalyzer_FindLargestNecessaryTensorShape_mE005738E864468C6354A6DD0A942EF2298E64B70,
	ModelAnalyzer_FindLargestArgumentTensorShape_mCFF022345D7E1FD2545F01F61A111AC00B24B44E,
	ModelAnalyzer_FindUnusedLayers_m5AEBEE0AFA08C359721E4324651E682A9813F844,
	ModelAnalyzer_FindBrokenLinks_m3DE95953FE0F41260B9FC4C3A0939BD883063B21,
	ModelAnalyzer_FindBrokenLinks_m1462238B3ACD5290E10F37AA3DE35C6DBA54AC7B,
	ModelAnalyzer_FindBrokenLinks_mF9E9F5BC92630454AD79FB67F96E2AA3DDA0339D,
	ModelAnalyzer_FindUnconnectedInputs_mF30F3AB4797D601AE179295B8C9BDA220F332BC5,
	ModelAnalyzer_FindUnconnectedOutputs_mBC25E8EA84340BAEC0CB7BB9E2FD3E56177D6603,
	ModelAnalyzer__ctor_mD900B7E2568FAF97EB3CE68F5124D14261E65AE8,
	ModelOptimizer_Optimize_m00441638B5E1A0D6C5A15377EBB2AB0A82043318,
	ModelOptimizer_IsLayerSupportingActivationFusing_mD154C5647A57EB4F600ECC59105A235289DDACF0,
	ModelOptimizer_IsActivationFusable_m7C3B286A123970EC817F040871FAD1C2CB949DA4,
	ModelOptimizer_FuseActivation_mDD52288A890881F756FE927163AEC5EF893C0709,
	ModelOptimizer_FuseActivations_m65A6375ADD150ECFD361658D58AAB8B9996D4A33,
	ModelOptimizer_RemoveNoop_mDFB8D9282D61188D9FB439311EE2CAD4DE5BA27B,
	ModelOptimizer__ctor_m54FA9A9D41044A7E2B69B1D53CB613993D629A6A,
	StatsOps__ctor_m71083DBCBB4A46F47E2A84417F2BE74625EC4389,
	StatsOps_PrepareModel_m7134F486106E17E3C3F17F58480683FB2A6CB8A2,
	StatsOps_PreExecuteLayer_mAB3750A81BFCDF0E2FD284F13E60BD18F9684D6D,
	StatsOps_Unity_Barracuda_IOps_MatMul_m934D54ACE5592FEC92F239B7ADFC1E1D522EE675,
	StatsOps_Unity_Barracuda_IOps_Dense_mB6E13EA371D2DBC89388F47124718369DD4FB7A3,
	StatsOps_Unity_Barracuda_IOps_Conv2D_mA2D1BB1298E9B5BD6BF15FE5A6FF4CF71C28858C,
	StatsOps_Unity_Barracuda_IOps_DepthwiseConv2D_m0D29765A7D955AE399DE094C85319A2FB1D8BABD,
	StatsOps_Unity_Barracuda_IOps_Conv2DTrans_m4A31B4D612BF6C7F2804358435F9853D61C155DD,
	StatsOps_Unity_Barracuda_IOps_Upsample2D_mC403FDABB3191F7DC2526CB7F2B1F6B07FB16C87,
	StatsOps_Unity_Barracuda_IOps_Resample2D_mCDF1B8A0D24DFEAFCCA2D7A49AE7BB780F9A669C,
	StatsOps_Unity_Barracuda_IOps_DepthToSpace_m1869216C4416A97C1E46D90200A2A448AE8A1B03,
	StatsOps_Unity_Barracuda_IOps_SpaceToDepth_mAAB5D9016E43437E7FD5401DBEF05573C2CAC290,
	StatsOps_Unity_Barracuda_IOps_MaxPool2D_mA9C4A1E79FF5C8827A78ABABE54DE070C69FB3B9,
	StatsOps_Unity_Barracuda_IOps_AvgPool2D_mC4353C3957EBCC5B54269BAB8341D32717C15F0A,
	StatsOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m0129D977F029C2E4A911B855F98432F93B7E9DEB,
	StatsOps_Unity_Barracuda_IOps_GlobalAvgPool2D_m1EF9038FA444FBCE5C7B135D41BE34F7C7508B7D,
	StatsOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m0766559A0E2625DA37CE74CB592F61DEA1999E09,
	StatsOps_Unity_Barracuda_IOps_Border2D_mA9854CD1E0C5DE821DF80B454CE7D94DB21C46B3,
	StatsOps_Unity_Barracuda_IOps_Pad2DReflect_mE6CFB3A028555B28979D55F41E5DB2D224D3FA45,
	StatsOps_Unity_Barracuda_IOps_Pad2DSymmetric_mBD691FD3C18F7FE8D30C4ED1E11538C522A387DD,
	StatsOps_Unity_Barracuda_IOps_Pad2DEdge_m9B54DD4CE1367125C4BE4A86204114190D623403,
	StatsOps_Unity_Barracuda_IOps_ScaleBias_m9C390C4C8DFE9ACEB20A2B963C1975F929978CAB,
	StatsOps_Unity_Barracuda_IOps_Normalization_m0100E7F3E1C208A339A544EA8A44D1B30FE8FE35,
	StatsOps_Unity_Barracuda_IOps_LRN_m73BAAFF282FC24635C087FCA9B39A6DA2E177D3E,
	StatsOps_Unity_Barracuda_IOps_Dropout_m91825EDF2A3894821B4D557CC90AB965F593F835,
	StatsOps_Unity_Barracuda_IOps_RandomNormal_mD61C58E0A97B5B083ED28BF3317A7A0ED4524CB7,
	StatsOps_Unity_Barracuda_IOps_RandomUniform_mEB9383B8AC5E590B0F6A22783F652236A60C5DE3,
	StatsOps_Unity_Barracuda_IOps_Multinomial_m90E21B4E7717FCCCD8E1BABE8551D2979DF0E822,
	StatsOps_Unity_Barracuda_IOps_OneHot_mBA4C45C255D85BDCCB188E6C807F426590E654C8,
	StatsOps_Unity_Barracuda_IOps_Relu_m57F9F445301B731DD1CC068C1EEC802A4CD67C8A,
	StatsOps_Unity_Barracuda_IOps_Softmax_m739B36BDA5ABC66BE928BAE432CA71D2323BA5E3,
	StatsOps_Unity_Barracuda_IOps_LogSoftmax_mD03A5D9CA3CE24F5BA389C40A3659698450D4EB6,
	StatsOps_Unity_Barracuda_IOps_Tanh_m879FD095D16965E5A8763DBD729BAB5F0AADFD8A,
	StatsOps_Unity_Barracuda_IOps_Sigmoid_m219D594248AE616F3F746694999EA57F9A361119,
	StatsOps_Unity_Barracuda_IOps_Relu6_m900C853C9216428F597EEAB3927FF98FFF3814DC,
	StatsOps_Unity_Barracuda_IOps_Elu_m7683A8B37054E93CA2A62A51EB56028FEB0969AC,
	StatsOps_Unity_Barracuda_IOps_LeakyRelu_m37DC423219C22E36B631463A000ABE3E1F752901,
	StatsOps_Unity_Barracuda_IOps_Selu_mF5E4E8958CA496C1B7577D4826A49A61808B3AB2,
	StatsOps_Unity_Barracuda_IOps_PRelu_m5BB24E636563A82B9E56EEA83D1C15A169FCBF43,
	StatsOps_Unity_Barracuda_IOps_Swish_m7CE27B1A53F9B25E4F11C770EE70BDCADBF705B7,
	StatsOps_Unity_Barracuda_IOps_Abs_mF78036FC974CBFA018D2EFE15BCBD0B91E927856,
	StatsOps_Unity_Barracuda_IOps_Neg_m616C8587ED89AAB358875B213754FC34DE398DDD,
	StatsOps_Unity_Barracuda_IOps_Ceil_m98E4FE25A4C031289F940B2757EF82729ED2F216,
	StatsOps_Unity_Barracuda_IOps_Clip_mF055D3B87248D547C58B9D172C4658DF887D3D25,
	StatsOps_Unity_Barracuda_IOps_Floor_mF526A23303D93CE89BC01D9577C0D8EDCFC735CE,
	StatsOps_Unity_Barracuda_IOps_Reciprocal_mE2C183066D8197C48CE8C52D1B7EB188072D46B7,
	StatsOps_Unity_Barracuda_IOps_Pow_mB42C17CC692FA2692400B5624E3BAF24E8D06D07,
	StatsOps_Unity_Barracuda_IOps_Exp_m6C25D1046C31CAA5255A995DD4FCD8E3713005D0,
	StatsOps_Unity_Barracuda_IOps_Log_m235281DD44B0395F5BFC927CC2BA4F958B20DCC8,
	StatsOps_Unity_Barracuda_IOps_Sqrt_m6D4E5829150BEE508BFD24ADBEC6545EA369BA7F,
	StatsOps_Unity_Barracuda_IOps_Add_m87B11BAB50CE1F34EEDCEC2F3A4EFB11DAB80991,
	StatsOps_Unity_Barracuda_IOps_Sub_m5CA381AC3C0F85B09AB19902711F9336A0687EA3,
	StatsOps_Unity_Barracuda_IOps_Mul_m44D58589947F959EC9CBA29D7AC2DA23198704DA,
	StatsOps_Unity_Barracuda_IOps_Div_m987E42E17CD2647925D91E5340DBC403934FEB01,
	StatsOps_Unity_Barracuda_IOps_Pow_m2E5FCDBD33F53013B96CEA6794F12897F816DAC7,
	StatsOps_Unity_Barracuda_IOps_Min_mB8ED2D4509BBF491BD5F166C4378C53B38EA202D,
	StatsOps_Unity_Barracuda_IOps_Max_mBA1AF26B9448747AC7C93DADC69FCB2040A7EAF6,
	StatsOps_Unity_Barracuda_IOps_Mean_m76801731A61C4C1FBD8D01250E588629D6994052,
	StatsOps_Unity_Barracuda_IOps_ReduceMax_mED0602CF6D2FA947A4D63B6A3F3708F8B985729E,
	StatsOps_Unity_Barracuda_IOps_ReduceMean_m6EF33F303877794F7F7183C816D1DEB4271A810D,
	StatsOps_Unity_Barracuda_IOps_ReduceMin_m902680EF3FC95B9CC424509A20F8BBC3A5231666,
	StatsOps_Unity_Barracuda_IOps_ReduceProd_m10F7C9C42C0A0323E4641540545176D19CD21297,
	StatsOps_Unity_Barracuda_IOps_ReduceSum_m27FFE0AA1AF404617BCADB919E75A7C226E11D4C,
	StatsOps_Unity_Barracuda_IOps_Greater_m0C0A637841DC813E082C7299579F1D0166E6EDD5,
	StatsOps_Unity_Barracuda_IOps_GreaterEqual_mFCA0F087CF351A22EBD3C2D66CBF775F9B4BAA1E,
	StatsOps_Unity_Barracuda_IOps_Less_mABD40CA855AF2C247E376420DB17C61DCB0991D1,
	StatsOps_Unity_Barracuda_IOps_LessEqual_m3E992956CAF897489E0A78B14BC9EE42A2D075E2,
	StatsOps_Unity_Barracuda_IOps_Equal_m072D60A853666D124885C6A23C414106095B3E50,
	StatsOps_Unity_Barracuda_IOps_LogicalOr_mEC3D49EE9528990B6C18A7D23C9CE07676AF77A6,
	StatsOps_Unity_Barracuda_IOps_LogicalAnd_m98E1A2C4A34C9FB6112BEDCD912D6B76B2400F68,
	StatsOps_Unity_Barracuda_IOps_LogicalXor_m38A58FF807376BF34A0D7304A22FD70C2183BA8C,
	StatsOps_Unity_Barracuda_IOps_LogicalNot_m1DE3C12849846FFE9094639E096832A0C81AB296,
	StatsOps_Unity_Barracuda_IOps_Flatten_m6B1075770DCCF6D1C8970B27323E2AEAB5454E16,
	StatsOps_Unity_Barracuda_IOps_Reshape_m964759662E9BE2A0D67D40AC91C06D76E13C038E,
	StatsOps_Unity_Barracuda_IOps_Expand_m5D3F369339A31A9C8740123FF3B4113D45A67532,
	StatsOps_Unity_Barracuda_IOps_Transpose_m2F42A425F03D12092DC78A6DEEA6F6D7F721156E,
	StatsOps_Unity_Barracuda_IOps_Gather_m73458DDCCFA91D1FB4779730DA6DE16E50E634D5,
	StatsOps_Unity_Barracuda_IOps_Concat_m5871177622E7B1A4E45FD35528D6F41F9484939D,
	StatsOps_Unity_Barracuda_IOps_StridedSlice_m0CA229E22556E59850A2968032A92B3CAF22EDCD,
	StatsOps_Unity_Barracuda_IOps_Tile_m4DE8FFF8EAF476123624F69A9B4BE1F37D464181,
	StatsOps_Unity_Barracuda_IOps_Copy_m3FD0F960FE58D105D3CAEF4CBE1342A619E6C7BE,
	StatsOps_Unity_Barracuda_IOps_Prepare_mF4A11EFAA273A5AECAAFCD44E80B46B3BD5D2911,
	StatsOps_Unity_Barracuda_IOps_ResetAllocator_mFDC855DC8AC2E581662DAF465BFE826AD85E9B9F,
	StatsOps_ToString_mCD4DDEFE828FFD80076461CEBC21C0AB3E33CBEB,
	StatsOps_Elementwise_m9BA7FAF32250454545116B082B71ECDF788684B1,
	StatsOps_ElementwiseBroadcast_m9D167819505A0D9FB2EE41A8D727C27F613D4F3F,
	StatsOps_Reduce_m90E34AAB2D431DF7581D58D552C3E6859CD706EC,
	TensorOperatorNewAllocator__ctor_m2F768F307265CA27AD05B78A05B63738647DB85C,
	TensorOperatorNewAllocator_Finalize_m9FF1B5C88A751FA746B3E9B0E2766F5E25D1B621,
	TensorOperatorNewAllocator_Alloc_m5165C63084CB4939A938BD04B52D4ECEACA69181,
	TensorOperatorNewAllocator_Alloc_mA34FB48008896156D1398E703CF40D6AB731622D,
	TensorOperatorNewAllocator_Release_mB68F7080587D198F9BDA4B354025C2E13FD13E78,
	TensorOperatorNewAllocator_MoveToDevice_mB82A82270A3526B3C602DF15D8F9DF576A9E79E2,
	TensorOperatorNewAllocator_Reset_m19E2E9535C38510A212D8EC51DDC9EAE5416A5B7,
	TensorOperatorNewAllocator_WaiveOwnership_mE5A406116D9582A1B8A5CF851CCE0316058A96BB,
	TensorOperatorNewAllocator_Dispose_mA95E13F3FAB91C64BF48C08538D445CC7E469330,
	TensorOperatorNewAllocator_get_busyBytes_m88454045D675747C3AB4902775C8656A004C8516,
	TensorOperatorNewAllocator_get_freeBytes_m8576ADCDF770250F0EC6D791EDE50244F1287A89,
	TensorOperatorNewAllocator_get_totalBytes_m99B309F7D732A7CD019E54D5558585C1CD6FD22D,
	TensorOperatorNewAllocator_ToString_m62C5156E81C0F95FF8BEF78CDC46BA12C0B85496,
	TensorCachingByShapeAllocator__ctor_m56F49EF5E6A5F1293E109AC5A53B51BB2C518377,
	TensorCachingByShapeAllocator_Finalize_m7557517903732BCC6C9E5C2F99970AC27A3CBFE3,
	TensorCachingByShapeAllocator_AddRef_m783DFDFACD72D8F857731BC6B26B1A21941E7748,
	TensorCachingByShapeAllocator_DecRef_m3274D9D6DAE8AE0831495BB83DBBC772A92649A5,
	TensorCachingByShapeAllocator_AdoptFreeBuffer_mB3F08D39CFD0088E28A724E950A7E6EEC8302801,
	TensorCachingByShapeAllocator_Alloc_m47E340C268156A1FA9E9275ECD5856ED98186797,
	TensorCachingByShapeAllocator_Alloc_mEB464F703DAFA21FCCBFD181D8F352E9E06CA9E8,
	TensorCachingByShapeAllocator_Release_mFCDB1B1C160A554619B7DD8B6338911738EEF9F6,
	TensorCachingByShapeAllocator_MoveToDevice_m216ACE5AC50F5C4D2A7C91E5FFA11FEA1F803AAD,
	TensorCachingByShapeAllocator_Cast_mF2544B39667E20A36B027596CE5BBB836C1505F0,
	TensorCachingByShapeAllocator_Reset_m8AE5C4DD646316BE8F566D3A8F15E750A4157628,
	TensorCachingByShapeAllocator_WaiveOwnership_m1F52065C5A61A814F24742E5D3863649A5395B0F,
	TensorCachingByShapeAllocator_Dispose_mCB23F36BC1FCAC4915E16DA219C014A17567458C,
	TensorCachingByShapeAllocator_get_busyBytes_mF9E877883548AE66866B541E634E9F3B705D0CC7,
	TensorCachingByShapeAllocator_get_freeBytes_m3D5D6310897528EA4A6DA0475F2B74703D182075,
	TensorCachingByShapeAllocator_get_totalBytes_mE80A2479E9D6612E5D85CCC20E9BA49B22C68FA5,
	TensorCachingByShapeAllocator_ToString_mDCA2605C0C698635B95A978D41D4FA24C2BFC723,
	TensorCachingAllocator__ctor_m0AF9D7BD49A61349B4D0472A9B9DA7CDD634B09B,
	TensorCachingAllocator_Finalize_m43277351D773A0EDF3C606EBE3C3C78FE8460C7C,
	TensorCachingAllocator_GetAllocationMaxCount_mB32D22101966A4709334F2F0813DFEB09BD90896,
	TensorCachingAllocator_AddRef_m6B728CFDDE254EF9B04A363C57CB3E48653CF3CC,
	TensorCachingAllocator_DecRef_m8E037C323465CB95E326B9B2A3F1383104759114,
	TensorCachingAllocator_AdoptFreeBuffer_m85FBF8C7369892837C663956A861CC19CF89672A,
	TensorCachingAllocator_DisposeAllocatedBuffer_m45F29A43085F53A5D2FC99BB55BBDF7EF1D04DD3,
	TensorCachingAllocator_Alloc_m39789C8C27AF21FB414E6D5C2DEF5598F5887B80,
	TensorCachingAllocator_Alloc_m2945A387CC61DF8B2B45FF6588715C32810721FC,
	TensorCachingAllocator_Release_mCC680F4D9466A92F7C0204E036B94804D344ADB7,
	TensorCachingAllocator_MoveToDevice_m8416C538443A9C0145E1A0E4504BCFFAFBF2A64C,
	TensorCachingAllocator_Cast_mF5EE48D9B34551711C5F9582FE3BE816FE132B34,
	TensorCachingAllocator_Reset_mD56009B3EAB8EE921CF559745EA3B29C8EF75026,
	TensorCachingAllocator_WaiveOwnership_m4CDBB4F4A7D1B301ADB3276353D8173990CDB106,
	TensorCachingAllocator_Dispose_m511E93D12BAC25C2C75E06AB793835D93D7A3F19,
	TensorCachingAllocator_get_busyBytes_mF78796ECDDEFB0D9719F3F19760B1C0E2C67DFD4,
	TensorCachingAllocator_get_freeBytes_mE2AF5A497C952EEE0DA0D3B1955D0563B1EE0FC9,
	TensorCachingAllocator_get_totalBytes_mBD216CB64858E07DFBC598C6BC2BB24E4C1808BF,
	TensorCachingAllocator_ToString_mD5286B5462F004CA1EFAD06F8873F45DAA61717A,
	VerboseOps__ctor_m6DA1BEE4067670E7558C1D45A8276C33A4C3BD0C,
	VerboseOps_PrepareModel_mC539FFFDBD231E67988971855B7DA42D3721DBE3,
	VerboseOps_PreExecuteLayer_m8AAC2CA24A7D2BFD36B133EE8793B3B07C8CFD4F,
	VerboseOps_Unity_Barracuda_IOps_MatMul_mA789536FBB4B71307F50A5E63DAD4AA0226D7949,
	VerboseOps_Unity_Barracuda_IOps_Dense_mC7C16EA9276484208B3AE72C9DC2F92D04449050,
	VerboseOps_Unity_Barracuda_IOps_Conv2D_m352CBBC5C45FE66D094265D459A66AC708313998,
	VerboseOps_Unity_Barracuda_IOps_DepthwiseConv2D_m57222C10E613F32BC88B4720E324C3613FFC35F8,
	VerboseOps_Unity_Barracuda_IOps_Conv2DTrans_mA0D23D53CFB1EF2B645E8497FD2A911070169F96,
	VerboseOps_Unity_Barracuda_IOps_Upsample2D_m82C42CBA2199F3B31D785F8F01485466CE53BA80,
	VerboseOps_Unity_Barracuda_IOps_Resample2D_m544C40C67ABE4BAB9CE66BAC79F6C316A88A7839,
	VerboseOps_Unity_Barracuda_IOps_DepthToSpace_m584A19C0D11F72690D5D7A8462E804AFE8C0B120,
	VerboseOps_Unity_Barracuda_IOps_SpaceToDepth_m4BFEFEFE92B008F448D909F8D8C61F68292087E2,
	VerboseOps_Unity_Barracuda_IOps_MaxPool2D_mE8354507F01B07CE7C33EC842A90D6CCE0DD61CA,
	VerboseOps_Unity_Barracuda_IOps_AvgPool2D_mA033F889DA7761D997005543AAB399733355361A,
	VerboseOps_Unity_Barracuda_IOps_GlobalMaxPool2D_m07ECCFE492178FF3E52538D006B47DF040EDD30D,
	VerboseOps_Unity_Barracuda_IOps_GlobalAvgPool2D_mD62B61E43A920E01C23D084CCB8BAD08FE28C912,
	VerboseOps_Unity_Barracuda_IOps_GlobalAvgVariancePool2D_m3D3CAFAE938327B54ED21C507DFCB260628D4C6B,
	VerboseOps_Unity_Barracuda_IOps_Border2D_m3289401D17E0E314DECA947C6A32168D3E435012,
	VerboseOps_Unity_Barracuda_IOps_Pad2DReflect_m66A9DBCA8911A9C8E6EB7D928735CD7512D57B3D,
	VerboseOps_Unity_Barracuda_IOps_Pad2DSymmetric_m85707CEF965E5FE83F5596E28B9E0856C8161506,
	VerboseOps_Unity_Barracuda_IOps_Pad2DEdge_m9B5D86F57A901164CC1947AA7E1997C59D8F0B4C,
	VerboseOps_Unity_Barracuda_IOps_ScaleBias_mCB28533E028FE02B0BCF9808A2EA657B695E4571,
	VerboseOps_Unity_Barracuda_IOps_Normalization_mBB0E7F373239C75F3C958FD269E1B68130425CDB,
	VerboseOps_Unity_Barracuda_IOps_LRN_m87D80499D50BC2514DBDB1D94DDDEC81F5ADB96C,
	VerboseOps_Unity_Barracuda_IOps_Dropout_mC8C01BE36F4FAD0618241711706BA2F0317F3E6F,
	VerboseOps_Unity_Barracuda_IOps_RandomNormal_mA7530FB15D3A6070EF63AF51DA77A27F414521ED,
	VerboseOps_Unity_Barracuda_IOps_RandomUniform_mED13692C408ECB663F5C7F3E3137C3A94DF04452,
	VerboseOps_Unity_Barracuda_IOps_Multinomial_m5A4E079418783AC50C3139A2E2134BE3A0CB9831,
	VerboseOps_Unity_Barracuda_IOps_OneHot_m0FA6EC0F8755895A9FCF9EB25FE49E666C3A10FE,
	VerboseOps_Unity_Barracuda_IOps_Relu_mAF3569F733CA33BFDA90D83980C51F0C57AF153D,
	VerboseOps_Unity_Barracuda_IOps_Softmax_m553C464E4CDA2505BCAF76868659D7B26FD591F7,
	VerboseOps_Unity_Barracuda_IOps_LogSoftmax_mB59FFA471212F4ED1BA6D48DC534E6459F652F08,
	VerboseOps_Unity_Barracuda_IOps_Tanh_m24569A8B10C6BD1B1034A63D656DB3A1350F627D,
	VerboseOps_Unity_Barracuda_IOps_Sigmoid_m5174DBF81060EF5449CE431BA8745A535DCA7696,
	VerboseOps_Unity_Barracuda_IOps_Relu6_mDCC82C3E2107B63DB113A6AA6F14333D47DEA4C7,
	VerboseOps_Unity_Barracuda_IOps_Elu_mB1B183B7CF605BB92DF2DF259844759EA6FE606B,
	VerboseOps_Unity_Barracuda_IOps_LeakyRelu_m05DA9207355D2BB8B7892BC7809365CEF584C899,
	VerboseOps_Unity_Barracuda_IOps_Selu_mFA8CD0F0DD3C1DCF5D64433A25A45E72A8416D10,
	VerboseOps_Unity_Barracuda_IOps_PRelu_mB9DCB2F2047DD20FB326766001686903679FDC2C,
	VerboseOps_Unity_Barracuda_IOps_Swish_m62E8B3B4EFB4E910CFF1262837DBE3E04F076102,
	VerboseOps_Unity_Barracuda_IOps_Abs_m742F34A96601BF9AC79096DC141FDC57D62CE7EE,
	VerboseOps_Unity_Barracuda_IOps_Neg_mAED14123A28534F42181538F3B05397A0D051D4F,
	VerboseOps_Unity_Barracuda_IOps_Ceil_mBFA7A1E3F1218B49115933CB6A7CC01B53BCCC4A,
	VerboseOps_Unity_Barracuda_IOps_Clip_m167ACFB16B61B4D7468893BF8315E4C382EE37D4,
	VerboseOps_Unity_Barracuda_IOps_Floor_m3904DD40A15AD6137C2CB98EAC16DFD195356EA8,
	VerboseOps_Unity_Barracuda_IOps_Reciprocal_m8955AEA43AC90079BB1A242F6F49541D9EC6B46E,
	VerboseOps_Unity_Barracuda_IOps_Pow_m313C714AB9B2D85C4C089D2944DA276A21937930,
	VerboseOps_Unity_Barracuda_IOps_Exp_mF7ED21CF40A08974E02A1FE67D236F020683CD33,
	VerboseOps_Unity_Barracuda_IOps_Log_m6B1C7E6972DA60CA5313998E21794B1D859F3BDD,
	VerboseOps_Unity_Barracuda_IOps_Sqrt_m17326E2F81E7D6162EED5875A34D77615948B258,
	VerboseOps_Unity_Barracuda_IOps_Add_m38C0BDC296FC5DA984A3326437C79FB9998F1922,
	VerboseOps_Unity_Barracuda_IOps_Sub_m4B8F23A94B462AFD7B8A8DDE0CA5CC57A2D8D35F,
	VerboseOps_Unity_Barracuda_IOps_Mul_mB2285D65E6C5F922FFC0F7DC3737A787F1EC5523,
	VerboseOps_Unity_Barracuda_IOps_Div_mF72DFFFC9C216229C57CB9ED190A87B0C068F6A7,
	VerboseOps_Unity_Barracuda_IOps_Pow_m038172C74F27DFE2EAD8A0C18B6CBA5D8CEED388,
	VerboseOps_Unity_Barracuda_IOps_Min_mF938632B7E5C88CB34F314394560D19265F0E588,
	VerboseOps_Unity_Barracuda_IOps_Max_mE7AD94E419B0D1260F68931C27A5B55D298FDE93,
	VerboseOps_Unity_Barracuda_IOps_Mean_m4DE16F10605B20FD14CC77FBC6D6ABEA3633EFB0,
	VerboseOps_Unity_Barracuda_IOps_ReduceMax_m229895224C383B128E79A149FD72D0CDDB65CC6F,
	VerboseOps_Unity_Barracuda_IOps_ReduceMean_m6DC44CA587D228ED21182AD0BE320A34A6A7BC91,
	VerboseOps_Unity_Barracuda_IOps_ReduceMin_mD3EA3A196B5E51CB741E2825B6CDB0909FF1683D,
	VerboseOps_Unity_Barracuda_IOps_ReduceProd_m8D90AC08D5E02D14994F4DCF4C22A16E40B320F7,
	VerboseOps_Unity_Barracuda_IOps_ReduceSum_m006CC3535709347863F04835785A4D551A3766F9,
	VerboseOps_Unity_Barracuda_IOps_Greater_m5B98733EB3F41549003E70EAC37F9A064253F5AB,
	VerboseOps_Unity_Barracuda_IOps_GreaterEqual_m0C9FFB8C06473E88970171492ACB83BCC3852736,
	VerboseOps_Unity_Barracuda_IOps_Less_m558118C3B03E89D11A184B54EF15EA39BEFCA5B7,
	VerboseOps_Unity_Barracuda_IOps_LessEqual_mCCDCCE4FF1FC439FF7E4F402BA758F6710335F55,
	VerboseOps_Unity_Barracuda_IOps_Equal_m3A46C7E9B6CD1C3D5381D736EA4EB28E7DCC3C5D,
	VerboseOps_Unity_Barracuda_IOps_LogicalOr_mAD7EFDB9123B6B9E3B5383321F51DD08BA1971B5,
	VerboseOps_Unity_Barracuda_IOps_LogicalAnd_mFC78E601F1DF9666054B430269D5B55544793838,
	VerboseOps_Unity_Barracuda_IOps_LogicalXor_m4B451C209D0E157122B72029E8CEDABB8FB4325A,
	VerboseOps_Unity_Barracuda_IOps_LogicalNot_m974A9D17FD63F4315F75622A5DC34D950568FAE6,
	VerboseOps_Unity_Barracuda_IOps_Flatten_mE60E8BDA8DCE5BDEF7E0D03691B74ACF398D44ED,
	VerboseOps_Unity_Barracuda_IOps_Reshape_mF20FB7B9F7D2101F205693D8A96691E9FBBD72F6,
	VerboseOps_Unity_Barracuda_IOps_Expand_m23053FE8FC685A64158A7336B26311954ACDABD2,
	VerboseOps_Unity_Barracuda_IOps_Transpose_m884D38ACCFA931D347250A62D6CD2D468C94F60A,
	VerboseOps_Unity_Barracuda_IOps_Gather_mD1743FF9C9CBCD4183D43EE49D45B8583BA9339C,
	VerboseOps_Unity_Barracuda_IOps_Concat_mD2FD768D47474C1C28BCFDB56C94CF3FE33C6766,
	VerboseOps_Unity_Barracuda_IOps_StridedSlice_mFE47FAD8558CD6E0792480DE6873D080089EAA91,
	VerboseOps_Unity_Barracuda_IOps_Tile_mFD4E5936F4994A2AD7D1F9DCA3E529A4077EB05E,
	VerboseOps_Unity_Barracuda_IOps_Copy_m9C494AD0A4E121276798479F0B596B0B7BE53308,
	VerboseOps_Unity_Barracuda_IOps_Prepare_m9B443B3CA74355C522186153C33456EF9ED7D83B,
	VerboseOps_Unity_Barracuda_IOps_ResetAllocator_mB13C7CF212741DF9DC010958D24A6953DD63C3DB,
	DeprecatedTensorExtensions_PinToDeviceAndUploadToIt_mEB291570FB95F07638A21696280067B2982520E4,
	DeprecatedTensorExtensions_PinToDeviceAndDownloadFromIt_m64974B2278CDCD3B2006883663096AEB4B5926A9,
	DeprecatedTensorExtensions_Unpin_m6E46FAE210D077B9333C336AEFBD217208C46C53,
	DeprecatedTensorExtensions_CastOnDevice_m7FA400433938AA4A18DE5D51356761BB33E48CDC,
	DeprecatedTensorDataExtensions_GetMaxCount_m25CED740896383157A65A20DAA1C76BF11CBB562,
	DeprecatedWorkerExtensions_AddInput_mD5B8B38E9B20D643607DF062BD3B3167449BDD86,
	DeprecatedWorkerExtensions_AddInput_mC317A35610CFCB147CD511EF8B2830123DE2D2BA,
	DeprecatedWorkerExtensions_Peek_mF7B4E8FDD3659FBCA8A80A06E357D982CAC06627,
	DeprecatedWorkerExtensions_Peek_m2927D9B7A4472D8B940132347C1970718BF06362,
	DeprecatedWorkerExtensions_ExecuteAsync_mBBF016F74A6D78CF286CEAE152D1577CA4861C9E,
	DeprecatedWorkerExtensions_ExecuteAsync_m30E4878BF0FAA9D93AF84300EFF8140F6D4AF5CC,
	DeprecatedWorkerExtensions_ExecuteAsync_m83EC2656AA7D298D4FAB0114BC7097864FE89F93,
	DeprecatedWorkerExtensions_WaitForCompletion_mC42CF04C8890BE02BBE2037B689FCA8D0EE82743,
	DeprecatedWorkerExtensions_GetAsyncProgress_m8B40933280EA1FF9B543E2B18FDB3D6519B75C18,
	DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m1CAF41BB5F77FE6E3C9612B39251A555F95B0DAE,
	DeprecatedWorkerExtensions_ExecuteAndWaitForCompletion_m5582D9B2EF53D4C8F8DEFDFB50863268300BD313,
	DeprecatedWorkerExtensions_FetchAndTakeOwnership_mCBB531BDFBD54A1B6170858F0998C3CD1219671E,
	DeprecatedWorkerExtensions_FetchAndTakeOwnership_m9EB16C8F642D64B09E3D73C1D5839266DEAB05F2,
	DeprecatedWorkerExtensions_Fetch_m8C0403E7933274E0C3A72A9F129D5C338423FB40,
	DeprecatedWorkerExtensions_Fetch_mAF0A19E34D9D28FA3B50289EA48A4BD276401FB5,
	BarracudaWorkerFactory_IsType_mC15A94E97D8810DB3B3E1E845CDA1F004049AFEC,
	BarracudaWorkerFactory__ctor_mBEFC028398381FB229BF7DD256E3167912AEAF21,
	BarracudaTextureUtils_TensorToRenderTexture_m20E842D480332DF1AC6417634891C3E0A3703226,
	BarracudaTextureUtils_TensorToRenderTexture_m039BBF515D255503EB77C533CCD7154A85FBA324,
	BarracudaTextureUtils__ctor_m0CE7B018206F41988140A646E916C06886E98917,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	WorkerExtensions_CopyOutput_mCB7F6168CAED5960F037CCD8DBE19A4506D10CCC,
	WorkerExtensions_CopyOutput_m3F657D369FA058A457C6AA9D453EB6FC5C650F9E,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RecurrentState_InferBatchSize_m34088E234C02683197FDB6E58B9734326AAB53B2,
	RecurrentState__ctor_m7D51D5FF907387D80ABD5BC9746B0528AE0B6690,
	RecurrentState_Finalize_mCC2BE0BD79C7B6E3D6EE35F4C65A271EDDC4BF84,
	RecurrentState_Dispose_m966F4DBC69101799200195576E3540445A2C7031,
	RecurrentState_GetBatchSize_mD7179408DFB699002482D146596551BFE575CF57,
	RecurrentState_BeforeExecution_mC44BA8F68218F431EDA08D06A3C35C704A7B1AF8,
	RecurrentState_AfterExecution_m55BBC33E093557CE8C4B8B6B1194C471CBFABFB8,
	WorkerFactory_CreateWorker_m09AD7713E2302335DFE56D345D6A329207286166,
	WorkerFactory_CreateWorker_mC833596886E3877A1AA82B0577525DCFBC9CB20A,
	WorkerFactory_CreateWorker_mB889C06662D4A43B029066BDA1AE16DB5893916D,
	WorkerFactory_CreateWorker_m70AC5BF55992CBA48E58F8AD192A938C68163412,
	WorkerFactory_CreateWorker_m5B90B3DE28FEFBAC55AC35E127F378C6F85F43F7,
	WorkerFactory_CreateWorker_m25FBD1B16ABB9BA31173AA1C1F06CC7C6EB4048C,
	WorkerFactory_CreateWorker_mCD91A6662B6C9F06926DD8F320FDB50E05441E91,
	WorkerFactory_CreateWorker_m467D98343D1C1734A28882C5C8856B20657754F3,
	WorkerFactory_CreateWorker_mF8F6A808363F246F77A70C4F3D6EBAFC8C70F137,
	WorkerFactory_CreateWorker_m5B4819BBB1BC17DBDB9A3236877B54B70D72759E,
	WorkerFactory_CreateWorker_m669DE5F7EF5CB91D689A0C04D51AA12F2E21DEA2,
	WorkerFactory_CreateReferenceCPUWorker_m38040CE3269D215E2A9B2B9051215D942B96372A,
	WorkerFactory_CreateReferenceComputeWorker_mE3E6BF21D92695185DCBB8F55BDE1F4E93107F39,
	WorkerFactory_CreateComputeWorker_mCF9C0D7DF7E40451660DECC86F9D3A172DD5C6E1,
	WorkerFactory_IsType_m8F8688DECBD92302749359A72EB814D31E25B40E,
	WorkerFactory_GetBestTypeForDevice_mECE474337A347A07311E99FD67C9C78762E60B28,
	WorkerFactory_ValidateType_m3D9C07E4F47D53CFA0DBE83591B9CFD0913899C8,
	WorkerFactory__ctor_m3203619B4166E69246AB5EC0E1C0E74CA0EDED9A,
	WaitForCompletion_get_keepWaiting_m383F96A9D64B27E4BA7788CF20D91FD29BF601F6,
	WaitForCompletion__ctor_mC085295D00EDD1F60CAB8A1F364518600C2AF227,
	ModelExtensions_CreateWorker_m2075EB87C786D24E059FCEF332909F73913249B9,
	ModelExtensions_CreateWorker_m550953AC197921EA4B627C202D1C8746185FFA6F,
	NNModelExtensions_CreateWorker_m2F39911618B3D908FD334F8D721D543C51F33313,
	NNModelExtensions_CreateWorker_m0AC12C1B4510D18BB50446D7F0F92F267A697DCB,
	D_LogWarning_mA1462B31DA2A11C9DA4B368656672B52EE716AAF,
	D_LogWarning_mFE10AE2D8CA0E12170C00C5777F45387F1AB5EC1,
	D_LogError_m05EC3442E8D537E08CEC54E32AA538515ECFBF50,
	D_LogError_mC0E0B4376594F7717583F05FB2EC214C9407E3FF,
	D_Log_m11CF5B44ED543120ACD1C62CDE6C9C2CC8C497BC,
	D_Log_mA2912DA987969E3FD73ABECE1459EB2609ED0487,
	D__ctor_m74A02E52FD74A8C7B96368E1FD2D8294EC8ADE7F,
	D__cctor_mD4656A07BDC06CB9BAEA2CC57C9827900F1E0ECE,
	Debug__ctor_m3B4030B2025616B75ACAB92379A50E321BBCFF61,
	NNModel__ctor_m5338157422C1080B85F5A8BA287971963C2FBF20,
	NNModelData__ctor_m4AEF6A6827168A5358E34A427C51FD32A9D5EBC2,
	StringStringPair_Equals_m22E0E525ABA1D123200B0B0FFEA021D75188F6B1_AdjustorThunk,
	StringStringPair_Equals_mB0F07D01F42984D1344AAD802393DF0C69EE4603_AdjustorThunk,
	StringStringPair_GetHashCode_m236BB8939E59203E355506C775F4205BC98B012E_AdjustorThunk,
	StringStringLongTriplet_GetHashCode_mFCC3D3D3F7179C539A9872DBA13430B9F29D8F7A_AdjustorThunk,
	StringStringLongTriplet_Equals_mEB32F0FF2ACB6FFF56BB1BC1D66B762881418B90_AdjustorThunk,
	StringStringLongTriplet_Equals_m21C23079D2FF54A85CA941F45748D64F078DA72B_AdjustorThunk,
	StringCache_Lookup_m3DA5C5F7983EC9725BABAC962ABB20066C51E78F,
	StringCache_Lookup_mF98E0A3BC547F702D2BD0A38344FD8B340120620,
	StringCache_Clear_m96E67928189FE6FEFCAFED0B12A1631C2E420296,
	StringCache__ctor_m1990C4F3DDDDE6AB1C5C3827FC6A3111103D6778,
	TestSet__ctor_m73139331BEC5BCC9BFD368C70A3A3A2CD715D09C,
	TestSet__ctor_m259E2AAFC6468F96709E0433CA1B7153BA209D3C,
	TestSet__ctor_m62CDD2D141936D27AD688E51981F0AC65F61AC44,
	TestSet_SupportsNames_mCF991EBBE6323A3577C5247EA2804C7DF74377E3,
	TestSet_GetOutputCount_m8A16AE52D470B68BDF442DBECBDB1ED81CC3C423,
	TestSet_GetOutputData_m2D3AC0C6B796A432F4A8E2E53794B3CD62C60901,
	TestSet_GetOutputName_m28828748C43040A2E945367995EA8732CB18AE81,
	TestSet_GetInputCount_mB40FFEACEB0CCC94BB058E95F7A56E39A33FE12A,
	TestSet_GetInputName_m42D10EBB63A1A5DE252A36D3E6FBAA5926B511CC,
	TestSet_GetInputData_m1B352DDFB44E0DF22380CD77124A39DA7FFC6DD7,
	TestSet_GetInputShape_m690F171B89BB3339E1FD160A93E4DC32AD8F932F,
	TestSet_GetOutputShape_m70A3E5995E71AB9ACF38B0AAC7DD1EFB2D0BE06A,
	TestSet_GetInputsAsTensorDictionary_m8BED32DFEEA0689E9C416F33365FFCCC3D7CBFAF,
	TestSet_GetOutputsAsTensorDictionary_m4CB1677BEAD41956CD89A58BB2717857A13C183D,
	TestSet_GetInputAsTensor_mFED697E063BDC5EE075F07CBF8611B145BEF973E,
	TestSet_GetOutputAsTensor_m762D483A5A8478327967B1589153A1A25756B53D,
	RawTestSet__ctor_m8D3038EA922A2BB6120A18C3FC3A327E64E1F6D5,
	JSONTestSet__ctor_mC882D97AE86C23B0E1B0B075D4E504FC75A1D23D,
	JSONTensorShape__ctor_m119D08A2FA93B7F778614E6065A1FF8E0163CF53,
	JSONTensor__ctor_m99BA5B2F4618CE8E29D740B428FA16507695C94D,
	TestSetLoader_Load_m03CC2D4EA15F8F4629D85834C0B184E1AA6D9A6A,
	TestSetLoader_LoadJSON_m984F4CAD6C328B7F08B45B7B35A51EBD97C37E40,
	TestSetLoader_LoadRaw_mED4A00FF2763DD53C56C4CEBC9B199DFB13A4993,
	TestSetLoader_LoadImage_m4493BD0BF8368A1B4B5E50A2CD7476F76F3C6C77,
	TestSetLoader_LoadFloatArray_mEA24CBF6262EF4E5800CB6F7ACD7761B9CF12D4E,
	TestSetLoader_Open_m6B96FBDDEA23CF1FAFFE7C2DACEB851C1D51B6C9,
	TestSetLoader__ctor_mBE544C19630A4F886086753B9AF594300E7D81F7,
	Layer__ctor_m957463F7485979F1A4303CDF6567726F372473B8,
	Layer__ctor_m0C35CA580C8673A271835637DA402EAFAD998FE9,
	Layer__ctor_mD6126A6E72F8AF737235767C4CF4F8A75616FD38,
	Layer_ToString_mCC4C66126907C2E4D0C7B7750F403AFA4FE31503,
	Model_get_Warnings_mC7B738A80CEB78C9134BDB6B95BE69BA6968BFE3,
	Model_ShallowCopy_m2E1ED78A4AE63662DE6A374E24627727EFA9D499,
	Model_ToString_m25203953049C5B9E3F32EB8BA7D294A95B9436C5,
	Model__ctor_mE7DB62160720315A40D6DA84BCF71B22FCFE7CAF,
	ModelMetadataExtensions_GetTensorByName_mF06304C93A3265CF3062B7C21F83912E84A6E465,
	ModelMetadataExtensions_GetShapeByName_m222A6C35744DB2EAFCA94B4099821015DB548525,
	ModelBuilder_get_model_m5EBF1CD4BD24FFDE2602FF07AF1CC08127332C2C,
	ModelBuilder__ctor_mF4EE844F9B8BE39EDEDE71F5340626A957DEDF60,
	ModelBuilder_Input_mA032E660B8028813D48B9959BA899C028DA72096,
	ModelBuilder_Input_mC288A9C2E774C54B071DACEF42EF3ACB651DEF54,
	ModelBuilder_Input_m103742E658E0D6543D7CB38BB9AE432E741C7D28,
	ModelBuilder_Input_m67A5119CC29BC352D83181DDD64EE2D8C6C9D84E,
	ModelBuilder_Output_mAE89783C2800ABC157DD80F8B2BA2FFA6F976176,
	ModelBuilder_Memory_m78755CD28E66C2D4EAEF7190559EC3CF3500F6E1,
	ModelBuilder_ResolveInput_mA0595F1F0F77DBDB58D6894A7E90B1B4356600A9,
	ModelBuilder_Const_m407EE4204FFC2336DA5A8168E4C76939D225C516,
	ModelBuilder_ScaleBias_mEF8005F72B9723D4B710B07486830FFC33857C41,
	ModelBuilder_LRN_m076F4BE295A682A2738F2C98955C1920584039AB,
	ModelBuilder_Normalization_m4D490B6F8B411995A4F6E65C477291CD1B91FB80,
	ModelBuilder_Dense_m0504D4E99D3E7CF97A71E64A7DA7DB699320C835,
	ModelBuilder_Conv_mA6DF99779F07CA8D01492D4038F75162540793A2,
	ModelBuilder_Conv2D_mEE1E5FCBC1597123F8808CC634279ED3E3CC6717,
	ModelBuilder_DepthwiseConv2D_mEC0927053168AA61F4512FD1A9C87249C6D05C15,
	ModelBuilder_Conv2DTrans_m65AC9ABA8534300420BC726A025749C7C624DD75,
	ModelBuilder_Pool_m1570C68CB071A39A45A44CABE79CC92E618883D0,
	ModelBuilder_AvgPool2D_m3E18A63B70B7D5EB07B5738FE9E894C2F1579A55,
	ModelBuilder_MaxPool2D_m847085CA914A09F3C41EFCB39894D122C17D11CB,
	ModelBuilder_GlobalAvgPool2D_mD4F9E32E4C84288A15EBB499CCE7AF6167D9EE4D,
	ModelBuilder_GlobalMaxPool2D_mFEE37A470FAFA41DA229DF884B49845435689789,
	ModelBuilder_Upsample2D_m6D226D5057FB7F92D820B728FE58649EB679D1CF,
	ModelBuilder_Upsample2D_m8C98F245E4F33803C67DAF815A863D3060350767,
	ModelBuilder_Resample2D_m0E7EA8B219A66221D0A20A222625E4E49E02BDDA,
	ModelBuilder_DepthToSpace_m1A2CF707E22C5DD367A53DF6B060372B58FDC897,
	ModelBuilder_SpaceToDepth_mA5AE18538F28911E0415391019681D72D829721E,
	ModelBuilder_Reshape_m093B78877A0961B961AC652D9B7D84E8DAF56E73,
	ModelBuilder_Reshape_m1EA2FC96AD3D8A5051BCDCDA4CB42F2FBCA28B67,
	ModelBuilder_Reshape_m7CD923FDE16452625C8E6194BFA4463D08DE5410,
	ModelBuilder_Expand_mADD55C852754A57D28332B65EED01CD567D65A2C,
	ModelBuilder_Flatten_m3A4D2AA9F9391E61CF9677C701A3030DCF247108,
	ModelBuilder_Concat_mE55D778241A6172BA01C25E445B47B15CF04339B,
	ModelBuilder_StridedSlice_m9BA4663BD33A2E5622C0F393199D3F8687E43FFA,
	ModelBuilder_OneHot_m7550923BC2D3C8BA70288DABD802ADCCFF347598,
	ModelBuilder_Activation_mEF7DD20109A32C3777E6CE8D7EA3657D8247E5F0,
	ModelBuilder_Identity_m32FC2BF832EB7825820CA86E9AE0E13C9C1727E9,
	ModelBuilder_Relu_m7468573B51E40451607E43DCC82089F9309076A4,
	ModelBuilder_Softmax_m85A1F028885505F6F854D8E278DFE51FED8A1879,
	ModelBuilder_LogSoftmax_m6CC35D122D1E715E3BB351960EF349BB05A10CE0,
	ModelBuilder_Sqrt_mDFFC786EF1637A634C9027DB303883F7572F612D,
	ModelBuilder_Tanh_m401D4EB6497D8B10CD13DBC17305F2135F9EF588,
	ModelBuilder_Sigmoid_m6B4595C0E5DFF3F0D5E9A9AEA3476CCF9C6860C2,
	ModelBuilder_Elu_m5E500D1E3EA95388E227F9448C7129795896787E,
	ModelBuilder_Relu6_mB69087212E5F7E2991740E1123EFFF92888F1759,
	ModelBuilder_LeakyRelu_m1FE102C8B8D6596D33FE167FA9903BBF83227639,
	ModelBuilder_Selu_mD0A5F8CC804CCD835526FC36AAD4C77A3F831981,
	ModelBuilder_PRelu_mB236DA191386FFD69BE87DEEA6A34B55627F6B69,
	ModelBuilder_Swish_m6F23CCA3A601C975BB610A94D937224FC8E44FCB,
	ModelBuilder_Clip_m17861DE7363E98667685ACD220B92FA8422BC525,
	ModelBuilder_Exp_mF018D7C25156DE90162D7A0A79D542BF7FA328D9,
	ModelBuilder_Log_mE4A293681F46B8D6F6F52FBA971C75C303D96EE0,
	ModelBuilder_Neg_m0371D8E20628F1722018EFF8D9AE044E24BAF3AE,
	ModelBuilder_Reciprocal_mC7FFF3CB9A7147D8B9ECF6513913785C07C2BA05,
	ModelBuilder_Abs_m2E2E3BBC9F34273A3A464FF16CB4EFFA96A142BC,
	ModelBuilder_Ceil_mE9AB23A37A1DBDFFFE1476B08C28AC400BE5DB26,
	ModelBuilder_Floor_m56988847D5DE0633A7A5A6CD790775903A0F0535,
	ModelBuilder_Round_m96B6E07278AAB972E30D8A22295046855D65A38C,
	ModelBuilder_Broadcast_mDD7D56873FDBDBF81433F76EDFA242674AD30F7C,
	ModelBuilder_Add_mE769F11A14149A38793DB9BD4F6B7A6C0A457F91,
	ModelBuilder_Sub_mF60B7FC61141CC79752707787A4633E6F92F1215,
	ModelBuilder_Mul_m0786D094487BE3050EA3A721D47361261271C02A,
	ModelBuilder_Div_m1E483FD46C8D5FF266060941D79A194ED22D3E36,
	ModelBuilder_Pow_mCC128C9485EC22751C519D371288FED5751758FA,
	ModelBuilder_Min_mA388F18C836B55B43EBC733E0AE347C60A87DE35,
	ModelBuilder_Max_m7B33EED82528CD9ACC4CC39146B880A6818B0C09,
	ModelBuilder_Mean_mC24CAACA2DA2078621AE2BA38D080D0E30F2839F,
	ModelBuilder_Greater_m828380061A6122FE5B792EC0B87277DD50A1F672,
	ModelBuilder_GreaterEqual_m51B863FE76B43477B28BEDF526FF07FE1D16FCDC,
	ModelBuilder_Less_m27C07092CEB53102B2CD1EE9AB01164CC1D5DA15,
	ModelBuilder_LessEqual_mF7DA8162102CC453A57A404C45283D5C65B1A72B,
	ModelBuilder_Equal_m0402C5702B20655739CDBEB35F83CCCBFDD94641,
	ModelBuilder_LogicalAnd_mA5622054E5D4F30BB710020E85F438E4FAC6863F,
	ModelBuilder_LogicalOr_m1D8C73816E89A8BF1A02E4236026CF5D91996042,
	ModelBuilder_LogicalXor_m380E8E0491CCC9FDDAC466E1DF72C0D2B28D44BA,
	ModelBuilder_LogicalNot_m7A6AFBE864F31D8C85404A43B9BC15CE122AC08A,
	ModelBuilder_Pad_mB425700CC8EA1C4197462671483A657ECA3642A1,
	ModelBuilder_Border2D_m5D5695B4F559AF37876A0D9CC612BBCE5D085130,
	ModelBuilder_Pad2DEdge_m68F25D99D0CD9BA700BF1B370EDA1F58E09A96CF,
	ModelBuilder_Pad2DReflect_mAB74A4E5A6B12B08C4AED04D9654F4C265B3DEEC,
	ModelBuilder_Pad2Symmetric_mDAAD7317F24338AAF7448FD10E8E107E14AA1D2F,
	ModelBuilder_RandomNormal_mCC455688FCAF45ECC72BC3C825AD3E0B90DF5033,
	ModelBuilder_RandomNormal_mD98E97A40E51CA28EDA8FB79D5E79B0E192FEBA6,
	ModelBuilder_RandomUniform_mFA72F011D1E3907FED8B173312A8264B0198DFBE,
	ModelBuilder_RandomUniform_m23D5F72C238C7EDB7D886DE5AB471A96FDFE437D,
	ModelBuilder_Multinomial_mE53C1F6389EBAEB808E8F95903F42EE253198C83,
	ModelBuilder_Reduce_m21A98FABAD4B77E69DD1A9770CB8137064584B28,
	ModelBuilder_Gather_mF3E8191417FF39358FDD3A02CAB50386497AA669,
	ModelBuilder_U3CConcatU3Eb__35_0_m082DD4CBC90E6432C8FC55D17977A5C9A4AE5F3A,
	ModelBuilder_U3CPReluU3Eb__50_0_m2F38CD90EC01C0626DCA441509EB52187C438B38,
	ModelBuilder_U3CBroadcastU3Eb__61_0_m47A805FD887C245D61372B9191DEBC9EBD53A420,
	ModelBuilder_U3CGatherU3Eb__90_0_mF222A3DDBAA3BD3D3692E41AA820B103C61A62F3,
	ModelLoader_Load_mDF489DC2D576B3231D525B35DC2022A920736C98,
	ModelLoader_LoadFromStreamingAssets_m3B20F0D660B7FDE47FE76921159BEE931428B04D,
	ModelLoader_Load_mD4006628659FAE053BE0C141C93D03DAC2DF669C,
	ModelLoader_Load_m9B489DAB1F355726DB6DA0EC18226472B9DE096C,
	ModelLoader_Load_m58F36351DF3889EA6F7DCDB3EB940C2330082202,
	ModelLoader_Load_mE31EBC1E45014D1E6E7A33BC16008EAA358CA483,
	ModelLoader_PatchLayer_mAB45150E5ECD6CBFE0B81A494DE632F40FD9CE78,
	ModelLoader_ReadInt32Array_m58A0D9C0017D192849E4CBD9996B7C471ABB2C07,
	ModelLoader_ReadString_m8D37A10ADE128F9FAEFE1BF5CED5FB0ABD31D706,
	ModelLoader_ReadStringArray_mCD34539D3287565F28853EDF7D75F9AF528A5A5B,
	ModelLoader_Open_m8B580C2510487B48B86BE95F8B5FE758469F6765,
	ModelLoader_Open_mAE7E583BB8FEED507E3B3ABD9137057680E4CE2E,
	ModelWriter_Save_m190651552793EE4597AE0A51D94F69CE8768B703,
	ModelWriter_Save_m1533E39E2022AF2BF549126509841BAC034FFF18,
	ModelWriter_WriteInt32Array_mFD4C10F5D1E0A631119111351657BC6D1B72D4D5,
	ModelWriter_WriteString_m08B6841F5613530E44AD77265DF57C8684A16CD6,
	ModelWriter_WriteStringArray_m0C2D17E82A71FE60D4FBF22D13224C5E28D6180F,
	ModelWriter_WriteStringArray_mF80F146A80A6405037899FE11895042674C1C623,
	ModelWriter__ctor_mE74D748A8817DC042314166BA84DAA8184CD2333,
	NULL,
	NULL,
	NULL,
	NULL,
	BLASPluginFactory_CreateBLASPlugin_m40A6243267A427DF31A91C4CA9196A0A464F215D,
	BLASPluginFactory__ctor_m2D8C1B6F13AE289BC85535DAB8F8755DE50013DE,
	TensorShape__ctor_m126ECFD140866891D66C2E913D48F1FB38E0ADC3_AdjustorThunk,
	TensorShape__ctor_m07791CB2BAE2B0B736012C35C5698D08778A3DD4_AdjustorThunk,
	TensorShape__ctor_mC5CDD8CF7566EDEC57579D1AF14A57F2586242C1_AdjustorThunk,
	TensorShape_get_kernelHeight_m1235C903239C4CB6BB0F3A8EF798A6F175924B65_AdjustorThunk,
	TensorShape_get_kernelWidth_m3C9AAD4BAF8891A299481B61B3393665BE76825C_AdjustorThunk,
	TensorShape_get_kernelDepth_m26D725DF19D2D6ADF2997AA87642258A7224887C_AdjustorThunk,
	TensorShape_get_kernelCount_mD3B5820538EAFE4E6CE03E908DE8BB149E646E21_AdjustorThunk,
	TensorShape_get_flatHeight_m9807DDA1090F6CADDC842B89DF4DB80FE00425CD_AdjustorThunk,
	TensorShape_get_flatWidth_m4D83D4BA0CA4D860F75563A271726BAF1428A043_AdjustorThunk,
	TensorShape_get_length_m3254646D887BE50BDC395C94B0821B95D17FBB49_AdjustorThunk,
	TensorShape_get_rank_m45956F2F4AFBA43DA6C05FBF8655007C60A5CDA5_AdjustorThunk,
	TensorShape_get_dimensions_m44A4A5D5DD22A63EACDE7761F27DACC19127C782_AdjustorThunk,
	TensorShape_Axis_mA5C01C16551954065A667BE84FA30DE42AE2DA10_AdjustorThunk,
	TensorShape_GetPositionsFromIndex_mE5C866C657C681DDA9B6258B494754C417805860_AdjustorThunk,
	TensorShape_GetPositionsFromIndexNCHW_m53788681C72DB7EED79256BC131A7AF3CF55234B_AdjustorThunk,
	TensorShape_IndexWithBroadcast_mA0B0B5ADA68C419E54A6BB27B1DDC2515FA35DEB_AdjustorThunk,
	TensorShape_IndexWithClamp_mEA115511D0A78424EA0845E5FC5B7D2C795C950B_AdjustorThunk,
	TensorShape_Index_mB433AAA3540DE53DB6BC1BF98BAF9AA0EFFC21C0_AdjustorThunk,
	TensorShape_IndexNCHW_m23D44081E8514B4BA3348C565F3832DC1F48C73A_AdjustorThunk,
	TensorShape_Index_mCDBC71CBC9BEE41F08AA7956E403F93C9FE6CC66_AdjustorThunk,
	TensorShape_get_Item_m767CAA4C2DA33216A89FD4B172FA2330BC0883B0_AdjustorThunk,
	TensorShape_set_Item_m31AA423BA61AB3E59B4C224AB7573C347106411E_AdjustorThunk,
	TensorShape_ToArray_m05715825A4570959A1EDEB105EFFA1CC6DD93986_AdjustorThunk,
	TensorShape_Squeeze_mB7AB4D7D0F6BD939256F99D12920FCC80E0B97C4_AdjustorThunk,
	TensorShape_Flatten_mD03A028CAB6CCC0B7F954BA596E8C79678EC39AD_AdjustorThunk,
	TensorShape_op_Equality_m2A085DB7C603A6CB46CA09B15B5BB77556567AFB,
	TensorShape_op_Inequality_m5065CE0A362315ED66FF27533A0CC6792D071068,
	TensorShape_Equals_m188E12EF5B55215311887E20C56487454E213E24_AdjustorThunk,
	TensorShape_GetHashCode_mF682CEEA6F3B86C52DF40338E7085A49886FA92C_AdjustorThunk,
	TensorShape_ToString_m4A44B993E6DA23D11508E38C4F1C1D627C1C92DD_AdjustorThunk,
	Tensor_get_disposed_m1B59F106F3D9E6AE0FC22F973A732A1FD4A8EA98,
	Tensor_get_allocator_mD495AED6DA1D5ED875A40BC44573D8FC68EE649C,
	Tensor_get_batch_m04F2D1943755E0534373384D4F9FEADD04A2476B,
	Tensor_get_height_m39F21DA94B50A8A58755120E4954682AB9FEE2D0,
	Tensor_get_width_mE7DD92B0A66BC39879663DF667BE23D0612FA6FC,
	Tensor_get_channels_m1A78B5AEE3F6C4D5C33F4924F62589C75FCBF14D,
	Tensor_get_kernelWidth_mD4A5EB74F4B3F08B38E2700750EFF5A5A00212C4,
	Tensor_get_kernelHeight_mDC7FF39D2B303D6B5E57F853FF38B72895B67B1B,
	Tensor_get_kernelDepth_m18CB986B39B0E65220E21F8E1EBBE331C6125B5F,
	Tensor_get_kernelCount_m0AE8B870F6F98E16CDF842AF011B654E6710190D,
	Tensor_get_flatHeight_mA2425A53E58C3F13DE29FB12A244A6FAE454EA95,
	Tensor_get_flatWidth_mF6291E1F78ABCC39DE6DC40F17466A1293502F59,
	Tensor_get_length_m45F7144BDFE6F27F3442BF2BD5BB3EA9091CBDDC,
	Tensor_get_dimensions_m99AB8558A576E33B67AB54BD44994C7C19485B6D,
	Tensor__ctor_m20F3355CA261D431CE0BD608E93B3B1C2D6DF162,
	Tensor__ctor_m8B8F1BFD8DC5ED3D7141125D28E67057B9696050,
	Tensor__ctor_m313B92179DDE6F954C47E5C4B3F5805C21D31242,
	Tensor__ctor_m7CB3644485C78282A3DB6963CBC96882ECAD9EC5,
	Tensor__ctor_m0C2EBE0329D764AD5AC555C45D98E9093DD6B030,
	Tensor__ctor_m16FB274008595F6E06B2EB83CA205C2851FD3E04,
	Tensor__ctor_m4D727D3EBED0CF6A2F4040514ABFAC024EE578BA,
	Tensor__ctor_mC505D8F258EF4E62A018421FAB95E231B26084E0,
	Tensor__ctor_m231A76C110457ACBB7EEF80BEBB5177416F2C804,
	Tensor__ctor_mD1B5DF1C693678E259FA8D756F44019E9170F300,
	Tensor__ctor_m6A61AA6016C19032C262268961194731A002FA22,
	Tensor__ctor_mB458FDE0CC4F6B728B4AF516AD55F353FDA6D535,
	Tensor__ctor_m4205ECAC3D098EA8497C077C8311DB742831DC10,
	Tensor__ctor_m41B4D551F4F90020D904D287338B3BAD0379A249,
	Tensor__ctor_mD34C0B8FC063A29E6B0D2F9258A001019264F306,
	Tensor__ctor_m553F2FC3B1774E362285B4EA2B913320D75CF15E,
	Tensor__ctor_m5A8B6CDAB537167B55D573A02712EEA997EC65B8,
	Tensor__ctor_mE7C829956C38FF0A3B742C18D5706B0D208E1694,
	Tensor__ctor_m1C52EF8FF36E7B96214ECC3F4D9DDDCC61D1B62B,
	Tensor__ctor_mE87DFF4C78DCBFC1CA9682F8CB71A84EB343E4BE,
	Tensor__ctor_m75E84F76CD3B31274D2B79864158E615649AF3BE,
	Tensor__ctor_mC6CC56AD45C4B41C6292E3836235DE06FF3A5532,
	Tensor__ctor_m417C4F16DB613105C34273FE7885DB550E0F2BDB,
	Tensor__ctor_m9967E03A1826F0737BF67FA6D0A90B9A3BD21E31,
	Tensor__ctor_mA5B7A92813B1E8FE41144B6570CEB7E38E7B9299,
	Tensor__ctor_mE389D1741870D04E67792307AE40ACC12380AF7F,
	Tensor__ctor_mA1C833E07417D7E9E2B06FAAB66BE55DA236E651,
	Tensor__ctor_m9363FAB521CF9460F96A5477F1B704553A13461B,
	Tensor__ctor_mD3D8B14154B337198A06DBE5BC91B5A4FF6C2CF4,
	Tensor__ctor_mD9D4B975A655A8F4CAC8FE8B2B0A40909ED96DAD,
	Tensor__ctor_m7828454CB3D5D2B039E5C2DD79B96A480D86A019,
	Tensor__ctor_mFA0A019B85B1C151C4527963F5FA75C30CCC34E8,
	Tensor_Finalize_m1992EF741EE2FF9A5B8894633C7133DC704662FC,
	Tensor_PinToDevice_m3F7A85ACF8A7141960A2EE29CF0195EE689D9494,
	Tensor_UploadToDevice_m3BE5B7DFE2E7E6E524D2C5CFF27D4D869F202F16,
	Tensor_AttachToDevice_m9E445AC49BDBE2B15EE9553C94B4D563630F4660,
	Tensor_DetachFromDevice_m589956BCE22B738F75B355A95A3C41EFDF9B2C9A,
	Tensor_UploadIfDirty_m0E11942DA16DEEE372D9613B781A1B1AEA5030F4,
	Tensor_UploadAndInvalidateCache_mC37D8AA40696669A26328EBFC17F9C57BE567625,
	Tensor_PrepareCacheForAccess_m4BAD797724D6671872128679BF7B274F23E6C79E,
	Tensor_FlushCache_mA214E5DEA6A27A43B97A7A7ED16773065EBC85B4,
	Tensor_ShallowCopy_m2A6D7F7E84A9F5E3A9CC3FB652114DDEF9168158,
	Tensor_ShallowCopy_mFF6625C66E11AC08AED9914A4221CAF45005C12F,
	Tensor_Flatten_m8EE5554EC0F558E0CDB85963045CFF382FEFEC7E,
	Tensor_Reshape_mFBE19495F2AC4544047AF6FA7F480ABD2C3D9A82,
	Tensor_DeepCopy_m405B8E24D39FE2F02C22253E0ECFD1933F0CCA9F,
	Tensor_TakeOwnership_mDFDC166C8DED59805A6C7F4FBBC3697D4549E2BC,
	Tensor_Invalidate_m5B0B6D898B79104FF55961A80AF339D065F28C90,
	Tensor_Dispose_mF1407F9C0B46C8B59041EB3FAEBD1A57A61031A0,
	Tensor_ToRenderTexture_mE463C9AA4A5053F43D868F38F1714875F2D2E3F3,
	Tensor_ToRenderTexture_m32DD44B46E0604BF7836F6D6898F76FB132E93BA,
	Tensor_ToRenderTexture_m7B43D8279EE3F4D33F473988E02B4DBAEF576B56,
	Tensor_ToRenderTexture_mE2D5950E0FADDA45F34C4A264DC89F41C0D25607,
	Tensor_Axis_m5ACE99AFFEE89B499C52F6BD85A953A7D40BDCB7,
	Tensor_Index_mA843A11992EBF19F4CEDA191D651E2C1ADF518D2,
	Tensor_IndexWithClamp_m09BA8BFF3E5F5F17684755FDA80BA64F435D7785,
	Tensor_IndexWithBroadcast_m322B2B2AEEB4D1640E4397D8CD51DB36C54B730A,
	Tensor_Index_mD31250DE278540CC6DB4B4A129A736E62690E443,
	Tensor_get_Item_m0D3C2133691E0627519CE9E98BE225D47FC67C6A,
	Tensor_set_Item_m58F07BA2ECBC27ED9020D908E15361242F088330,
	Tensor_get_Item_mCE3B1E75186C93F68E5B5F02FDC0A810AAED072A,
	Tensor_set_Item_mA6847F921DB35DA91D0FFB66A1D589C97AD0FF55,
	Tensor_get_Item_m1A6E21751EC7DD265AD885E147B17486FFAA7217,
	Tensor_set_Item_mDEC6E17758D205156952A0458FFC7ED6D41E8376,
	Tensor_ToReadOnlyArray_mCD52D792D1F92FEAB02530FB3A950A5F801292A5,
	Tensor_get_tensorOnDevice_mE71A3C2765C73CF3F4D689DDBEADF8439F50C31A,
	Tensor_get_data_m600A13C996A6DB7BC0F679A6C2DABED2F73C4F05,
	Tensor_ToString_mE9AD427456DB0A0F91CC5DB292DEF8F7D9B44A10,
	Tensor_UnpinAndDisposeTensor_mF6E4108BD29A7B8F50EDF357BEED0CB30290228A,
	Tensor_get_readonlyArray_m6EA38E6FA503BF40B0CE8EE832EE05D025128B11,
	Tensor_get_readonlyArrayOffset_m764EC9495FE9925D670307265B4FA7A558855070,
	TensorExtensions_TestInit_mAB73912668C8A2BBF8C77FF08E2E2635FCC896E6,
	TensorExtensions_TestInitCos_m2C5464ECD8C4EA78221FB235221B461CB83FA94D,
	TensorExtensions_TestInitValue_mB8E685E20A91CFA3698EBB70C1562E6F0C714345,
	TensorExtensions_AsFloats_m1A746AE88018C62853AE3F2CC7B2736AC95D30AE,
	TensorExtensions_AsInts_m152AA277835D68A73005F5496BDD61278FB92EE7,
	TensorExtensions_AsLongs_m23589CC8FDF5528582727BDE6A9D328AE1DE0905,
	TensorExtensions_DataToString_mFBCF24AA3864B52038934716408BB4FB228A4660,
	TensorExtensions_Print_m65CF7C273BDDCEA43A4229F8E4D1DB40ACD031DC,
	TensorExtensions_PrintDataPart_mFB54AB02F47BEB60A6473F017F8CA179E7222F3D,
	TensorExtensions_Equals_mB162305D7A1811A7BAA0FDE5FCC3420E29B2F586,
	TensorExtensions_Approximately_m0091CD0705BCA6417494CAA4AA90AC0B37B95206,
	TensorExtensions_MaxDifference_mA47629D00F613D4F6267E923E0024C073297406C,
	TensorExtensions_ArgMax_m335657F028DA5AE7B4CB61D9C5E3605AE5FE6D10,
	TensorExtensions_Reshape_m4916E40361D017D9AC9B126E11EBA2D5029A7FD8,
	TensorExtensions_ArgSort_m5869ACA6CD8F72DFF8448D0765307AF150EF5BD3,
	TensorExtensions_Gather_m4E592878BACEB54B093C4E7DDE8909D59E353140,
	TensorExtensions_Concat_m21AAA10168D26F4BF9068F7D25ABD51F2227D2DF,
	TensorExtensions_Concat_m432CE385FBBF32ED831884491E68CEFFCFF07BA1,
	TensorExtensions_Max_mBA6D7EAC739777102317B42B876986913CF81E11,
	TensorExtensions_MaxShape_m9C205390BF0578D2D65555B34E8009DFEF1105F8,
	TensorExtensions_Scale_mFECA286ADA3917E8E7980A8C0AF213ABD9783791,
	TensorExtensions_Scale_m475D66FBD991B056A5765A19D020DB25A87F3841,
	TensorExtensions_Reduce_m780ED552FA1CFB41380BA23D53667AE7F9B8C089,
	TensorExtensions_Reshape_mFB86AE497DA9B4620E41A954D304C4662B3FFBD4,
	TensorExtensions_ApplyBorder_m3BDE1F6EECA5CC63466512D231D13C95B42F70DC,
	TensorExtensions_AdjustPadToKernel_m0387AAD441004DEB7492A16D08B4F5707BA8BA87,
	TensorExtensions_AdjustPadToKernel_mE44B8F4D55961439FDBA51F16BEF683F97321034,
	TensorExtensions_AdjustPadToPool_mEE266C66057EB269C0BE49EC74CDC86CE00B3880,
	TensorExtensions_AdjustPadToPool_m34CCFD3513149EB48C3C96C9A7622E498F6DBCD8,
	TensorExtensions_AdjustPadToPool_m8ED4627D7975C87FFCE6C36E7622B50199628CB4,
	TensorExtensions_AdjustPadToPool_m05DFBC976077C012E884256B543A9E5A4BFF7BED,
	TensorExtensions_ApplyPool_mDCD8B79817D906464E2E755772733D68B37197BE,
	TensorExtensions_ApplyPool_mA1D79553CA22280CA62FBF3109E1606A7E3A63BE,
	TensorExtensions_ApplyKernel_m019F06CBE354D8CA4379140FA6017ED0F1CA4EA9,
	TensorExtensions_ApplyKernelInverse_m75D46F8DDB42830BF2E209A30847EA6514FDB3FA,
	TensorExtensions_WrapIndex_mC97F1ADDC9D8F073A95D99B7C044E983AEF33091,
	TensorExtensions_ApplyStridedSlice_mE71B24E00DDA544A9327C36EE8B6F4193E18AA65,
	TensorExtensions_CreateFromTexture_m8696563C746850188DF8B08243AE9D0FB35969C7,
	U3CU3Ec__cctor_mB36C6D214448FDFB325E538B037D835BC687D315,
	U3CU3Ec__ctor_m3F3ED924BCACD2912D1F1B6F1070B3E1221E041C,
	U3CU3Ec_U3CPatchModelU3Eb__5_1_m8450B49CD3E1254EA757107D1D3CA08C70843A01,
	U3CU3Ec_U3CPatchModelU3Eb__5_0_m9D7F0B1EDB09B68DDF1F6E09F9689178516D0E42,
	U3CU3Ec_U3CValidateModelU3Eb__6_0_mCCDD3E4EA0F87A9EF2AFC0839876EEA090EE3951,
	U3CU3Ec_U3CValidateModelU3Eb__6_1_mC154985A84C849B001B1107BCC98089CD566F2AF,
	U3CU3Ec_U3CValidateModelU3Eb__6_2_mCAF8AA5D02748D8C5860051F6953649BA6A01EF0,
	MatrixMultiplyJob_Schedule_m4B3BC65CF01EA37867703277ACF85DEF1293471A_AdjustorThunk,
	MatrixMultiplyJob_Schedule_m6B4A5885EC367EF944530BAD739FD5B3BF8BA427_AdjustorThunk,
	MatrixMultiplyJob_Execute_m7E8697DD1A45C05CBDF82AD7AA460AA8990A2C01_AdjustorThunk,
	MatrixMultiplyJob_AllocBlock_m256BDEA733BEAABC633755670742E2ECD0E6AC26,
	MatrixMultiplyJob_FreeBlock_m0145064335D4366539D3C2F5F00A9D3B93F6DA0A,
	MatrixMultiplyJob_MultiplyBlockUnroll16xh_mB6D8BCE0DAF81738AB4A314AAA1635465226FECB,
	Im2ColSliceJob_Execute_m54A9130AAD3D5A3A165697C8E7BC2039F0A48EC0_AdjustorThunk,
	MaxPool2DJob_Execute_mF621A7A519DC57B5C1E6095948029B0175BF3581_AdjustorThunk,
	AvgPool2DJob_Execute_m9E35EFD71CB9F182739FFC31886B0ABD7D59F0F8_AdjustorThunk,
	DepthwiseConv2DJob_Execute_m8CAE55F236301E4DEAAEEE53B3B0E813FF78A674_AdjustorThunk,
	PReluJob_Execute_mDC5ECE69BAD750F7EC0D51ABAAD00DED3509122E_AdjustorThunk,
	PReluJob_PRelu_mA9C901233DC8E66FCCE13A96FEF0E4F890322D0D,
	ReluJob_Execute_m63F71CA9D470439D532F9A7B75E818C2D2AE9978_AdjustorThunk,
	Relu6Job_Execute_m949791345259593E04ADBB241AABAE52E20F5883_AdjustorThunk,
	LeakyReluJob_get_alpha_mAAB1EFD49AF4886D69BE971D64501A1E3BF0AA75_AdjustorThunk,
	LeakyReluJob_set_alpha_m8791B339DF936B882DB1EBC7C388F2A372E97C27_AdjustorThunk,
	LeakyReluJob_Execute_m82B79F684A55554D31E4EB322110BCF88E22BBDF_AdjustorThunk,
	TanhJob_Execute_m4BF40FBF6579E4343CFFC699BA0B7EE941625EE4_AdjustorThunk,
	SigmoidJob_Execute_m69D20C7B7D4C101F400D68CA5EF4CAC3848CCA0F_AdjustorThunk,
	EluJob_Execute_m73570AD72D7FBFAD45498D3FE8C35BDA69068114_AdjustorThunk,
	SeluJob_Execute_m20F65C429BEEE871D863CF718A5DC63FE87CBD4A_AdjustorThunk,
	SwishJob_Execute_m655B155C56F3BCC0951BE23A6C3BC7994785DC61_AdjustorThunk,
	SoftmaxJob_Execute_m15E46B97BD6BFA821F8DD6B4F079572E2F3DE7BD_AdjustorThunk,
	AbsJob_Execute_mD9336684F8FB01FD20F7AF10DB720C47099A301B_AdjustorThunk,
	NegJob_Execute_mB3168C913BD54490816F7B84D9B7B5D5C8F024E0_AdjustorThunk,
	CeilJob_Execute_mA289B7C9E5B1B56C1D3DC722FE864E10F3BD7B53_AdjustorThunk,
	ClipJob_Execute_mB0287EDD251A5FFC72954ABDB97F8C13AD94DA59_AdjustorThunk,
	FloorJob_Execute_m21072CE14D59A6D22EAE4CC14BF6BC3632B2F52B_AdjustorThunk,
	ReciprocalJob_Execute_m1CCA50027CA8CFF528A3E070A626C2CC3E5F4874_AdjustorThunk,
	PowJob_Execute_mC3B49121E9E05229E6122E7DF6941474A9437729_AdjustorThunk,
	ExpJob_Execute_m6DBFD1413DD5836C5CD904A15DA3B78F73400E97_AdjustorThunk,
	LogJob_Execute_m743AC6A0C3FEDF60BD4DBE80D0420696C9FE6918_AdjustorThunk,
	SqrtJob_Execute_m6DB595038FF268AFEAD5680BF22C7337EBDB92AD_AdjustorThunk,
	ElementwiseAddJob_Execute_m190D6486CDC4D2FB48340DA3B41219965EBCE184_AdjustorThunk,
	ElementwiseMulJob_Execute_m34265B113A022A97457E65B8B1A095E347C11411_AdjustorThunk,
	ElementwiseDivJob_Execute_m827F0E434B069D5DD9381295C6F8E6D76D99104B_AdjustorThunk,
	ElementwisePowJob_Execute_mC7F8D2AEF7A2591DE4CBD2BE75C366278CB2CAD1_AdjustorThunk,
	ElementwiseMaxJob_Execute_m6A0307605916629CF01E0DF57D05AA9E8F3EF0C4_AdjustorThunk,
	ElementwiseMinJob_Execute_mE3C610679CAD3309CAA3777B0B0EC6E506A7BDF8_AdjustorThunk,
	ZeroBroadcastJob_Execute_m230E2B30B5F88C1C1E0A42F1CABBCDDD0D17763F_AdjustorThunk,
	CopyJob_Execute_mC581688D9B4D895E57A05A6C455CC43BBD02A03A_AdjustorThunk,
	VectorBroadcastJob_Execute_m0B469A437F75CF4189D78DBA4E6C470AED613E34_AdjustorThunk,
	ScalarBroadcastAddJob_Execute_m2C0D6C20302A376761F03929919D1331615E730C_AdjustorThunk,
	ScalarBroadcastMulJob_Execute_m7262F042822FFA8D6AFD248C3844E56D474A34CB_AdjustorThunk,
	ScalarBroadcastDivJob_Execute_m9F35278BAF22833FDBB116534A9AEF4DC6701058_AdjustorThunk,
	ScalarBroadcastBiasedExpJob_Execute_m6BDD63B1913683A21BBC6310AB4444721CE8A532_AdjustorThunk,
	GenericBroadcastJob_Execute_m2348E276E68268BA62AFCB73F6BACCD1D7D74C9C_AdjustorThunk,
	GenericBroadcastAddJob_Execute_mBCECF23861A7E16FF62DA49A57AAE8356CC05DDC_AdjustorThunk,
	GenericBroadcastMulJob_Execute_m5D11C70808999C77A9808A797CF5F18415B30E7B_AdjustorThunk,
	VectorBroadcastScaleBiasJob_Execute_m7D5B20331D3254E324347B052919F1484427C498_AdjustorThunk,
	ChannelReduceMaxJob_Execute_mA0B1365EAE699042654995AB2E219780B5C76E62_AdjustorThunk,
	ChannelReduceSumJob_Execute_m52C725718D043E4A0DD5200FF93697EE6372B96F_AdjustorThunk,
	Entry__ctor_m7F3AD3B3764E3AE0873B43E86E4E78354D5AE297_AdjustorThunk,
	Entry__ctor_m5A4DA90D2A886AB15746E9A27376DF851A9F2E9E_AdjustorThunk,
	Entry__ctor_mDC90ED772E69A72F285B56AAA5AECA5C13B2D7CE_AdjustorThunk,
	Entry__ctor_mADF36150D2EE495815A242379F060C22A9CD4066_AdjustorThunk,
	KernelAssertInfo__ctor_mC50A38F077ABCC0E61D24269ED53527A5E00CF5F_AdjustorThunk,
	CompiledLayer_get_kernel_m7FD0444D1CFBD527785C83894E4B9669C97F112F_AdjustorThunk,
	Seed__ctor_m33452A89E631B146C69D1F21A08AFCDF8820835B,
	Seed_Dispose_m36D5E4D49382CEBC0E88B30B7392B37A04A7A640,
	U3CU3Ec__DisplayClass25_0__ctor_mC26ACDA6242A93E1D2D8B896C6DD0AAE4EDAAC45,
	U3CU3Ec__DisplayClass25_0_U3CBorder2DU3Eb__0_mFB3849D9CC02B32B229D9D327EB969A1EDC838F7,
	U3CU3Ec__cctor_m9B616D3FEA72083ACC3A283B75AB61AA0B8D21CE,
	U3CU3Ec__ctor_m832CE946FCA2951153E80AC2D5AA919A162E4DEE,
	U3CU3Ec_U3CPad2DReflectU3Eg__GetReflectPaddingU7C27_0_mA716490B0F61040624645FE02DEBEE23562F48C1,
	U3CU3Ec_U3CPad2DSymmetricU3Eg__GetSymmetricPaddingU7C28_0_mA4B60DB9A5DE25CEE459D37B80CD47AD6E22F137,
	U3CU3Ec_U3CPad2DEdgeU3Eg__GetEdgePaddingU7C29_0_mFB5FB708613BC4B56E317DF73028D7066D529095,
	U3CU3Ec_U3CConcatU3Eb__66_1_m6D529F7B5F666718FE7AD624D380D0016227597F,
	U3CU3Ec_U3CConcatU3Eb__66_0_mDAFFE1829A15F19F1587178F0FE3ADF2F261456B,
	U3CU3Ec_U3CAddU3Eb__70_0_mF9C44932A856C3A9AEA4CA50314A642CF05C96BE,
	U3CU3Ec_U3CSubU3Eb__71_0_mBD2B97DEC1024FCDA3A29FFF77CDD148BF2DFC80,
	U3CU3Ec_U3CMulU3Eb__72_0_mB64C1E6ED6522993C0C7111D38F9BE27F4A16BD7,
	U3CU3Ec_U3CDivU3Eb__73_0_m026ADB1B39992123E285E4AB13C0F98990C95765,
	U3CU3Ec_U3CPowU3Eb__74_0_mD73F42019F1A36C351D0D195170317E59FCBEF75,
	U3CU3Ec_U3CMinU3Eb__75_0_m053DAAEABC015B9CF0BF37A9B029EF08F878B446,
	U3CU3Ec_U3CMaxU3Eb__76_0_m977750F900DE46CC01137C739AA2A6B3406095A2,
	U3CU3Ec_U3CMeanU3Eb__77_0_mE67884EC5F316439E2E795ED0C8C6B5D45A37CAA,
	U3CU3Ec_U3CGreaterU3Eb__84_0_m256CD1BEB069E31B6EAE9E5B64AE32127BE12317,
	U3CU3Ec_U3CGreaterEqualU3Eb__85_0_m2AC32F1AFFA692277208BA36249AC2B38D61035D,
	U3CU3Ec_U3CLessU3Eb__86_0_mD9457AD0295B87F67667DBA1C2C073DEBD7E5B41,
	U3CU3Ec_U3CLessEqualU3Eb__87_0_m8DC4BAA245006AF8E619265AD8A3FDE0FA4138C2,
	U3CU3Ec_U3CEqualU3Eb__88_0_mD8C024C0772AD7FB82A7304195FA400EF64FF6AF,
	U3CU3Ec_U3CLogicalOrU3Eb__89_0_mD516A21B54639A8AA44F965EDDC7974C8CA6210D,
	U3CU3Ec_U3CLogicalAndU3Eb__90_0_mA6A452143366D1589E515BAD9B9162A41DA6948A,
	U3CU3Ec_U3CLogicalXorU3Eb__91_0_m1F1D7073703A9D121AEBB4C18932E421DB76DB8D,
	ConvertFromOnDeviceFormatHelper__ctor_m114CBE3473F2E3159C0C56BE8E2111CD3B671D2A,
	ConvertFromOnDeviceFormatHelper_GetNHWCData_mFC2A449B13B9933603220C12A4852DF1616E1F2A,
	ConvertFromOnDeviceFormatHelper_ApplyConversion_m4A4E8A7978F25FEBE5F71E10CF58D01798AB4F78,
	ConvertFromOnDeviceFormatHelper_UnrolledInnerLoop_mCEE813CC01DE19C1E34613F2B3D391C551C287AB,
	TensorDecl_get_ShapeId_mF9741A19BFA63CFE5EB7B3FDC22693726787A7BE_AdjustorThunk,
	TensorDecl_get_InfoId_m424771C846EEB607C49C5DB573336C17782C869F_AdjustorThunk,
	TensorDecl__ctor_m57572A76CB48BEA3424A23A06D4EDAE476374D7B_AdjustorThunk,
	U3CU3Ec__DisplayClass52_0__ctor_m359D7C87B6B4212F867493855F40EFD2B10314BC,
	U3CU3Ec__DisplayClass52_0_U3CMaxPool2DInnerLoopU3Eb__0_m1D94007AC4F42DD6BBA1625CA4A43531C1F9DFE4,
	U3CU3Ec__DisplayClass54_0__ctor_m127BC9BB61ED00AC98CDB4409AEDB5E92F1A6164,
	U3CU3Ec__DisplayClass54_0_U3CAvgPool2DInnerLoopU3Eb__0_mE169B6D550326FD1C17B93AB2278FD9CB200B3DF,
	U3CU3Ec__DisplayClass59_0__ctor_mD6B2FA1643C2D5E643493B9A30B6507F8218B1DF,
	U3CU3Ec__DisplayClass59_0_U3CIm2ColInnerLoopU3Eb__0_mC1AE70B1E4A31CC2983A8F15308DFD52124F4899,
	U3CU3Ec__DisplayClass63_0__ctor_mECF89AC35C81DB9B0CD856FD022B1AC4BCD4A137,
	U3CU3Ec__DisplayClass63_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_mC2ADD4C27AE607E0CE36B2598F5D0F71D2D589FB,
	U3CU3Ec__DisplayClass64_0__ctor_m63C807D0B3991A79831FE1C2AA1D1240776CC24D,
	U3CU3Ec__DisplayClass64_1__ctor_m1A657AD00E749CB227CAA874AD141A67EC03A7F5,
	U3CU3Ec__DisplayClass64_2__ctor_mE3021464A8ADD01065A477C04BDC23DDCF227E54,
	U3CU3Ec__DisplayClass64_2_U3CApplyPaddingU3Eb__0_m20A5BE6C9BF6B792B24D923B688DFED04BCA3A42,
	U3CStartManualScheduleU3Ed__29__ctor_mBF6BC2B6F85717377F17A502AE213A173EB488B0,
	U3CStartManualScheduleU3Ed__29_System_IDisposable_Dispose_m0B6F76254C6730F23FB1504763C034AAE3155C6E,
	U3CStartManualScheduleU3Ed__29_MoveNext_m1FB0B3A622CC99675432B10055F2D4273B080024,
	U3CStartManualScheduleU3Ed__29_U3CU3Em__Finally1_mD2FE1B299D9409442036FE417FBFD7412CF21BC3,
	U3CStartManualScheduleU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC06EDEE08EDCBAC2C1843C7CE11FA51EF6EA9BC5,
	U3CStartManualScheduleU3Ed__29_System_Collections_IEnumerator_Reset_mEA0E1394C2DA16B07E89D9467833FDA7126F58C7,
	U3CStartManualScheduleU3Ed__29_System_Collections_IEnumerator_get_Current_m764A209B2F89F49F7AB9C7CE886C3E62A21AB8F7,
	SGEMMJob_Execute_m666A5DAE508DD327A386BF8C43080AAB2317F6B5_AdjustorThunk,
	U3CU3Ec__DisplayClass7_0__ctor_m4768FDA18ED978EC889B35C11810185BFF7CE5BA,
	U3CU3Ec__DisplayClass7_0_U3CMultiplyBlockUnroll8xhParallelWithPaddingU3Eb__0_mB71CC77D32EB39E054AD276E48F76E692F03CC76,
	U3CU3Ec__cctor_m802414F9BD1D7847E374DE9ABD6EDB192D00CF78,
	U3CU3Ec__ctor_m07E4F127284F42A7B91C5C8FA3CD450078DF627D,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_0_m0A291954E46FBD52FA19A214984204E5037AA045,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_1_mBD514B4F48886A144D39018B1DF9553C2B9E8F4A,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_2_m6403179BBC811F39ADE3D17D7F1398B857DE3FFC,
	U3CU3Ec_U3CFindUnusedLayersU3Eb__10_3_m980F5664E394B3425CC4056C4F0F661791F7AFD0,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__11_0_m1AD4696C3FEDA0905B571AEECB315EE43F246EB2,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__11_1_m4AA14F8715EDCACACB3E37D3D1D3934BB96BD4FD,
	U3CU3Ec_U3CFindBrokenLinksU3Eb__11_2_m3F6AB2F710CE08F4C6066140894FF8F3C4AD28DE,
	U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_0_m5C1969ADCD490A393FD42D002DD1B043AAA65317,
	U3CU3Ec_U3CFindUnconnectedInputsU3Eb__14_1_m968A1619CBADEDDD7672589DA3B49B63FB9663ED,
	U3CU3Ec__DisplayClass0_0__ctor_m1E99B67C3E3A43DF62AA39548DA1A86A6FC544D0,
	U3CU3Ec__DisplayClass0_0_U3COptimizeU3Eb__0_m25848DB3FFA7CEB2BA1F029ECB1AD62E4F712FFD,
	U3CU3Ec__DisplayClass3_0__ctor_m15CE0A226B8387995A4748F7616AFF3A224F6BF8,
	U3CU3Ec__DisplayClass3_0_U3CFuseActivationU3Eb__0_m108D41CAB34ACA484398FB00C625D07AD9E6E0F4,
	U3CU3Ec__DisplayClass4_0__ctor_m35E0E87F3D0AA270BA0EDA364D6C5BE2B1E0EA84,
	U3CU3Ec__DisplayClass4_0_U3CFuseActivationsU3Eb__1_mC4D853FE07021F4FCF73FAD800C3FF0D1F2B1CF5,
	U3CU3Ec__DisplayClass4_1__ctor_m3ACDFAFEA9071C914908F5DFC9A88726943E7233,
	U3CU3Ec__DisplayClass4_1_U3CFuseActivationsU3Eb__2_m88125E36EC54850F5DAA54983EB93985DA977AB9,
	U3CU3Ec__DisplayClass4_1_U3CFuseActivationsU3Eb__3_m4F58D49AD74E881BF66C0EAE97D08A81B62A4A38,
	U3CU3Ec__cctor_mD2EE4E61D9361DDC937809B66C4FE56201924AED,
	U3CU3Ec__ctor_m3CAD9CD3EE037525D9876DCF532C8CF9A6628E39,
	U3CU3Ec_U3CFuseActivationsU3Eb__4_0_m1A4A8BC58EE96FE694F3026F0703258E24C7D82D,
	U3CU3Ec_U3CRemoveNoopU3Eb__5_0_m911E7F1E9C2FECA3B40B2B529C69000B74101B2E,
	U3CU3Ec_U3CRemoveNoopU3Eb__5_1_m6F973863CBB081364D8FBAC8FDC92B98C4F5CDC5,
	Transcendental__ctor_m3C527DD8EE9E684D431F1ABFBA2A0D3B8C1A7984,
	U3CU3Ec__DisplayClass13_0__ctor_mBC6294A7F24820AD6DEDBFADF9C3661308B7DA56,
	U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_mDDE0567B5D3EA9CB3D28A25FF0D25A57EDE3E615,
	WorkerConfiguration__ctor_m9267318B616F0F74E62AB8D8ED86A62D5FFDA342_AdjustorThunk,
	U3CU3Ec__cctor_mA773A4FA14ED85D0B29C57383212ED890457A290,
	U3CU3Ec__ctor_m492DA628675F0C266CDBE95267DA898E069EFA7A,
	U3CU3Ec_U3CToStringU3Eb__21_0_mE302038CA1EAA5F09F187203271D35A05BF860A3,
	Input_WithName_m9641C89363FBFF257E49929E1E35F31D9ECAE229_AdjustorThunk,
	ImporterWarning_get_Message_mA04EF18357421B453DD0B7FF69770EF6034F52EE,
	ImporterWarning_get_LayerName_m08A4A4BC382BEAD5FC46573671525F1F13D433B0,
	ImporterWarning__ctor_m54D1637436668C6C77FE13986CABC0DD96C430A3,
	U3CU3Ec__cctor_m56152A519C7FF2EB6932303E9ADB49AACAF75E2D,
	U3CU3Ec__ctor_m88AC841E1287921F3BBF56FFB0602B6B5BE03281,
	U3CU3Ec_U3CToStringU3Eb__15_0_m127AA4324E81873F516655722806455E68958270,
	U3CU3Ec_U3CToStringU3Eb__15_1_m4E2CB6C8A3732CBDA67D7229E43305EDB037D9EE,
	U3CU3Ec_U3CToStringU3Eb__15_2_m69DC3F2E8C81800157341EC8DA1CFA775D349B68,
	U3CU3Ec__cctor_mBF3C7CA5DA0AA45A9A6711ED1A340AB62153D48F,
	U3CU3Ec__ctor_m774C988336D39A2CBB9E714D7027C815D5B162E7,
	U3CU3Ec_U3CAsIntsU3Eb__4_0_m6BDB28735322B220F3D78DEA480DA1261535B90B,
	U3CU3Ec_U3CAsLongsU3Eb__5_0_m71BF1201359406877AAD4050097DEC8B9D71EC09,
	U3CU3Ec__DisplayClass14_0__ctor_mB6D0A4A46BA74B11B2D77F7EA35F56358E7C71F7,
	U3CU3Ec__DisplayClass14_1__ctor_m1A9510486060D8F71BE60AB9B4AB6BBB6462E828,
	U3CU3Ec__DisplayClass14_1_U3CArgSortU3Eb__0_m10574AF063CEA44100AF5B69104347D547D39EB7,
};
static const int32_t s_InvokerIndices[1710] = 
{
	2263,
	153,
	1149,
	1149,
	2264,
	152,
	152,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2265,
	105,
	105,
	105,
	214,
	2266,
	2267,
	2268,
	2269,
	2269,
	54,
	2270,
	28,
	28,
	28,
	28,
	28,
	2268,
	28,
	2268,
	2271,
	105,
	28,
	28,
	28,
	28,
	2271,
	28,
	28,
	2268,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	28,
	2272,
	2272,
	28,
	58,
	125,
	105,
	58,
	28,
	28,
	31,
	27,
	27,
	27,
	207,
	28,
	26,
	27,
	28,
	28,
	14,
	2273,
	2274,
	968,
	456,
	26,
	31,
	21,
	21,
	21,
	2275,
	2276,
	2,
	0,
	23,
	2277,
	2278,
	2277,
	2278,
	32,
	2279,
	26,
	26,
	26,
	23,
	23,
	23,
	32,
	2280,
	2273,
	498,
	30,
	14,
	26,
	0,
	28,
	2281,
	2282,
	2263,
	153,
	1149,
	2283,
	125,
	125,
	28,
	28,
	1149,
	214,
	28,
	28,
	2268,
	28,
	28,
	2268,
	2271,
	28,
	105,
	28,
	28,
	28,
	28,
	28,
	2271,
	28,
	28,
	2268,
	28,
	28,
	28,
	2272,
	2284,
	2285,
	2285,
	2285,
	2285,
	2285,
	2285,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	2272,
	2290,
	2291,
	2291,
	2292,
	2293,
	2293,
	2294,
	2295,
	2295,
	2295,
	2295,
	2296,
	2294,
	2294,
	2294,
	2294,
	2295,
	2295,
	2297,
	2294,
	2294,
	2298,
	276,
	2299,
	2300,
	23,
	3,
	14,
	2305,
	2306,
	2307,
	2308,
	2309,
	27,
	62,
	23,
	2310,
	2311,
	968,
	2312,
	2313,
	153,
	2264,
	1149,
	1149,
	2264,
	152,
	2283,
	28,
	28,
	152,
	28,
	105,
	214,
	214,
	2266,
	2314,
	105,
	28,
	28,
	2269,
	2269,
	58,
	2273,
	105,
	2315,
	28,
	2272,
	2272,
	23,
	214,
	481,
	23,
	2316,
	3,
	163,
	23,
	3,
	968,
	54,
	31,
	41,
	105,
	105,
	27,
	27,
	136,
	153,
	1149,
	1149,
	2264,
	152,
	2283,
	214,
	28,
	28,
	28,
	2266,
	2314,
	105,
	28,
	28,
	105,
	58,
	3,
	14,
	32,
	2279,
	23,
	23,
	32,
	2280,
	30,
	2273,
	498,
	10,
	14,
	14,
	10,
	10,
	35,
	23,
	23,
	32,
	2280,
	30,
	2273,
	498,
	10,
	14,
	26,
	2274,
	28,
	28,
	2180,
	2318,
	31,
	2107,
	2263,
	153,
	1149,
	1149,
	2264,
	152,
	152,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	214,
	2265,
	2319,
	105,
	105,
	105,
	214,
	2267,
	2266,
	1482,
	2320,
	2268,
	2269,
	2269,
	54,
	2270,
	28,
	105,
	28,
	28,
	28,
	28,
	28,
	2268,
	2268,
	2271,
	28,
	28,
	28,
	28,
	2271,
	28,
	28,
	2268,
	28,
	28,
	28,
	58,
	125,
	105,
	105,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	214,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	2272,
	28,
	28,
	2272,
	2272,
	58,
	28,
	28,
	440,
	23,
	177,
	14,
	10,
	2322,
	2323,
	23,
	23,
	32,
	2280,
	30,
	30,
	30,
	2274,
	2273,
	498,
	10,
	14,
	2323,
	46,
	46,
	46,
	46,
	46,
	46,
	114,
	114,
	114,
	114,
	94,
	2325,
	2326,
	23,
	2327,
	14,
	10,
	10,
	10,
	10,
	758,
	758,
	32,
	2280,
	30,
	2273,
	498,
	10,
	23,
	27,
	28,
	2328,
	2329,
	2330,
	105,
	2331,
	2332,
	30,
	2263,
	153,
	1149,
	1149,
	1149,
	2264,
	152,
	152,
	102,
	105,
	2283,
	125,
	125,
	105,
	28,
	28,
	28,
	2315,
	2265,
	105,
	105,
	105,
	214,
	2266,
	2267,
	2268,
	2314,
	28,
	105,
	28,
	28,
	28,
	28,
	28,
	2268,
	2268,
	2271,
	28,
	28,
	28,
	28,
	2271,
	28,
	28,
	2268,
	28,
	28,
	28,
	2272,
	105,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	102,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	2272,
	2272,
	28,
	2272,
	28,
	58,
	125,
	105,
	58,
	28,
	28,
	3,
	10,
	10,
	10,
	10,
	2333,
	94,
	4,
	4,
	4,
	1384,
	27,
	1384,
	27,
	2306,
	2307,
	2306,
	2308,
	2309,
	27,
	62,
	27,
	2334,
	38,
	177,
	1167,
	3,
	32,
	2279,
	26,
	26,
	1036,
	23,
	23,
	32,
	2280,
	2273,
	14,
	14,
	26,
	0,
	2335,
	28,
	674,
	28,
	674,
	28,
	674,
	2268,
	2336,
	2268,
	2336,
	105,
	2337,
	28,
	674,
	28,
	674,
	28,
	674,
	28,
	674,
	28,
	674,
	2338,
	2339,
	125,
	28,
	28,
	28,
	28,
	28,
	28,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	2283,
	2263,
	153,
	58,
	125,
	2340,
	125,
	2340,
	28,
	28,
	1149,
	2283,
	2341,
	177,
	2283,
	1149,
	2342,
	2343,
	2265,
	105,
	105,
	105,
	2272,
	214,
	2344,
	28,
	23,
	2345,
	2346,
	2347,
	2348,
	2349,
	2350,
	1695,
	2351,
	2352,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	209,
	2319,
	209,
	209,
	209,
	209,
	209,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	1482,
	2353,
	27,
	27,
	2263,
	153,
	1149,
	1149,
	2264,
	152,
	152,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2265,
	105,
	105,
	105,
	214,
	2266,
	2267,
	2268,
	2269,
	2269,
	54,
	2270,
	28,
	28,
	28,
	28,
	28,
	2268,
	28,
	2268,
	2271,
	105,
	28,
	28,
	28,
	28,
	2271,
	28,
	28,
	2268,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	28,
	2272,
	2272,
	28,
	58,
	58,
	125,
	105,
	28,
	28,
	31,
	1382,
	443,
	2354,
	2355,
	2356,
	2357,
	23,
	3,
	23,
	23,
	4,
	2358,
	2359,
	89,
	3,
	968,
	23,
	23,
	23,
	26,
	27,
	26,
	28,
	28,
	14,
	28,
	31,
	28,
	730,
	94,
	14,
	14,
	28,
	28,
	14,
	23,
	23,
	23,
	14,
	9,
	90,
	214,
	27,
	207,
	28,
	26,
	27,
	28,
	28,
	89,
	14,
	23,
	207,
	26,
	27,
	28,
	23,
	207,
	14,
	9,
	2273,
	2274,
	968,
	456,
	26,
	31,
	182,
	182,
	182,
	14,
	23,
	23,
	23,
	89,
	89,
	2360,
	2361,
	23,
	2362,
	2363,
	237,
	2364,
	2365,
	2366,
	2367,
	2368,
	23,
	0,
	0,
	1,
	720,
	2073,
	390,
	0,
	1,
	2369,
	2370,
	0,
	1,
	1,
	0,
	0,
	0,
	23,
	1378,
	46,
	46,
	196,
	163,
	0,
	23,
	26,
	27,
	27,
	2263,
	153,
	1149,
	1149,
	2264,
	152,
	152,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2265,
	105,
	105,
	105,
	214,
	2266,
	2267,
	2268,
	2269,
	2269,
	54,
	2270,
	28,
	28,
	28,
	28,
	28,
	28,
	2268,
	2268,
	2271,
	105,
	28,
	28,
	28,
	28,
	2271,
	28,
	28,
	2268,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	28,
	2272,
	2272,
	28,
	58,
	58,
	125,
	105,
	28,
	28,
	31,
	14,
	181,
	2377,
	2377,
	23,
	23,
	2273,
	2274,
	456,
	968,
	31,
	26,
	23,
	182,
	182,
	182,
	14,
	23,
	23,
	26,
	27,
	2378,
	2273,
	2274,
	456,
	968,
	207,
	31,
	26,
	23,
	182,
	182,
	182,
	14,
	23,
	23,
	94,
	26,
	27,
	26,
	26,
	2273,
	2274,
	456,
	968,
	207,
	31,
	26,
	23,
	182,
	182,
	182,
	14,
	26,
	27,
	27,
	2263,
	153,
	1149,
	1149,
	2264,
	152,
	152,
	102,
	105,
	125,
	125,
	28,
	28,
	28,
	2265,
	105,
	105,
	105,
	214,
	2266,
	2267,
	2268,
	2269,
	2269,
	54,
	2270,
	28,
	28,
	28,
	28,
	28,
	28,
	2268,
	2268,
	2271,
	105,
	28,
	28,
	28,
	28,
	2271,
	28,
	28,
	2268,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	28,
	58,
	58,
	58,
	58,
	58,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	28,
	28,
	2272,
	2272,
	28,
	58,
	58,
	125,
	105,
	28,
	28,
	31,
	109,
	137,
	162,
	137,
	94,
	137,
	196,
	0,
	1,
	0,
	1,
	1,
	163,
	1163,
	1,
	1,
	0,
	1,
	0,
	1,
	53,
	23,
	2379,
	2380,
	23,
	26,
	26,
	27,
	14,
	28,
	28,
	14,
	28,
	28,
	31,
	730,
	14,
	28,
	28,
	14,
	0,
	1,
	32,
	2280,
	30,
	2273,
	498,
	10,
	2277,
	2178,
	107,
	23,
	23,
	10,
	26,
	26,
	2381,
	2276,
	2382,
	2275,
	2383,
	2384,
	2385,
	2386,
	162,
	698,
	1397,
	162,
	162,
	162,
	53,
	21,
	21,
	23,
	89,
	26,
	698,
	2382,
	698,
	2382,
	163,
	137,
	163,
	137,
	163,
	137,
	23,
	3,
	23,
	23,
	23,
	2388,
	9,
	10,
	10,
	2389,
	9,
	105,
	2390,
	23,
	23,
	26,
	26,
	23,
	89,
	10,
	34,
	34,
	10,
	34,
	34,
	34,
	34,
	54,
	54,
	201,
	201,
	23,
	23,
	23,
	23,
	0,
	0,
	0,
	0,
	0,
	0,
	23,
	26,
	35,
	130,
	14,
	14,
	14,
	14,
	23,
	1,
	2393,
	14,
	26,
	2394,
	2395,
	2396,
	2397,
	28,
	2398,
	28,
	102,
	125,
	2399,
	2400,
	125,
	477,
	1109,
	1109,
	2254,
	2401,
	2283,
	2283,
	105,
	105,
	1413,
	1413,
	1413,
	103,
	102,
	214,
	2402,
	214,
	214,
	105,
	102,
	2283,
	2403,
	592,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	2265,
	105,
	2265,
	2314,
	214,
	105,
	2314,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	592,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	105,
	214,
	214,
	214,
	214,
	214,
	214,
	214,
	214,
	105,
	2404,
	2315,
	214,
	214,
	214,
	2405,
	2406,
	2405,
	2406,
	2407,
	2408,
	153,
	28,
	28,
	28,
	28,
	573,
	573,
	573,
	573,
	2409,
	2409,
	137,
	0,
	0,
	0,
	0,
	0,
	109,
	109,
	137,
	137,
	137,
	137,
	23,
	89,
	89,
	2360,
	2361,
	4,
	23,
	341,
	129,
	26,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	37,
	2350,
	2350,
	2410,
	2410,
	2410,
	2410,
	56,
	37,
	129,
	14,
	2327,
	2327,
	2411,
	2411,
	9,
	10,
	14,
	89,
	14,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	10,
	207,
	2412,
	973,
	2413,
	207,
	2412,
	973,
	2413,
	207,
	2412,
	973,
	2413,
	107,
	107,
	207,
	2412,
	973,
	2413,
	26,
	27,
	2414,
	615,
	2378,
	207,
	2412,
	973,
	2413,
	26,
	27,
	2414,
	615,
	2378,
	23,
	456,
	456,
	26,
	123,
	23,
	23,
	224,
	23,
	2274,
	28,
	28,
	2274,
	14,
	23,
	14,
	23,
	2415,
	2416,
	2417,
	2418,
	37,
	2410,
	2410,
	2410,
	56,
	1550,
	1025,
	1775,
	1623,
	2419,
	2420,
	14,
	14,
	14,
	14,
	14,
	14,
	10,
	373,
	2421,
	2422,
	0,
	0,
	0,
	119,
	137,
	496,
	135,
	2423,
	273,
	0,
	1,
	0,
	2424,
	2424,
	2424,
	2370,
	2370,
	2425,
	2426,
	2427,
	2426,
	2426,
	358,
	2428,
	358,
	2429,
	2430,
	2431,
	2432,
	2433,
	2434,
	2435,
	177,
	2436,
	2437,
	3,
	23,
	28,
	28,
	28,
	9,
	28,
	2286,
	2287,
	32,
	2288,
	17,
	2289,
	32,
	32,
	32,
	32,
	32,
	442,
	32,
	32,
	730,
	337,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	23,
	23,
	23,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	32,
	2301,
	2302,
	2303,
	2304,
	26,
	2317,
	64,
	23,
	23,
	2321,
	3,
	23,
	2321,
	2321,
	2321,
	742,
	742,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	2320,
	23,
	2324,
	23,
	209,
	10,
	10,
	129,
	23,
	32,
	23,
	32,
	23,
	32,
	23,
	32,
	23,
	23,
	23,
	32,
	32,
	23,
	89,
	23,
	14,
	23,
	14,
	23,
	23,
	32,
	3,
	23,
	28,
	9,
	2371,
	2372,
	28,
	2373,
	2374,
	2373,
	2375,
	23,
	9,
	23,
	2376,
	23,
	9,
	23,
	2376,
	9,
	3,
	23,
	9,
	2374,
	2374,
	23,
	23,
	26,
	2387,
	3,
	23,
	2391,
	2392,
	14,
	14,
	27,
	3,
	23,
	2373,
	2374,
	28,
	3,
	23,
	487,
	2438,
	23,
	23,
	56,
};
extern const Il2CppCodeGenModule g_Unity_BarracudaCodeGenModule;
const Il2CppCodeGenModule g_Unity_BarracudaCodeGenModule = 
{
	"Unity.Barracuda.dll",
	1710,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
