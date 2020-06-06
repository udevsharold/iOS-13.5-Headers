/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken;

@interface BKSHIDEventDeferringResolution : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BKSHIDEventDisplay* _display;
	BKSHIDEventDeferringEnvironment* _environment;
	int _pid;
	BKSHIDEventDeferringToken* _token;

}

@property (nonatomic,copy,readonly) BKSHIDEventDisplay * display;                               //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) int pid;                                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringToken * token;                          //@synthesize token=_token - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)build:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BKSHIDEventDeferringToken *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BKSHIDEventDeferringEnvironment *)environment;
-(int)pid;
-(BKSHIDEventDisplay *)display;
-(id)_initWithDisplay:(id)arg1 environment:(id)arg2 pid:(int)arg3 token:(id)arg4 ;
-(id)modifiedResolution:(/*^block*/id)arg1 ;
@end

