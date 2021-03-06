/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSArray;


@protocol ECTransferMessageActionBuilder <ECLocalMessageActionBuilder>
@property (assign,nonatomic) long long transferType; 
@property (nonatomic,retain) NSURL * sourceMailboxURL; 
@property (nonatomic,retain) NSURL * destinationMailboxURL; 
@property (nonatomic,retain) NSArray * itemsToDownload; 
@property (nonatomic,retain) NSArray * itemsToCopy; 
@property (nonatomic,retain) NSArray * itemsToDelete; 
@required
-(NSArray *)itemsToDelete;
-(NSArray *)itemsToCopy;
-(NSURL *)sourceMailboxURL;
-(NSURL *)destinationMailboxURL;
-(NSArray *)itemsToDownload;
-(long long)transferType;
-(void)setTransferType:(long long)arg1;
-(void)setSourceMailboxURL:(id)arg1;
-(void)setDestinationMailboxURL:(id)arg1;
-(void)setItemsToDownload:(id)arg1;
-(void)setItemsToCopy:(id)arg1;
-(void)setItemsToDelete:(id)arg1;

@end

