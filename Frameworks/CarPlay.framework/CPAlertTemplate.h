/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPAlertDelegate.h>

@class NSArray, NSString;

@interface CPAlertTemplate : CPTemplate <CPAlertDelegate> {

	NSArray* _titleVariants;
	NSArray* _actions;

}

@property (assign,nonatomic,__weak) id<CPAlertDelegate> templateDelegate; 
@property (nonatomic,copy,readonly) NSArray * titleVariants;                           //@synthesize titleVariants=_titleVariants - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                                      //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)actions;
-(void)_addAction:(id)arg1 ;
-(void)handleAlertActionForIdentifier:(id)arg1 ;
-(NSArray *)titleVariants;
-(id)initWithTitleVariants:(id)arg1 actions:(id)arg2 ;
@end

