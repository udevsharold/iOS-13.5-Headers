/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@class UIView, UIBarButtonItem;

@interface WFAlertPresentationSource : NSObject {

	BOOL _canOverlapSourceViewRect;
	UIView* _sourceView;
	UIBarButtonItem* _barButtonItem;
	unsigned long long _permittedArrowDirections;
	CGRect _sourceRect;

}

@property (nonatomic,readonly) CGRect sourceRect;                                      //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,readonly) UIView * sourceView;                                    //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem;                        //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (assign,nonatomic) unsigned long long permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (assign,nonatomic) BOOL canOverlapSourceViewRect;                            //@synthesize canOverlapSourceViewRect=_canOverlapSourceViewRect - In the implementation block
+(id)sourceWithView:(id)arg1 ;
+(id)sourceWithView:(id)arg1 rect:(CGRect)arg2 ;
+(id)sourceWithBarButtonItem:(id)arg1 ;
-(id)init;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(UIBarButtonItem *)barButtonItem;
-(void)setPermittedArrowDirections:(unsigned long long)arg1 ;
-(void)setCanOverlapSourceViewRect:(BOOL)arg1 ;
-(BOOL)canOverlapSourceViewRect;
-(unsigned long long)permittedArrowDirections;
-(id)initWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 barButtonItem:(id)arg3 ;
@end

