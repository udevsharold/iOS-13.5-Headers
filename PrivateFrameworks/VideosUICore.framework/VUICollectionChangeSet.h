/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUICollectionChange, NSArray;

@interface VUICollectionChangeSet : NSObject {

	VUICollectionChange* _deleteChange;
	VUICollectionChange* _insertChange;
	NSArray* _moveChanges;
	NSArray* _updateChanges;

}

@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain) VUICollectionChange * deleteChange;              //@synthesize deleteChange=_deleteChange - In the implementation block
@property (nonatomic,retain) VUICollectionChange * insertChange;              //@synthesize insertChange=_insertChange - In the implementation block
@property (nonatomic,copy) NSArray * moveChanges;                             //@synthesize moveChanges=_moveChanges - In the implementation block
@property (nonatomic,copy) NSArray * updateChanges;                           //@synthesize updateChanges=_updateChanges - In the implementation block
-(id)description;
-(BOOL)hasChanges;
-(VUICollectionChange *)insertChange;
-(void)setInsertChange:(VUICollectionChange *)arg1 ;
-(VUICollectionChange *)deleteChange;
-(void)setDeleteChange:(VUICollectionChange *)arg1 ;
-(NSArray *)moveChanges;
-(void)setMoveChanges:(NSArray *)arg1 ;
-(void)setUpdateChanges:(NSArray *)arg1 ;
-(NSArray *)updateChanges;
-(id)_changesKinds;
-(BOOL)containsOnlyChangeKind:(unsigned long long)arg1 ;
@end

