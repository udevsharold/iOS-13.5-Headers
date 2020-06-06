/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSArray;

@interface NNMKDiffMessageResult : NSObject {

	BOOL _trimed;
	NSMutableSet* _messageIdsToAddToWatch;
	NSMutableSet* _messageIdsToUpdateOnWatch;
	NSMutableSet* _messageIdsToDeleteFromWatch;
	NSArray* _messageToAddToWatch;

}

@property (nonatomic,retain) NSMutableSet * messageIdsToAddToWatch;                   //@synthesize messageIdsToAddToWatch=_messageIdsToAddToWatch - In the implementation block
@property (nonatomic,retain) NSMutableSet * messageIdsToUpdateOnWatch;                //@synthesize messageIdsToUpdateOnWatch=_messageIdsToUpdateOnWatch - In the implementation block
@property (nonatomic,retain) NSMutableSet * messageIdsToDeleteFromWatch;              //@synthesize messageIdsToDeleteFromWatch=_messageIdsToDeleteFromWatch - In the implementation block
@property (nonatomic,retain) NSArray * messageToAddToWatch;                           //@synthesize messageToAddToWatch=_messageToAddToWatch - In the implementation block
@property (assign,nonatomic) BOOL trimed;                                             //@synthesize trimed=_trimed - In the implementation block
-(BOOL)trimed;
-(NSArray *)messageToAddToWatch;
-(NSMutableSet *)messageIdsToAddToWatch;
-(NSMutableSet *)messageIdsToUpdateOnWatch;
-(NSMutableSet *)messageIdsToDeleteFromWatch;
-(void)setMessageIdsToAddToWatch:(NSMutableSet *)arg1 ;
-(void)setMessageIdsToUpdateOnWatch:(NSMutableSet *)arg1 ;
-(void)setMessageIdsToDeleteFromWatch:(NSMutableSet *)arg1 ;
-(void)setMessageToAddToWatch:(NSArray *)arg1 ;
-(void)setTrimed:(BOOL)arg1 ;
@end

