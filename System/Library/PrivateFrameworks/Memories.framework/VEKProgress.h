/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VEKProgress : NSObject {

	float _percent;
	NSString* _taskDescription;

}

@property (assign) float percent;                         //@synthesize percent=_percent - In the implementation block
@property (copy) NSString * taskDescription;              //@synthesize taskDescription=_taskDescription - In the implementation block
-(void)setTaskDescription:(NSString *)arg1 ;
-(NSString *)taskDescription;
-(void)setPercent:(float)arg1 ;
-(float)percent;
@end

