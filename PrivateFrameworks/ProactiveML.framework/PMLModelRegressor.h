/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLDictionarySerializableProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class PMLDenseVector, NSString;

@interface PMLModelRegressor : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol> {

	PMLDenseVector* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int count; 
+(id)modelRegressorFromFloat:(float)arg1 ;
+(id)modelRegressorFromFloats:(id)arg1 ;
+(id)regressorVectorFrom:(id)arg1 ;
-(id)init;
-(int)count;
-(const float*)values;
-(id)toDictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1 ;
-(id)denseVector;
-(id)initModelRegressorFromFloats:(id)arg1 ;
-(id)initWithRegressorFromFloat:(float)arg1 ;
-(id)regressorFor:(int)arg1 ;
-(const float*)inverseValues;
@end

