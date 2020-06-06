/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class LPLinkMetadata;

@interface CKSearchActivityItemProvider : UIActivityItemProvider {

	id _payload;
	LPLinkMetadata* _metadata;

}

@property (nonatomic,retain) id payload;                             //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)item;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkMetadata *)metadata;
-(void)setPayload:(id)arg1 ;
-(id)payload;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg1 metadata:(id)arg2 ;
@end

