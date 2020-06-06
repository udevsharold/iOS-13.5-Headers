/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol AVVideoCompositionInstruction <NSObject>
@property (nonatomic,readonly) SCD_Struct_PV27 timeRange; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@required
-(SCD_Struct_PV27)timeRange;
-(BOOL)enablePostProcessing;
-(BOOL)containsTweening;
-(NSArray *)requiredSourceTrackIDs;
-(int)passthroughTrackID;

@end

