/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxSample : NSObject {

	FxSamplePriv* _priv;

}
+(id)_requiredSamplesForSamples:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)context;
-(double)time;
-(void)setContext:(id)arg1 ;
-(void)setTime:(double)arg1 ;
-(id)stream;
-(void)setStream:(id)arg1 ;
-(id)regionOfInterest;
-(void)setRegionOfInterest:(id)arg1 ;
-(unsigned long long)fieldOrder;
-(id)evaluateWithOptions:(id)arg1 ;
-(id)domainOfDefinition;
-(BOOL)supportsContextType:(int)arg1 ;
-(BOOL)isPredetermined;
-(id)requiredSamples;
@end

