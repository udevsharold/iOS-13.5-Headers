/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSDate;


@protocol WBSParsecABGroupStore <NSObject>
@property (assign,nonatomic,__weak) id<WBSParsecABGroupStoreClient> client; 
@property (nonatomic,retain) NSNumber * groupIdentifier; 
@property (nonatomic,retain) NSDate * generationDate; 
@required
-(NSNumber *)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1;
-(id<WBSParsecABGroupStoreClient>)client;
-(void)setClient:(id)arg1;
-(NSDate *)generationDate;
-(void)setGenerationDate:(id)arg1;

@end
