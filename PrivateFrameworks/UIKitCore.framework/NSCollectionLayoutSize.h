/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutDimension;

@interface NSCollectionLayoutSize : NSObject <NSCopying> {

	NSCollectionLayoutDimension* _widthDimension;
	NSCollectionLayoutDimension* _heightDimension;
	long long _widthSemantic;
	long long _heightSemantic;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                                                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long widthSemantic;                                    //@synthesize widthSemantic=_widthSemantic - In the implementation block
@property (assign,nonatomic) long long heightSemantic;                                   //@synthesize heightSemantic=_heightSemantic - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutDimension * widthDimension;               //@synthesize widthDimension=_widthDimension - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutDimension * heightDimension;              //@synthesize heightDimension=_heightDimension - In the implementation block
+(id)sizeWithWidthDimension:(id)arg1 heightDimension:(id)arg2 ;
+(id)sizeWithAbsoluteSize:(CGSize)arg1 ;
+(id)sizeWithContainerSize;
+(id)sizeWithContainerWidthFactor:(double)arg1 containerHeightFactor:(double)arg2 ;
+(id)sizeWithSize:(CGSize)arg1 widthSemantic:(long long)arg2 heightSemantic:(long long)arg3 ;
+(id)sizeWithWidth:(double)arg1 widthSemantic:(long long)arg2 height:(double)arg3 heightSemantic:(long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)isContainerSize;
-(BOOL)_isEstimatedForAxis:(unsigned long long)arg1 ;
-(BOOL)isEstimated;
-(CGSize)_effectiveSizeForContainer:(id)arg1 ;
-(NSCollectionLayoutDimension *)widthDimension;
-(NSCollectionLayoutDimension *)heightDimension;
-(id)initWithSize:(CGSize)arg1 widthSemantic:(long long)arg2 heightSemantic:(long long)arg3 width:(id)arg4 height:(id)arg5 ;
-(long long)widthSemantic;
-(long long)heightSemantic;
-(CGSize)_effectiveSizeForContainer:(id)arg1 ignoringInsets:(BOOL)arg2 ;
-(void)setWidthDimension:(NSCollectionLayoutDimension *)arg1 ;
-(void)setHeightDimension:(NSCollectionLayoutDimension *)arg1 ;
-(void)setWidthSemantic:(long long)arg1 ;
-(void)setHeightSemantic:(long long)arg1 ;
@end
