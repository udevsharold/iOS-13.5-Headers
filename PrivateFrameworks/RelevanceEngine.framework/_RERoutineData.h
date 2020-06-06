/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class NSArray;

@interface _RERoutineData : NSObject <REAutomaticExportedInterface> {

	long long _mode;
	NSArray* _locationsOfInterest;

}

@property (assign,nonatomic) long long mode;                             //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSArray * locationsOfInterest;              //@synthesize locationsOfInterest=_locationsOfInterest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(NSArray *)locationsOfInterest;
-(void)setLocationsOfInterest:(NSArray *)arg1 ;
-(BOOL)isEqualToRoutineData:(id)arg1 ;
@end

