/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IAMMessageTarget.h>

@class NSString;

@interface VUIInAppMessagingMessageTargetHandler : NSObject <IAMMessageTarget> {

	NSString* _targetIdentifier;

}

@property (nonatomic,readonly) NSString * targetIdentifier;              //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)targetIdentifier;
-(id)initWithTargetIdentifier:(id)arg1 ;
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3 ;
@end

