/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTAvatarRecordInternal.h>

@class NSString;

@interface AVTAvatarPuppetRecord : NSObject <AVTAvatarRecordInternal> {

	NSString* _puppetName;

}

@property (nonatomic,copy,readonly) NSString * puppetName;                   //@synthesize puppetName=_puppetName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isPuppet,nonatomic,readonly) BOOL puppet; 
+(/*^block*/id)matchingIdentifierTest:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEditable;
-(BOOL)isPuppet;
-(NSString *)puppetName;
-(id)initWithPuppetName:(id)arg1 ;
@end

