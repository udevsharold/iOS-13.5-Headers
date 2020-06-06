/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@class NSMutableArray, CKChatItem;

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	CGRect _targetFrame;
	CGRect _currentFrame;
	double _easing;
	double _targetEasing;
	char _orientation;
	CATransform3D _contentTransform3D;
	double _targetCenterY;
	double _currentCenterY;
	double _height;
	double _factor;
	BOOL _hidden;
	double _associatedVerticalShift;
	NSMutableArray* _associatedLayoutAttributes;
	CKTranscriptCollectionViewLayoutAttributes* _initialParentLayoutAttributes;
	CKChatItem* _chatItem;
	CGSize _parentChatItemSize;

}

@property (nonatomic,retain) CKChatItem * chatItem;                           //@synthesize chatItem=_chatItem - In the implementation block
@property (assign,nonatomic) CGSize parentChatItemSize;                       //@synthesize parentChatItemSize=_parentChatItemSize - In the implementation block
@property (nonatomic,readonly) CATransform3D contentTransform3D;              //@synthesize contentTransform3D=_contentTransform3D - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKChatItem *)chatItem;
-(void)setChatItem:(CKChatItem *)arg1 ;
-(CGSize)parentChatItemSize;
-(void)setAlphaOrFilterLevel:(double)arg1 ;
-(CATransform3D)contentTransform3D;
-(void)setParentChatItemSize:(CGSize)arg1 ;
@end

