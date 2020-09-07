/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SXInsertableComponent <NSObject>
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * layout; 
@property (nonatomic,retain) id<SXComponentAnchor> anchor; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)layout;
-(void)setLayout:(id)arg1;
-(id<SXComponentAnchor>)anchor;
-(void)setAnchor:(id)arg1;

@end
