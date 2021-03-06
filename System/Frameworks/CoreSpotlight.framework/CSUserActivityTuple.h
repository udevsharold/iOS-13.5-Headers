/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSIndexQueuableItem.h>

@class CSUserAction, CSSearchableItem, NSString;

@interface CSUserActivityTuple : NSObject <CSIndexQueuableItem> {

	CSUserAction* _action;
	CSSearchableItem* _item;
	NSString* _protectionClass;

}

@property (retain) CSUserAction * action;                   //@synthesize action=_action - In the implementation block
@property (retain) CSSearchableItem * item;                 //@synthesize item=_item - In the implementation block
@property (retain) NSString * protectionClass;              //@synthesize protectionClass=_protectionClass - In the implementation block
-(CSSearchableItem *)item;
-(void)setItem:(CSSearchableItem *)arg1 ;
-(CSUserAction *)action;
-(void)setAction:(CSUserAction *)arg1 ;
-(NSString *)protectionClass;
-(id)searchableItem;
-(void)setProtectionClass:(NSString *)arg1 ;
-(id)initWithAction:(id)arg1 item:(id)arg2 ;
@end

