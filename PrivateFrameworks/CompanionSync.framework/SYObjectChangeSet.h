/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface SYObjectChangeSet : NSObject {

	NSMutableSet* _added;
	NSMutableSet* _updated;
	NSMutableSet* _deleted;

}

@property (nonatomic,copy) NSMutableSet * added;                //@synthesize added=_added - In the implementation block
@property (nonatomic,copy) NSMutableSet * updated;              //@synthesize updated=_updated - In the implementation block
@property (nonatomic,copy) NSMutableSet * deleted;              //@synthesize deleted=_deleted - In the implementation block
-(id)init;
-(NSMutableSet *)deleted;
-(void)setDeleted:(NSMutableSet *)arg1 ;
-(void)setAdded:(NSMutableSet *)arg1 ;
-(NSMutableSet *)added;
-(NSMutableSet *)updated;
-(void)setUpdated:(NSMutableSet *)arg1 ;
-(id)changesBetween:(id)arg1 and:(id)arg2 ;
-(id)initWithChangesBetween:(id)arg1 and:(id)arg2 ;
-(void)applyToStore:(id)arg1 ;
@end

