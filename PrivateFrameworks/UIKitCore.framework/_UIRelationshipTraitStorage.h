/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITraitStorage.h>

@class NSOrderedSet;

@interface _UIRelationshipTraitStorage : _UITraitStorage {

	NSOrderedSet* _relationshipCandidates;

}
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)applyRecordsMatchingTraitCollection:(id)arg1 ;
-(id)_propertyDescriptionString;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3 ;
-(void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3 ;
@end
