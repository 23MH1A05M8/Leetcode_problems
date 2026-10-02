# Write your MySQL query statement below
WITH Cost as(
    select stock_name,
    sum(CASE WHEN operation="Buy" then price else 0 end) as cost_buy,
    sum(case when operation="Sell" then price else 0 end) as cost_sold
    from Stocks
    -- where operation="Buy"
    group by stock_name
)
-- WITH sold as(
--     select stock_name,sum(price) as cost_sold
--     from Stocks
--     where operation='Sell'
-- )
select stock_name,(cost_sold-cost_buy) as capital_gain_loss from Cost;