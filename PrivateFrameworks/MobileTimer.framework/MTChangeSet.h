/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSDictionary, NSArray;

@interface MTChangeSet : NSObject {

	NSSet* _changedProperties;
	NSDictionary* _changeDictionary;

}

@property (nonatomic,retain) NSSet * changedProperties;                    //@synthesize changedProperties=_changedProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * changeDictionary;              //@synthesize changeDictionary=_changeDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * changes; 
+(id)dictionaryFromChanges:(id)arg1 ;
+(id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2 ;
+(id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2 inProperties:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)changes;
-(id)initWithChanges:(id)arg1 ;
-(NSSet *)changedProperties;
-(BOOL)hasChangesInProperties:(id)arg1 ;
-(id)initWithChangeDictionary:(id)arg1 ;
-(NSDictionary *)changeDictionary;
-(BOOL)_isEqualToChangeSet:(id)arg1 checkOriginalValues:(BOOL)arg2 ;
-(id)changedValueForProperty:(id)arg1 hasProperty:(BOOL*)arg2 ;
-(BOOL)isEquivalentToChangeSet:(id)arg1 ;
-(id)changeSetByAddingChangeSet:(id)arg1 ;
-(BOOL)hasChangeForProperty:(id)arg1 ;
-(BOOL)hasChangesInCommonWithChangeSet:(id)arg1 ;
-(id)deserializedChangedValueForProperty:(id)arg1 hasProperty:(BOOL*)arg2 ;
-(id)_deserializer;
-(void)setChangedProperties:(NSSet *)arg1 ;
-(void)setChangeDictionary:(NSDictionary *)arg1 ;
@end

