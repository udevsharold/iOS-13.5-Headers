/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCClientZone.h>

@class NSMutableDictionary, NSString, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {

	NSMutableDictionary* _shareAcceptationByItemID;

}

@property (nonatomic,readonly) NSString * ownerName; 
@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCSharedServerZone * sharedZone; 
-(NSString *)ownerName;
-(BRCSharedServerZone *)sharedZone;
-(BOOL)isSharedZone;
-(id)asSharedClientZone;
-(id)rootItemID;
-(void)setServerZone:(id)arg1 ;
-(void)addAcceptOperation:(id)arg1 forItemID:(id)arg2 ;
-(id)shareAcceptOperationForItemID:(id)arg1 ;
-(void)removeAllShareAcceptationSidefaults;
-(id)shareAcceptationSidefaultEnumerator;
@end

