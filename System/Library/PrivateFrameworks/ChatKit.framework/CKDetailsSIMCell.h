/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UILabel, NSString;

@interface CKDetailsSIMCell : CKDetailsCell <CKDetailsCell> {

	UILabel* _simTitleLabel;

}

@property (nonatomic,retain) UILabel * simTitleLabel;               //@synthesize simTitleLabel=_simTitleLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
+(id)reuseIdentifier;
+(BOOL)shouldHighlight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSimTitleLabel:(UILabel *)arg1 ;
-(UILabel *)simTitleLabel;
-(void)initConstraints;
@end
