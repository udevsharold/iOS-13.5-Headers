/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewCompositionalLayoutConfiguration.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class NSArray, NSString;

@interface _UICollectionViewCompositionalLayoutMutableConfiguration : NSObject <_UICollectionViewCompositionalLayoutConfiguration, _UICollectionLayoutAPIRespresenting> {

	long long _scrollDirection;
	double _interSectionSpacing;
	NSArray* _boundarySupplementaryItems;

}

@property (assign,nonatomic) long long scrollDirection;                       //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) double interSectionSpacing;                      //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,copy) NSArray * boundarySupplementaryItems;              //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)boundarySupplementaryItems;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(void)setScrollDirection:(long long)arg1 ;
-(long long)scrollDirection;
-(double)interSectionSpacing;
-(void)setInterSectionSpacing:(double)arg1 ;
-(id)_apiRepresentation;
-(id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3 ;
@end
