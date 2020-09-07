/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXResourceDataSourceContainer.h>

@protocol SXResourceDataSourceContainer <SXResourceDataSourceProvider>
@required
-(void)registerResourceDataSource:(id)arg1;

@end


@protocol SXResourceDataSource;
@class NSString;

@interface SXResourceDataSourceContainer : NSObject <SXResourceDataSourceContainer> {

	id<SXResourceDataSource> _resourceDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXResourceDataSource> resourceDataSource;              //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
-(id<SXResourceDataSource>)resourceDataSource;
-(void)registerResourceDataSource:(id)arg1 ;
@end
