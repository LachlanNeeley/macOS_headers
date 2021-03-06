//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MLPDeviceHandler : NSObject
{
    struct mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> weightSeed;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    unsigned long long _dataLayout;
}

@property(readonly) unsigned long long dataLayout; // @synthesize dataLayout=_dataLayout;
@property(readonly) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)uniformRandWithParamA:(float)arg1 paramB:(float)arg2;
- (id)matrixToVector:(id)arg1;
- (id)vectorWithLength:(unsigned long long)arg1 cmdBuf:(id)arg2;
- (id)matrixFromImages:(struct NSArray *)arg1 i2mKernel:(id)arg2 cmdBuf:(id)arg3;
- (id)tempMatrixFromImages:(struct NSArray *)arg1 i2mKernel:(id)arg2 cmdBuf:(id)arg3;
- (id)matrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 cmdBuf:(id)arg3;
- (id)tempMatrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 cmdBuf:(id)arg3;
- (struct NSArray *)imageBatchFromMatrix:(id)arg1 m2iKernel:(id)arg2 cmdBuf:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 channels:(unsigned long long)arg6;
- (id)imageFromMatrix:(id)arg1 m2iKernel:(id)arg2 cmdBuf:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 featureChannels:(unsigned long long)arg6;
- (id)imageFromData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4;
- (void)importDataFromGPU:(id)arg1 cmdBuf:(id)arg2;
- (void)sendDataToGPU:(id)arg1;
- (id)biasVectorWithLength:(unsigned long long)arg1 stdDev:(float)arg2 values:(const void *)arg3;
- (id)weightMatrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 stdDev:(float)arg3 initialValues:(const void *)arg4 columnMajor:(_Bool)arg5;
- (id)weightMatrixFixedRowBytesWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;
- (id)deduceDevice;
- (id)initWithDataLayout:(id)arg1;

@end

