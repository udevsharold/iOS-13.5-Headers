/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, NSString;

@interface WFTableViewHeaderFooterTextView : UITableViewHeaderFooterView {

	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(id)init;
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

