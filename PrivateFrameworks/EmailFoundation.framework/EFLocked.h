/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@interface EFLocked : NSObject {

	os_unfair_lock_s _lock;
	id _object;

}

@property (nonatomic,readonly) os_unfair_lock_s* unfairLockForTesting; 
-(id)description;
-(id)debugDescription;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)performWhileLocked:(/*^block*/id)arg1 ;
-(os_unfair_lock_s*)unfairLockForTesting;
@end

