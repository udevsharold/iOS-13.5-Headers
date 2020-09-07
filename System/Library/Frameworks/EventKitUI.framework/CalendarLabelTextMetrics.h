/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont, UIColor, NSString;


@protocol CalendarLabelTextMetrics
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) NSString * text; 
@required
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(void)setTextColor:(id)arg1;
-(void)setFont:(id)arg1;
-(void)setNumberOfLines:(long long)arg1;
-(void)setTextAlignment:(long long)arg1;
-(UIFont *)font;
-(long long)numberOfLines;
-(UIColor *)textColor;
-(CGRect*)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
-(long long)textAlignment;

@end
