/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSString;

@interface SCWatchlistReorderSymbolCommand : NSObject <SCKZoneCommand> {

	NSString* _symbol;
	NSString* _precedingSymbol;

}

@property (nonatomic,copy,readonly) NSString * symbol;                       //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,copy,readonly) NSString * precedingSymbol;              //@synthesize precedingSymbol=_precedingSymbol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)symbol;
-(id)initWithSymbol:(id)arg1 precedingSymbol:(id)arg2 ;
-(void)executeWithZone:(id)arg1 ;
-(NSString *)precedingSymbol;
@end

