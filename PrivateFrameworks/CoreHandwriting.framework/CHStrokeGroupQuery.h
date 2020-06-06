/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHQuery.h>

@class NSArray, NSDictionary;

@interface CHStrokeGroupQuery : CHQuery {

	NSArray* _strokeGroupItems;
	NSDictionary* _strokeGroupItemsByID;

}

@property (setter=_setStrokeGroupItems:,nonatomic,copy) NSArray * strokeGroupItems;                           //@synthesize strokeGroupItems=_strokeGroupItems - In the implementation block
@property (setter=_setStrokeGroupItemsByID:,nonatomic,copy) NSDictionary * strokeGroupItemsByID;              //@synthesize strokeGroupItemsByID=_strokeGroupItemsByID - In the implementation block
-(void)dealloc;
-(id)debugName;
-(void)q_updateQueryResult;
-(id)q_strokeGroupItemsFromSessionResult:(id)arg1 ;
-(void)_setStrokeGroupItems:(id)arg1 ;
-(long long)q_itemTypeForStrokeGroup:(id)arg1 recognitionResult:(id)arg2 ;
-(NSArray *)strokeGroupItems;
-(NSDictionary *)strokeGroupItemsByID;
-(void)_setStrokeGroupItemsByID:(id)arg1 ;
@end

