/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, CAGradientLayer;

@interface ICGradientView : UIView {

	NSArray* _gradientColors;

}

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
@property (nonatomic,copy) NSArray * gradientColors;                         //@synthesize gradientColors=_gradientColors - In the implementation block
@property (nonatomic,copy) NSArray * locations; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setGradientColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(CAGradientLayer *)gradientLayer;
-(void)setLocations:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(void)updateLayerColors;
@end

