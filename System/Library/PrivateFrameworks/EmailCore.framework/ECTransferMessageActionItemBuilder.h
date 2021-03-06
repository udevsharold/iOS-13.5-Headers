/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ECTransferMessageActionItemBuilder <NSObject>
@property (nonatomic,copy) NSString * sourceRemoteID; 
@property (nonatomic,retain) id<ECMessage> sourceMessage; 
@property (nonatomic,retain) id<ECMessage> destinationMessage; 
@required
-(id<ECMessage>)destinationMessage;
-(NSString *)sourceRemoteID;
-(id<ECMessage>)sourceMessage;
-(void)setSourceRemoteID:(id)arg1;
-(void)setSourceMessage:(id)arg1;
-(void)setDestinationMessage:(id)arg1;

@end

