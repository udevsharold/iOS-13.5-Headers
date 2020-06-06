/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBDockOffscreenFractionModifying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBRootFolderView;

@interface _SBRootFolderDockOffscreenFractionClient : NSObject <SBDockOffscreenFractionModifying, BSDescriptionProviding> {

	NSString* _reason;
	SBRootFolderView* _folderView;
	double _desiredOffscreenFraction;

}

@property (nonatomic,retain) SBRootFolderView * folderView;                //@synthesize folderView=_folderView - In the implementation block
@property (assign,nonatomic) double desiredOffscreenFraction;              //@synthesize desiredOffscreenFraction=_desiredOffscreenFraction - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)reason;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setDockOffscreenFraction:(double)arg1 ;
-(SBRootFolderView *)folderView;
-(id)initWithFolderView:(id)arg1 reason:(id)arg2 ;
-(double)desiredOffscreenFraction;
-(void)setDesiredOffscreenFraction:(double)arg1 ;
-(void)setFolderView:(SBRootFolderView *)arg1 ;
-(void)layoutIfNeededForDockOffscreenFractionChanged;
@end

