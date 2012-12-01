//
//  RSAvgItem.h
//  RSReport
//
//  Created by Roberto Scarciello on 22/11/12.
//  Copyright (c) 2012 Roberto Scarciello. All rights reserved.
//

#import "RSTextItem.h"

@interface RSAvgItem : RSTextItem

@property (assign) BOOL isCurrency;
@property (nonatomic, strong) NSLocale *locale;

@end
