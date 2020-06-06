/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUSizer.h>

@protocol NUSizer <NSObject>
@property (nonatomic,readonly) BOOL flexible; 
@required
-(BOOL)flexible;
-(CGRect*)frameInBounds:(CGRect)arg1 cursor:(double)arg2 options:(NULayoutOptions)arg3 layoutContext:(id)arg4;

@end


@class NSString;

@interface NUSizer : NSObject <NUSizer> {

	BOOL _flexible;
	BOOL _alwaysIntegral;
	NSString* _desc;
	/*^block*/id _sizerBlock;

}

@property (nonatomic,copy,readonly) NSString * desc;                //@synthesize desc=_desc - In the implementation block
@property (nonatomic,copy,readonly) id sizerBlock;                  //@synthesize sizerBlock=_sizerBlock - In the implementation block
@property (nonatomic,readonly) BOOL flexible;                       //@synthesize flexible=_flexible - In the implementation block
@property (nonatomic,readonly) BOOL alwaysIntegral;                 //@synthesize alwaysIntegral=_alwaysIntegral - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)desc;
-(BOOL)flexible;
-(id)initWithDescription:(id)arg1 flexible:(BOOL)arg2 sizerBlock:(/*^block*/id)arg3 ;
-(BOOL)alwaysIntegral;
-(id)sizerBlock;
-(CGRect)frameInBounds:(CGRect)arg1 cursor:(double)arg2 options:(NULayoutOptions)arg3 layoutContext:(id)arg4 ;
-(id)initWithDescription:(id)arg1 sizerBlock:(/*^block*/id)arg2 ;
@end

