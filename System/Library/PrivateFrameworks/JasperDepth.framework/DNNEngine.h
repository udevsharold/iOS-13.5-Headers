/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class FrontendDNNEspressoModel, BackendDNNEspressoModel;

@interface DNNEngine : NSObject {

	FrontendDNNEspressoModel* mFrontendDNN;
	BackendDNNEspressoModel* mBackendDNN;

}
-(id)init;
-(id)initWithFrontendMode:(long long)arg1 andBackendMode:(long long)arg2 ;
-(int)runBackend:(CVBufferRef)arg1 sparseBuffer:(float*)arg2 numDepthPoints:(unsigned)arg3 result:(float*)arg4 ;
-(int)runFrontend:(float*)arg1 withSize:(int)arg2 result:(JDCloudColorCalibrationResult*)arg3 ;
-(id)getBackendDNNFeatureVectorDim;
@end

