/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKit/WatchListKit-Structs.h>
@interface WLKProcessInfo : NSObject {

	SecTaskRef _currentTask;

}

@property (assign,nonatomic) SecTaskRef currentTask;              //@synthesize currentTask=_currentTask - In the implementation block
+(id)currentProcessInfo;
-(id)init;
-(void)dealloc;
-(id)valueForEntitlement:(id)arg1 ;
-(SecTaskRef)currentTask;
-(void)setCurrentTask:(SecTaskRef)arg1 ;
-(BOOL)boolValueForEntitlement:(id)arg1 ;
-(BOOL)valueForEntitlement:(id)arg1 containsObject:(id)arg2 ;
@end

