/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UISegmentedControl, NSString;

@interface CKDetailsSegmentedControlCell : CKDetailsCell <CKDetailsCell> {

	UISegmentedControl* _segmentedControl;

}

@property (nonatomic,retain) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
+(BOOL)shouldHighlight;
-(void)layoutSubviews;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
@end

