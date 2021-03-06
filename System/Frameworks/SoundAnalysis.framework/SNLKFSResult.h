/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class NSString;

@interface SNLKFSResult : NSObject <SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	float _decibelLevel;
	SCD_Struct_SN4 timeRange;

}

@property (assign,nonatomic) float decibelLevel;                      //@synthesize decibelLevel=_decibelLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_SN4 timeRange; 
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(float)decibelLevel;
-(void)setDecibelLevel:(float)arg1 ;
@end

