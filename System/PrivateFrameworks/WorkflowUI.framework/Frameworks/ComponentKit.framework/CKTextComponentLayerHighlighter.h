/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ComponentKit/ComponentKit-Structs.h>
@class CKTextComponentLayer, CKHighlightOverlayLayer;

@interface CKTextComponentLayerHighlighter : NSObject {

	CKTextComponentLayer* _textComponentLayer;
	CKHighlightOverlayLayer* _highlightOverlayLayer;
	NSRange _highlightedRange;

}

@property (assign,nonatomic) NSRange highlightedRange;              //@synthesize highlightedRange=_highlightedRange - In the implementation block
-(void)layoutHighlight;
-(id)initWithTextComponentLayer:(id)arg1 ;
-(void)setHighlightedRange:(NSRange)arg1 ;
-(NSRange)highlightedRange;
@end
