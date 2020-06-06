/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ComponentKit/ComponentKit-Structs.h>
@class UICollectionView, NSDictionary;

@interface CKComponentBoundsAnimationCollectionViewContext : NSObject {

	UICollectionView* _collectionView;
	long long _numberOfSections;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _numberOfItemsInSection;
	NSDictionary* _indexPathsToSnapshotViews;
	NSDictionary* _supplementaryElementIndexPathsToSnapshotViews;
	NSDictionary* _decorationElementIndexPathsToSnapshotViews;
	NSDictionary* _indexPathsToOriginalLayoutAttributes;
	NSDictionary* _supplementaryElementIndexPathsToOriginalLayoutAttributes;
	NSDictionary* _decorationElementIndexPathsToOriginalLayoutAttributes;

}
-(id)initWithCollectionView:(id)arg1 ;
-(void)applyBoundsAnimationToCollectionView:(const CKComponentBoundsAnimation*)arg1 ;
@end
