/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSString;

@interface NewsArticles.EndOfArticlePublisherView : UIView {

	 titleLabel;
	 logoImageView;
	 logoNameLabel;
	 followButton;
	 backgroundColorView;
	 logoImageOnTap;
	 axElement;

}

@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (copy,nonatomic) NSArray * accessibilityElements; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (copy,nonatomic) NSString * accessibilityValue; 
@property (copy,nonatomic) NSString * accessibilityHint; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
-(NSString *)accessibilityLabel;
-(NSString *)accessibilityValue;
-(NSString *)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end
